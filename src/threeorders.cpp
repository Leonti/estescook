/*************************************************************************************
*  Estescook - Kitchen part of Estes Restaurant Point Of Sale                        *
*  Copyright (C) 2009  Leonti Bielski                                                *
*                                                                                    *
*  This program is free software; you can redistribute it and/or modify              *
*  it under the terms of the GNU General Public License as published by              *
*  the Free Software Foundation; either version 2 of the License, or                 *
*  (at your option) any later version.                                               *
*                                                                                    *
*  This program is distributed in the hope that it will be useful,                   *
*  but WITHOUT ANY WARRANTY; without even the implied warranty of                    *
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                     *
*  GNU General Public License for more details.                                      *
*                                                                                    *
*  You should have received a copy of the GNU General Public License                 *
*  along with this program; if not, write to the Free Software                       *
*  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA    *
*************************************************************************************/
#include "threeorders.h"

//(*InternalHeaders(threeorders)
#include <wx/string.h>
#include <wx/intl.h>
#include <wx/font.h>
//*)
#include <wx/arrimpl.cpp> // this is a magic incantation which must be done!
WX_DEFINE_OBJARRAY(ArrayOfPanelPointers);
WX_DEFINE_OBJARRAY(ArrayOfInts);
//(*IdInit(threeorders)
const long threeorders::ID_STATICTEXT3 = wxNewId();
const long threeorders::ID_STATICTEXT4 = wxNewId();
const long threeorders::ID_HTMLLISTBOX5 = wxNewId();
const long threeorders::ID_STATICTEXT1 = wxNewId();
const long threeorders::ID_STATICTEXT2 = wxNewId();
const long threeorders::ID_STATICTEXT9 = wxNewId();
const long threeorders::ID_BUTTON5 = wxNewId();
const long threeorders::ID_BUTTON6 = wxNewId();
//*)


BEGIN_EVENT_TABLE(threeorders,wxPanel)
    //(*EventTable(threeorders)
    //*)
    EVT_HTML_LINK_CLICKED(wxID_ANY, threeorders::OnListUrlClick)

END_EVENT_TABLE()

