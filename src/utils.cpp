#include "utils.h"
wxString formatItem(mysqlpp::Connection* conn, int num, int dishId, bool main){

    wxArrayString parts; //getting parts from mysql-query
wxString title;
wxString comment;
wxString qty;
wxTimeSpan diff;
bool ready = false;
    mysqlpp::Query query = conn->query();
    query << "SELECT `orders_dishes`.`qty`,`orders_dishes`.`name`,`orders_dishes`.`comment`  ,\
    `orders_dishes`.`ready`,`orders`.`time` FROM `orders_dishes`,`orders` WHERE \
    `orders_dishes`.`id` = "<< dishId <<" AND `orders_dishes`.`order_id`=`orders`.`id`";
mysqlpp::StoreQueryResult res = query.store();
    if (res)
    {
        mysqlpp::Row row = res.at(0);
        title = std2wx(std::string(row["name"]), wxConvUI);
        comment = std2wx(std::string(row["comment"]), wxConvUI);
        qty = std2wx(std::string(row["qty"]), wxConvUI);
        ready = bool(row["ready"]);
        wxDateTime time;
        time.ParseDateTime(std2wx(std::string(row["time"]),wxConvUI));
        diff = wxDateTime::Now() - time;
        }

query << "SELECT * FROM `orders_dishes_parts` WHERE `orders_dishes_id`=" << dishId;
    res = query.store();
    if (res)
    {
mysqlpp::Row row;
mysqlpp::StoreQueryResult::size_type i;
for (i = 0; i < res.num_rows(); ++i) {
  row = res[i];

            wxString partNameToAdd = getPartName(conn, int(row["parts_id"]));
if(!bool(row["using"])){
partNameToAdd  = _("<b>NO</b> ") + partNameToAdd;
    }
parts.Add(partNameToAdd);
            }
            }



wxString toRet;
if(!main){
toRet << _T("<b><font size=4>") << title << _T(" X ")<< qty <<_T("</b></font>");
}else{
toRet << _T("<br align = left>") << _("Time:") << _T(" <b>") << diff.Format(_T("%M")) << _(" min") <<_T("</b>") << _(" Qty:") << _T(" <b>") << qty <<_T("</b></br>");
}

toRet << _T("<div align=right><table cellspacing=0 cellpadding=0 WIDTH=100%><tr><td>");

for(int i = 0; i < parts.GetCount(); ++i){
toRet << _T("<br> * ") << parts[i];
    }
wxString readyImage;
if(ready){
    readyImage = _T("done.png");
    }else{
    readyImage = _T("todo.png");
        }

         wxStandardPaths path;
wxFileName imageName;
imageName.Assign(path.GetDataDir(),readyImage);

toRet << _T("</td><td width = 50><a href=") << num << _T(":") << dishId << _T("><img src=") << imageName.GetFullPath() << _T("></a></td></tr></table></div>");

if(comment != _T("")){
toRet << _T("<font size=2><br align=left>Comment: <i>") << comment << _T("</i></font>");
}

return toRet;
    }

wxString getPartName(mysqlpp::Connection* conn, int partId){

        mysqlpp::Query query = conn->query();
        query << "SELECT * FROM `parts` WHERE `id`=" << partId;
        mysqlpp::StoreQueryResult res = query.store();
wxString partName;
        if (res)
        {
            mysqlpp::Row row = res.at(0);
            partName = std2wx(std::string(row["name"]),wxConvUI);

        }

        return partName;

    }

bool sendMessageToServer(wxSocketClient* SocketClient, wxString message){
   if (SocketClient->IsConnected()){
    unsigned char c = 0xBE; //start to send message to main comp
    SocketClient->Write(&c, 1);
    SocketClient->SetFlags(wxSOCKET_WAITALL);
    const wxChar *buf;
    unsigned char len;
    buf = message.c_str();
    len  = (unsigned char)((wxStrlen(buf) + 1) * sizeof(wxChar));
    SocketClient->Write(&len, 1);
    SocketClient->Write(buf, len);
}
    }