threeorders::threeorders(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    panelPointers pointTemp;
    pointTemp.buttonUpId = ID_BUTTON5;
    pointTemp.buttonDownId = ID_BUTTON6;
    pointTemp.listBoxId = ID_HTMLLISTBOX5;
    //(*Initialize(threeorders)
    wxFlexGridSizer* FlexGridSizer1;
    wxFlexGridSizer* FlexGridSizer7;
    wxFlexGridSizer* FlexGridSizer9;
    wxFlexGridSizer* FlexGridSizer6;
    wxFlexGridSizer* FlexGridSizer3;

    Create(parent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("wxID_ANY"));
    wxFont thisFont(14,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    SetFont(thisFont);
    GridSizer3 = new wxGridSizer(0, 1, 0, 0);
    FlexGridSizer2 = new wxFlexGridSizer(0, 5, 0, 0);
    FlexGridSizer3 = new wxFlexGridSizer(4, 1, 0, 0);
    FlexGridSizer1 = new wxFlexGridSizer(0, 2, 0, 0);
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Order nr: 15"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    FlexGridSizer1->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Witaly Belskiy"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    wxFont StaticText4Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    StaticText4->SetFont(StaticText4Font);
    FlexGridSizer1->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer3->Add(FlexGridSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    ListBox1 = new wxSimpleHtmlListBox(this, ID_HTMLLISTBOX5, wxDefaultPosition, wxSize(250,430), 0, 0, wxSUNKEN_BORDER, wxDefaultValidator, _T("ID_HTMLLISTBOX5"));
    FlexGridSizer3->Add(ListBox1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer6 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer7 = new wxFlexGridSizer(4, 1, 0, 0);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    FlexGridSizer7->Add(StaticText1, 1, wxLEFT|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Comment:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    wxFont StaticText2Font(13,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    FlexGridSizer7->Add(StaticText2, 1, wxLEFT|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    StaticText9 = new wxStaticText(this, ID_STATICTEXT9, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
    wxFont StaticText9Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    StaticText9->SetFont(StaticText9Font);
    FlexGridSizer7->Add(StaticText9, 1, wxLEFT|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer7->Add(160,1,1, wxALL|wxALIGN_BOTTOM|wxALIGN_CENTER_HORIZONTAL, 5);
    FlexGridSizer6->Add(FlexGridSizer7, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    FlexGridSizer9 = new wxFlexGridSizer(2, 1, 0, 0);
    Button5 = new wxButton(this, ID_BUTTON5, _("UP"), wxDefaultPosition, wxSize(80,50), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    FlexGridSizer9->Add(Button5, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Button6 = new wxButton(this, ID_BUTTON6, _("DOWN"), wxDefaultPosition, wxSize(80,50), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    FlexGridSizer9->Add(Button6, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer6->Add(FlexGridSizer9, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
    FlexGridSizer3->Add(FlexGridSizer6, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
    FlexGridSizer2->Add(FlexGridSizer3, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridSizer3->Add(FlexGridSizer2, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(GridSizer3);
    GridSizer3->Fit(this);
    GridSizer3->SetSizeHints(this);
    //*)
    pointTemp.number=StaticText3;
    pointTemp.name=StaticText4;
    pointTemp.time=StaticText1;
    pointTemp.comment=StaticText9;
    pointTemp.listbox=ListBox1;
    pointers.Add(pointTemp);

    Connect(pointTemp.buttonUpId, wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&threeorders::OnButtonUpClick);
    Connect(pointTemp.buttonDownId, wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&threeorders::OnButtonDownClick);
    Connect(pointTemp.listBoxId,  wxEVT_COMMAND_LISTBOX_SELECTED,(wxObjectEventFunction)&threeorders::OnListBoxSelect);
    href = false;
    toDelete = false;
}

threeorders::~threeorders()
{
    //(*Destroy(threeorders)
    //*)
}
void threeorders::setFace()
{


    for (int i=1; i<ordersIds.GetCount(); ++i)
    {
        addOrder();
    }
}
void threeorders::addOrder()
{

    panelPointers pointTemp;
    pointTemp.buttonUpId = wxNewId();
    pointTemp.buttonDownId = wxNewId();
    pointTemp.listBoxId = wxNewId();
    wxFlexGridSizer* FlexGridSizerTemp3 = new wxFlexGridSizer(4, 1, 0, 0);
    wxFlexGridSizer* FlexGridSizerTemp1 = new wxFlexGridSizer(0, 2, 0, 0);
    pointTemp.sizer = FlexGridSizerTemp3;

    pointTemp.number = new wxStaticText(this, ID_STATICTEXT3, _("Order nr: 14"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT33"));
    FlexGridSizerTemp1->Add(pointTemp.number, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    pointTemp.name = new wxStaticText(this, ID_STATICTEXT4, _("Witaly Belskiy"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT44"));
    wxFont StaticTextTemp4Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    pointTemp.name->SetFont(StaticTextTemp4Font);
    FlexGridSizerTemp1->Add(pointTemp.name, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizerTemp3->Add(FlexGridSizerTemp1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    pointTemp.listbox = new wxSimpleHtmlListBox(this, pointTemp.listBoxId, wxDefaultPosition, wxSize(250,430), 0, 0, wxSUNKEN_BORDER, wxDefaultValidator, _T("ID_HTMLLISTBOX55"));
    FlexGridSizerTemp3->Add(pointTemp.listbox, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    wxFlexGridSizer* FlexGridSizerTemp6 = new wxFlexGridSizer(0, 3, 0, 0);
    wxFlexGridSizer* FlexGridSizerTemp7 = new wxFlexGridSizer(4, 1, 0, 0);
    pointTemp.time = new wxStaticText(this, ID_STATICTEXT1, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    FlexGridSizerTemp7->Add(pointTemp.time, 1, wxLEFT|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    wxStaticText* StaticTextTemp2 = new wxStaticText(this, ID_STATICTEXT2, _("Comment:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    wxFont StaticTextTemp2Font(13,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    StaticTextTemp2->SetFont(StaticTextTemp2Font);
    FlexGridSizerTemp7->Add(StaticTextTemp2, 1, wxLEFT|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    pointTemp.comment = new wxStaticText(this, ID_STATICTEXT9, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
    wxFont StaticText9Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    pointTemp.comment->SetFont(StaticText9Font);
    FlexGridSizerTemp7->Add(pointTemp.comment, 1, wxLEFT|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizerTemp7->Add(160,1,1, wxALL|wxALIGN_BOTTOM|wxALIGN_CENTER_HORIZONTAL, 5);
    FlexGridSizerTemp6->Add(FlexGridSizerTemp7, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    wxFlexGridSizer* FlexGridSizerTemp9 = new wxFlexGridSizer(2, 1, 0, 0);
    wxButton* ButtonTemp5 = new wxButton(this, pointTemp.buttonUpId, _("UP"), wxDefaultPosition, wxSize(80,50), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    FlexGridSizerTemp9->Add(ButtonTemp5, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    wxButton* ButtonTemp6 = new wxButton(this, pointTemp.buttonDownId, _("DOWN"), wxDefaultPosition, wxSize(80,50), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    FlexGridSizerTemp9->Add(ButtonTemp6, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizerTemp6->Add(FlexGridSizerTemp9, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
    FlexGridSizerTemp3->Add(FlexGridSizerTemp6, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
    FlexGridSizer2->Add(FlexGridSizerTemp3, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridSizer3->SetSizeHints(this);

    pointers.Add(pointTemp);

    Connect(pointTemp.buttonUpId, wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&threeorders::OnButtonUpClick);
    Connect(pointTemp.buttonDownId, wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&threeorders::OnButtonDownClick);
    Connect(pointTemp.listBoxId,  wxEVT_COMMAND_LISTBOX_SELECTED,(wxObjectEventFunction)&threeorders::OnListBoxSelect);
}

void threeorders::fillAll()
{

    ordersInfos orders = getOrdersInfo();
    if(orders.success)
    {
        int oldOrdersCount = ordersIds.GetCount();
        ordersIds = orders.orderIdsArr[Notebook1->GetSelection()-1];
        if(oldOrdersCount != orders.orderIdsArr[Notebook1->GetSelection()-1].GetCount()) //so we have to delete some orders
        {
            clearPanels();
            setFace();
            GridSizer3->SetSizeHints(this);
        }

        for (int i=0; i<ordersIds.GetCount(); ++i)
        {
            pointers[i].orderId = ordersIds[i];
            fillOrder(pointers[i]);
        }

    }
}

void threeorders::fillOrder(panelPointers point)
{
    point.listbox -> Clear();
    wxDateTime current = wxDateTime::Now();
    wxDateTime orderTime;
    mysqlpp::Query query = conn->query();
    query << "SELECT `orders`.`number`, `orders`.`time`, `orders`.`comment`, `workers`.`name` \
    FROM `orders`, `workers` WHERE `orders`.`id`=" << point.orderId << " AND `workers`.`id`=`orders`.`waiter_id`";
    mysqlpp::StoreQueryResult res = query.store();
    if(res)
    {
        mysqlpp::Row row;
        row = res.at(0);
        wxString num;
        num << _("Order nr: ") << int(row["number"]);
        point.number -> SetLabel(num);
        point.name -> SetLabel(std2wx(std::string(row["name"]),wxConvUI));
        orderTime.ParseDateTime(std2wx(std::string(row["time"]),wxConvUI));
        wxTimeSpan diff = wxDateTime::Now() - orderTime;
        point.time->SetLabel(diff.Format(_T("%M")) + _(" min"));
        point.comment->SetLabel(std2wx(std::string(row["comment"]),wxConvUI));
    }


    query << "SELECT `id` FROM `orders_dishes` WHERE `orders_dishes`.`kitchen`=1 AND `order_id`=" << point.orderId;
    res = query.store();
    if(res)
    {
        mysqlpp::Row row;
        mysqlpp::StoreQueryResult::size_type i;
        for (i = 0; i < res.num_rows(); ++i)
        {
            row = res[i];

            point.listbox->Append(formatItem(conn, point.listbox->GetCount(), int(row["id"])));
        }
    }
}



void threeorders::OnListBoxSelect(wxCommandEvent& event)
{
    for(int i = 0; i < pointers.GetCount(); ++i)
    {
        if(pointers[i].listBoxId == event.GetId())
        {
            pointers[i].listbox->SetSelection(-1);

            if(toDelete)
            {
                clearPanels();
                refreshAll();
            }
            break;
        }
    }
}
void threeorders::OnButtonUpClick(wxCommandEvent& event)
{

    for(int i = 0; i < pointers.GetCount(); ++i)
    {
        if(pointers[i].buttonUpId == event.GetId())
        {
            pointers[i].listbox -> ScrollLines(-2);
            break;
        }
    }
}
void threeorders::OnButtonDownClick(wxCommandEvent& event)
{
    for(int i = 0; i < pointers.GetCount(); ++i)
    {
        if(pointers[i].buttonDownId == event.GetId())
        {
            pointers[i].listbox -> ScrollLines(2);
            break;
        }
    }
}
void threeorders::OnListUrlClick(wxHtmlLinkEvent& event)
{

    long templong;

    wxString link = event.GetLinkInfo().GetHref();

    link.Mid(0,link.Find(_T(":"))).ToLong(&templong);
    href=true;
    int num = templong;
    wxString temp;
    temp << num;

    mysqlpp::Query query = conn->query();
    query <<"UPDATE `orders_dishes` SET `ready` = '1' \
   WHERE `orders_dishes`.`id` =" << wx2std(link.Mid(link.Find(_T(":"))+1),wxConvUI) << " LIMIT 1";
    query.execute();

    for(int i = 0; i < pointers.GetCount(); ++i)
    {
        if(pointers[i].listBoxId == event.GetId())
        {
            wxString toReplace = pointers[i].listbox->GetString(num);
            toReplace.Replace(_T("todo.png"),_T("done.png"));
            pointers[i].listbox->SetString(num, toReplace);
            query << "SELECT `id` FROM `orders_dishes` WHERE `ready`=0 AND `orders_dishes`.`kitchen`=1 AND `order_id`=" << pointers[i].orderId;
            mysqlpp::StoreQueryResult res = query.store();


            if(res)
            {
                if(!res.num_rows())  //no dishes to prepare
                {

                    query << "UPDATE `orders` SET `status` = '4' WHERE `orders`.`id` =" << pointers[i].orderId << " LIMIT 1 ";
                    query.execute();

                    wxString tem;
                    tem << _T("r:") << pointers[i].orderId;
                    sendMessageToServer(SocketClient, tem);

                    toDelete = true;
                }
            }
            break;
        }
    }
}

void threeorders::clearPanels()
{

    for(int i = pointers.GetCount()-1; i > 0; --i)
    {
        Disconnect(pointers[i].buttonUpId, wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&threeorders::OnButtonUpClick);
        Disconnect(pointers[i].buttonDownId, wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&threeorders::OnButtonDownClick);
        Disconnect(pointers[i].listBoxId,  wxEVT_COMMAND_LISTBOX_SELECTED,(wxObjectEventFunction)&threeorders::OnListBoxSelect);
        pointers[i].sizer->Clear(true);
        FlexGridSizer2->Remove(i);
        pointers.RemoveAt(i);
    }

}

void threeorders::refreshAll()  //refreshes the panel after completing an order
{

    ordersInfos orders = getOrdersInfo();

    if(orders.success)
    {
        for(int j = 0; j < orders.titles.GetCount(); ++j)
        {
            if( j == Notebook1->GetSelection()-1)
            {
                Notebook1->SetPageText(Notebook1->GetSelection(),orders.titles[j]);
                ordersIds = orders.orderIdsArr[j];
                setFace();
                fillAll();
            }
            else
            {
                Notebook1->SetPageText(j+1, orders.titles[j]);
            }
        }

        int pages = Notebook1->GetPageCount()-1;
        for(int t = pages; t > orders.titles.GetCount(); --t) //deleting unnecessary pages
        {
            Notebook1->RemovePage(t);
        }

    }
    else  //we hove no pending orders - free as eagle in the sky!
    {
        Notebook1->RemovePage(1);
    }
    GridSizer3->SetSizeHints(this);
}

ordersInfos threeorders::getOrdersInfo()
{

    wxDateTime current = wxDateTime::Now();
    mysqlpp::Query query = conn->query();
    query << "SELECT `id`, `number` FROM `orders` WHERE `time` > '"<< wx2std(current.FormatISODate(), wxConvUI) <<"' AND `status` = 3";
    mysqlpp::StoreQueryResult res = query.store();

    ordersInfos orders;
    orders.success = false;
    if (res)
    {
        if(res.num_rows() != 0)
        {

            mysqlpp::Row row;
            mysqlpp::StoreQueryResult::size_type i;


            wxString panTitle;
            wxArrayInt orderIdsTemp;
            orders.success = true;

            for (i = 0; i < res.num_rows(); ++i)
            {
                row = res[i];


                if(i % 3 == 0 && i != 0)
                {
                    orders.titles.Add(panTitle);
                    orders.orderIdsArr.Add(orderIdsTemp);
                    panTitle.Clear();
                    orderIdsTemp.Clear();
                    panTitle << std2wx(std::string(row["number"]), wxConvUI);
                    orderIdsTemp.Add(int(row["id"]));
                }
                else
                {
                    wxString delim;
                    if(i != 0) delim = _T(" - ");
                    panTitle <<  delim << std2wx(std::string(row["number"]), wxConvUI);
                    orderIdsTemp.Add(int(row["id"]));
                }
            }

            if(orderIdsTemp.GetCount() != 0)
            {
                orders.titles.Add(panTitle);
                orders.orderIdsArr.Add(orderIdsTemp);
            }
        }
    }
    return orders;
}
