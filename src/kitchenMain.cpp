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
#include "version.h"
#include "kitchenMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(kitchenFrame)
#include <wx/string.h>
#include <wx/intl.h>
#include <wx/font.h>
//*)
#include <wx/arrimpl.cpp> // this is a magic incantation which must be done!
WX_DEFINE_OBJARRAY(ArrayOfThreeorders);

//helper functions
enum wxbuildinfoformat
{
    short_f, long_f
};

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(kitchenFrame)
const long kitchenFrame::ID_STATICTEXT1 = wxNewId();
const long kitchenFrame::ID_BUTTON5 = wxNewId();
const long kitchenFrame::ID_TOGGLEBUTTON1 = wxNewId();
const long kitchenFrame::ID_TOGGLEBUTTON2 = wxNewId();
const long kitchenFrame::ID_HTMLLISTBOX1 = wxNewId();
const long kitchenFrame::ID_HTMLLISTBOX2 = wxNewId();
const long kitchenFrame::ID_BUTTON3 = wxNewId();
const long kitchenFrame::ID_BUTTON4 = wxNewId();
const long kitchenFrame::ID_STATICTEXT2 = wxNewId();
const long kitchenFrame::ID_STATICTEXT9 = wxNewId();
const long kitchenFrame::ID_HTMLLISTBOX3 = wxNewId();
const long kitchenFrame::ID_BUTTON1 = wxNewId();
const long kitchenFrame::ID_BUTTON2 = wxNewId();
const long kitchenFrame::ID_TEXTCTRL1 = wxNewId();
const long kitchenFrame::ID_TEXTCTRL2 = wxNewId();
const long kitchenFrame::ID_BUTTON6 = wxNewId();
const long kitchenFrame::ID_PANEL1 = wxNewId();
const long kitchenFrame::ID_NOTEBOOK1 = wxNewId();
const long kitchenFrame::idMenuQuit = wxNewId();
const long kitchenFrame::ID_MENUITEM1 = wxNewId();
const long kitchenFrame::idMenuAbout = wxNewId();
const long kitchenFrame::ID_STATUSBAR1 = wxNewId();
const long kitchenFrame::ID_TIMER1 = wxNewId();
//*)
const long kitchenFrame::SOCKET_ID = wxNewId();

BEGIN_EVENT_TABLE(kitchenFrame,wxFrame)
    //(*EventTable(kitchenFrame)
    //*)
    EVT_HTML_LINK_CLICKED(wxID_ANY, kitchenFrame::OnUrlClick)
    EVT_SOCKET(SOCKET_ID,     kitchenFrame::OnSocketEvent)
END_EVENT_TABLE()

kitchenFrame::kitchenFrame(wxWindow* parent,wxWindowID id)
{
    vers << AutoVersion::MAJOR << _T(".") << AutoVersion::MINOR << _T(".") << AutoVersion::BUILD;
    readSet();
    //(*Initialize(kitchenFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxFlexGridSizer* FlexGridSizer8;
    wxGridSizer* GridSizer1;
    wxFlexGridSizer* FlexGridSizer1;
    wxFlexGridSizer* FlexGridSizer2;
    wxMenu* Menu1;
    wxGridSizer* GridSizer2;
    wxFlexGridSizer* FlexGridSizer7;
    wxFlexGridSizer* FlexGridSizer4;
    wxFlexGridSizer* FlexGridSizer6;
    wxFlexGridSizer* FlexGridSizer3;
    wxBoxSizer* BoxSizer1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;
    wxFlexGridSizer* FlexGridSizer5;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    GridSizer1 = new wxGridSizer(1, 1, 0, 0);
    Notebook1 = new wxNotebook(this, ID_NOTEBOOK1, wxDefaultPosition, wxDefaultSize, 0, _T("ID_NOTEBOOK1"));
    Panel1 = new wxPanel(Notebook1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    GridSizer2 = new wxGridSizer(0, 1, 0, 0);
    FlexGridSizer1 = new wxFlexGridSizer(1, 4, 0, 0);
    FlexGridSizer4 = new wxFlexGridSizer(2, 2, 0, 0);
    FlexGridSizer2 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Pending items:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    FlexGridSizer2->Add(StaticText1, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Button5 = new wxButton(Panel1, ID_BUTTON5, _("Refresh"), wxDefaultPosition, wxSize(90,50), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    wxFont Button5Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    Button5->SetFont(Button5Font);
    FlexGridSizer2->Add(Button5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer4->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    ToggleButton1 = new wxToggleButton(Panel1, ID_TOGGLEBUTTON1, _("Qty"), wxDefaultPosition, wxSize(80,50), 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON1"));
    ToggleButton1->SetValue(true);
    wxFont ToggleButton1Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    ToggleButton1->SetFont(ToggleButton1Font);
    BoxSizer1->Add(ToggleButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    ToggleButton2 = new wxToggleButton(Panel1, ID_TOGGLEBUTTON2, _("Time"), wxDefaultPosition, wxSize(80,50), 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON2"));
    wxFont ToggleButton2Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    ToggleButton2->SetFont(ToggleButton2Font);
    BoxSizer1->Add(ToggleButton2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer4->Add(BoxSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    ListBox2 = new wxSimpleHtmlListBox(Panel1, ID_HTMLLISTBOX1, wxDefaultPosition, wxSize(250,555), 0, 0, wxSUNKEN_BORDER, wxDefaultValidator, _T("ID_HTMLLISTBOX1"));
    FlexGridSizer4->Add(ListBox2, 1, wxTOP|wxBOTTOM|wxLEFT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    FlexGridSizer7 = new wxFlexGridSizer(30, 1, 0, 0);
    ListBox3 = new wxSimpleHtmlListBox(Panel1, ID_HTMLLISTBOX2, wxDefaultPosition, wxSize(250,435), 0, 0, wxSUNKEN_BORDER, wxDefaultValidator, _T("ID_HTMLLISTBOX2"));
    FlexGridSizer7->Add(ListBox3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    Button3 = new wxButton(Panel1, ID_BUTTON3, _("UP"), wxDefaultPosition, wxSize(80,50), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    wxFont Button3Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    Button3->SetFont(Button3Font);
    FlexGridSizer7->Add(Button3, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Button4 = new wxButton(Panel1, ID_BUTTON4, _("DOWN"), wxDefaultPosition, wxSize(80,50), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    wxFont Button4Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    Button4->SetFont(Button4Font);
    FlexGridSizer7->Add(Button4, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer4->Add(FlexGridSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    FlexGridSizer1->Add(FlexGridSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    FlexGridSizer1->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer5 = new wxFlexGridSizer(3, 1, 0, 0);
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Selected items info:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    wxFont StaticText2Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    FlexGridSizer5->Add(StaticText2, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    StaticText9 = new wxStaticText(Panel1, ID_STATICTEXT9, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
    wxFont StaticText9Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    StaticText9->SetFont(StaticText9Font);
    FlexGridSizer5->Add(StaticText9, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    ListBox4 = new wxSimpleHtmlListBox(Panel1, ID_HTMLLISTBOX3, wxDefaultPosition, wxSize(250,429), 0, 0, wxSUNKEN_BORDER, wxDefaultValidator, _T("ID_HTMLLISTBOX3"));
    FlexGridSizer5->Add(ListBox4, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("UP"), wxDefaultPosition, wxSize(80,50), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    wxFont Button1Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    Button1->SetFont(Button1Font);
    FlexGridSizer5->Add(Button1, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Button2 = new wxButton(Panel1, ID_BUTTON2, _("DOWN"), wxDefaultPosition, wxSize(80,50), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    wxFont Button2Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    Button2->SetFont(Button2Font);
    FlexGridSizer5->Add(Button2, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    FlexGridSizer6 = new wxFlexGridSizer(2, 1, 0, 0);
    FlexGridSizer3 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer6->Add(FlexGridSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer8 = new wxFlexGridSizer(3, 1, 0, 0);
    FlexGridSizer8->Add(20,327,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(200,130), wxTE_AUTO_SCROLL|wxTE_MULTILINE|wxTE_RICH2, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    FlexGridSizer8->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxSize(200,50), wxTE_AUTO_SCROLL|wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    FlexGridSizer8->Add(TextCtrl2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button6 = new wxButton(Panel1, ID_BUTTON6, _("Send"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
    FlexGridSizer8->Add(Button6, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer6->Add(FlexGridSizer8, 1, wxALL|wxALIGN_BOTTOM|wxALIGN_CENTER_HORIZONTAL, 5);
    FlexGridSizer1->Add(FlexGridSizer6, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridSizer2->Add(FlexGridSizer1, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1->SetSizer(GridSizer2);
    GridSizer2->Fit(Panel1);
    GridSizer2->SetSizeHints(Panel1);
    Notebook1->AddPage(Panel1, _("Pending items"), false);
    GridSizer1->Add(Notebook1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(GridSizer1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu3 = new wxMenu();
    MenuItem3 = new wxMenuItem(Menu3, ID_MENUITEM1, _("General"), wxEmptyString, wxITEM_NORMAL);
    Menu3->Append(MenuItem3);
    MenuBar1->Append(Menu3, _("Settings"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[2] = { -10, -10 };
    int __wxStatusBarStyles_1[2] = { wxSB_NORMAL, wxSB_NORMAL };
    StatusBar1->SetFieldsCount(2,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(2,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    Timer1.SetOwner(this, ID_TIMER1);
    Timer1.Start(60000, false);
    GridSizer1->Fit(this);
    GridSizer1->SetSizeHints(this);

    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kitchenFrame::OnButton5Click);
    Connect(ID_TOGGLEBUTTON1,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&kitchenFrame::OnToggleButton1Toggle);
    Connect(ID_TOGGLEBUTTON2,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&kitchenFrame::OnToggleButton2Toggle);
    Connect(ID_HTMLLISTBOX1,wxEVT_COMMAND_LISTBOX_SELECTED,(wxObjectEventFunction)&kitchenFrame::OnListBox2Select);
    Connect(ID_HTMLLISTBOX2,wxEVT_COMMAND_LISTBOX_SELECTED,(wxObjectEventFunction)&kitchenFrame::OnListBox3Select);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kitchenFrame::OnButton3Click);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kitchenFrame::OnButton4Click);
    Connect(ID_HTMLLISTBOX3,wxEVT_COMMAND_LISTBOX_SELECTED,(wxObjectEventFunction)&kitchenFrame::OnListBox4Select);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kitchenFrame::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kitchenFrame::OnButton2Click);
    Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kitchenFrame::OnButton6Click);
    Connect(ID_NOTEBOOK1,wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED,(wxObjectEventFunction)&kitchenFrame::OnNotebook1PageChanged);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&kitchenFrame::OnQuit);
    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&kitchenFrame::OnSettingsMenuSelected);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&kitchenFrame::OnAbout);
    Connect(ID_TIMER1,wxEVT_TIMER,(wxObjectEventFunction)&kitchenFrame::OnTimer1Trigger);
    //*)
    SetTitle(_T("Estescook ") + vers);
    // Connect(ID_HTMLLISTBOX3,wxEVT_COMMAND_LISTBOX_SELECTED,(wxObjectEventFunction)&kitchenFrame::OnListSelected);
    href = false;


    conn = new mysqlpp::Connection(false);
    connect_to_db();


    SocketClient1 = new wxSocketClient();
    SocketClient1->SetEventHandler(*this, SOCKET_ID);
    SocketClient1->SetNotify(wxSOCKET_CONNECTION_FLAG |
                             wxSOCKET_INPUT_FLAG |
                             wxSOCKET_LOST_FLAG);
    SocketClient1->Notify(true);


    connectToServer();

    fillMain();
    fillPanels();

    GridSizer1->Fit(this);
    GridSizer1->SetSizeHints(this);

}
bool kitchenFrame::connectToServer()
{
    wxIPV4address addr;
    addr.Hostname(set_now.addres);
    addr.Service(set_now.port);

    StatusBar1->SetStatusText(_("Trying to connect (timeout = 10 sec)..."),1);
    SocketClient1->Connect(addr, false);
    SocketClient1->WaitOnConnect(10);

    if (SocketClient1->IsConnected())
    {
        StatusBar1->SetStatusText(_("Connection to '") + set_now.addres + _("' established."),1);
    }
    else
    {
//    SocketClient1->Close();
        StatusBar1->SetStatusText(_("Unable to connect to '") + set_now.addres + _("'."),1);
    }
}

void kitchenFrame::OnSocketEvent(wxSocketEvent& event)
{
    wxSocketBase *sock = event.GetSocket();
    switch(event.GetSocketEvent())
    {
    case wxSOCKET_CONNECTION:
    {
//    wxMessageBox(_("Connected!"));
        break;
    }

    case wxSOCKET_INPUT:
    {

        sock->SetNotify(wxSOCKET_LOST_FLAG);

        unsigned char c;
        sock->Read(&c, 1);

        switch (c)
        {
        case 0xBE:
            readFromDining(sock);
            break; //this means we are receiving something from dining room f.e. new order
            //  case 0xCE: Test2(sock); break;
            //  case 0xDE: Test3(sock); break;
        }

        sock->SetNotify(wxSOCKET_LOST_FLAG | wxSOCKET_INPUT_FLAG);
        break;
    }
    case wxSOCKET_LOST:
    {

//      wxMessageBox(_("DisConnected!"));
        StatusBar1->SetStatusText(_("Lost connection."),1);
//      sock->Destroy();
        sock->Close();
        break;
    }
    default:
        ;
    }
}

void kitchenFrame::readFromDining(wxSocketBase *sock)
{
    unsigned char len;
    char *buf;
    sock->SetFlags(wxSOCKET_WAITALL);
    // Read the size
    sock->Read(&len, 1);
    buf = new char[len];

    // Read the data
    sock->Read(buf, len);
    wxString s;
    s.Printf(_("%s"), buf);

    if(s == _T("n:"))  //we have new order
    {
        fillAll();
    }
    else if(s.Mid(0,2) == _T("m:"))
    {
        TextCtrl1->AppendText(_("POS: ") + s.Mid(2,s.Length()) + _T("\n"));
    }

}

void kitchenFrame::readSet()
{
    set_now.addres = _T("192.168.0.1");
    set_now.port = 3000;
    conn = new mysqlpp::Connection(false);
    config = new wxConfig(_T("kitchen"));
    sett.lang = 0;
    wxString lng = config->Read(_T("program/lang"));
    if(lng!=_T(""))
    {
        long temp;
        lng.ToLong(&temp);
        sett.lang = temp;
    }

    if(config->Read(_T("/program/run")) !=_T("1") || config->Read(_T("/program/run_again")) == _T("1"))
    {
        settings *set_dlg = new settings(this);
        set_dlg->confi = config;
        set_dlg->conn = conn;
        set_dlg->set_now = &sett;
        set_dlg->fill_all();
        set_dlg->ShowModal();
        delete set_dlg;
    }
    else
    {
        read_settings();
    }
    if(sett.lang != 0)
    {
        Locale.Init(set_now.lang, wxLOCALE_CONV_ENCODING);
        wxLocale::AddCatalogLookupPathPrefix(wxT("./lang"));
        // Initialize the catalogs we'll be using
        Locale.AddCatalog(wxT("kitchen"));
    }


}


int  kitchenFrame::connect_to_db(void)
{

    host = config->Read(_T("/mysql/host"));
    user = config->Read(_T("/mysql/user"));
    pass = config->Read(_T("/mysql/pass"));
    dbase = config->Read(_T("/mysql/dbase"));



    if (conn->connect(wx2std(dbase,wxConvUI).c_str(),wx2std(host,wxConvUI).c_str(),wx2std(user,wxConvUI).c_str(),wx2std(pass,wxConvUI).c_str()))
    {
        StatusBar1->SetStatusText(_("Connected to the database."));
//        dbase_connected = true;
        return 0;
    }
    else
    {
        StatusBar1->SetStatusText(_("Unable no connect to database '") + dbase + _("' on ") + host,0);

        wxMessageBox(_("Unable to connect to the database. Reason:\n") + std2wx(conn -> error(),wxConvUI),_("Not connected."), wxOK);
        //      dbase_connected = false;
        return 1;
    }



}

kitchenFrame::~kitchenFrame()
{
    //(*Destroy(kitchenFrame)
    //*)
}

void kitchenFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void kitchenFrame::OnAbout(wxCommandEvent& event)
{
    about* about_dlg = new about(this);
    about_dlg->Show();
}

void kitchenFrame::OnSettingsMenuSelected(wxCommandEvent& event)
{
    settings* set_dlg = new settings(this);
    set_dlg -> confi = config;
    set_dlg -> conn = conn;
    set_dlg -> set_now = &set_now;
    set_dlg -> fill_all();
    set_dlg -> ShowModal();

    if (
        host != config->Read(_T("/mysql/host")) ||
        user != config->Read(_T("/mysql/user")) ||
        pass != config->Read(_T("/mysql/pass")) ||
        dbase != config->Read(_T("/mysql/dbase"))
    )
    {
        connect_to_db();
    }


    wxString portTemp;
    portTemp << set_now.port;
    if(     set_now.addres != config->Read(_T("/program/addres")) ||
            portTemp != config->Read(_T("/program/port")))
    {
        read_settings();
        connectToServer();
    }
    else
    {
        read_settings();
    }
}

void kitchenFrame::read_settings()
{
    set_now.addres = config->Read(_T("/program/addres"));
    wxString port = config->Read(_T("/program/port"));
    long temp;
    port.ToLong(&temp);
    set_now.port = temp;
}

void kitchenFrame::fillMain()
{
    ListBox2->Clear();
    Lst2.Clear();
    ListBox3->Clear();
    Lst3.Clear();
    ListBox4->Clear();
    wxDateTime current = wxDateTime::Now();
    mysqlpp::Query query = conn->query();
    wxString orderBy;
    if(ToggleButton2->GetValue())
    {
        orderBy = _T("`time_avg` ASC");
    }
    else if(ToggleButton1->GetValue())
    {
        orderBy = _T("`qty` DESC");
    }
    query << "SELECT SUM( `qty` ) AS `qty`,`orders_dishes`.`name`,MIN(`orders`.`time`) \
AS `time_min`,MAX(`orders`.`time`) AS `time_max`,FROM_UNIXTIME(AVG(UNIX_TIMESTAMP(`orders`.`time`)))\
 AS `time_avg` FROM `orders_dishes`,`orders` WHERE `orders`.`time` > '"<< wx2std(current.FormatISODate(), wxConvUI) <<"' \
 AND `orders`.`status`=3 AND `orders_dishes`.`kitchen`=1 AND `orders_dishes`.`ready`=0 AND `orders_dishes`.`order_id`=`orders`.`id` \
 GROUP BY `orders_dishes`.`name` ORDER BY "<< wx2std(orderBy, wxConvUI);
    mysqlpp::StoreQueryResult res = query.store();
    if (res)
    {
        mysqlpp::Row row;
        mysqlpp::StoreQueryResult::size_type i;
        bool first = true;
        wxDateTime avg;
        for (i = 0; i < res.num_rows(); ++i)
        {
            row = res[i];
            avg.ParseDateTime(std2wx(std::string(row["time_avg"]),wxConvUI));
            wxTimeSpan diff = wxDateTime::Now() - avg;
            wxString toAppend = _("<font size = 5>") + std2wx(std::string(row["name"]),wxConvUI) + _("</font><br align=center>Avg. time: <b>") + diff.Format(_T("%M")) + _(" min.</b> Quantity: <font size = 5>") + std2wx(std::string(row["qty"]),wxConvUI) + _T("</font>");

            if(first)
            {
                ListBox2->Append(toAppend);
                Lst2.Add(std2wx(std::string(row["name"]),wxConvUI));
                ListBox2->Append(_T("Preved!Medved"));
                if(!ListBox2->IsVisible(ListBox2->GetCount()-1))
                {
                    first = false;
                    ListBox2->Delete(ListBox2->GetCount()-2);
                    Lst2.RemoveAt(Lst2.GetCount()-1);
                    ListBox3->Append(toAppend);
                    Lst3.Add(std2wx(std::string(row["name"]),wxConvUI));
                }
                ListBox2->Delete(ListBox2->GetCount()-1);
            }
            else
            {
                ListBox3->Append(toAppend);
                Lst3.Add(std2wx(std::string(row["name"]),wxConvUI));
            }
        }
    }

//wxMessageBox(toSearch);

    int Lst2Index = Lst2.Index(toSearch);
    int Lst3Index = Lst3.Index(toSearch);
    if(Lst2Index != wxNOT_FOUND || Lst3Index != wxNOT_FOUND )
    {
        if(Lst2Index != wxNOT_FOUND)
        {
//making selection in first listbox
            fillDetails(Lst2[Lst2Index]);
            ListBox2->SetSelection(Lst2Index);
        }
        else
        {
//making selection in second listbox
            fillDetails(Lst3[Lst3Index]);
            ListBox3->SetSelection(Lst3Index);
        }
    }
    else if(Lst2.GetCount() != 0)   //if none of those has our dish - just selecting first one
    {
        fillDetails(Lst2[0]);
        ListBox2->SetSelection(0);
        toSearch = Lst2[0];
    }

}
void kitchenFrame::fillPanels()
{
    int pages = Notebook1->GetPageCount()-1;
    for(int t = pages; t > 0; --t) //deleting unnecessary pages
    {
        Notebook1->RemovePage(t);
    }
    OrderPanels.Clear();

    wxDateTime current = wxDateTime::Now();
    mysqlpp::Query query = conn->query();
    query << "SELECT `id`, `number` FROM `orders` WHERE `time` > '"<< wx2std(current.FormatISODate(), wxConvUI) <<"' AND `status` = 3";
    mysqlpp::StoreQueryResult res = query.store();
    if (res)
    {
        if(res.num_rows() != 0)
        {
            mysqlpp::Row row;
            mysqlpp::StoreQueryResult::size_type i;
            wxString panTitle;
            wxArrayInt orderIds;
            for (i = 0; i < res.num_rows(); ++i)
            {
                row = res[i];

                if(i % 3 == 0 && i != 0)
                {
                    addPanel(panTitle, orderIds);
                    panTitle.Clear();
                    orderIds.Clear();
                    panTitle << std2wx(std::string(row["number"]), wxConvUI);
                    orderIds.Add(int(row["id"]));
                }
                else
                {
                    wxString delim;
                    if(i != 0) delim = _T(" - ");
                    panTitle <<  delim << std2wx(std::string(row["number"]), wxConvUI);
                    orderIds.Add(int(row["id"]));
                }
            }
            addPanel(panTitle, orderIds);
        }
    }
}

void kitchenFrame::addPanel(wxString& title, wxArrayInt& ids)
{
    threeorders* panelTemp = new threeorders(Notebook1);
    panelTemp->Notebook1 = Notebook1;
    panelTemp->conn = conn;
    panelTemp->ordersIds = ids;
    panelTemp->SocketClient = SocketClient1;
    panelTemp->setFace();
    Notebook1->AddPage(panelTemp, title, false);
    OrderPanels.Add(panelTemp);
}


void kitchenFrame::OnButton3Click(wxCommandEvent& event)
{
    ListBox3->ScrollLines(-2);
}

void kitchenFrame::OnButton4Click(wxCommandEvent& event)
{
    ListBox3->ScrollLines(2);
}

void kitchenFrame::OnToggleButton1Toggle(wxCommandEvent& event)
{
    ToggleButton2->SetValue(false);
    fillMain();
//        ListBox2->SetSelection(-1);
    ListBox3->SetSelection(-1);
//    ListBox4->Clear();
//    StaticText9->SetLabel(_T(""));
}

void kitchenFrame::OnToggleButton2Toggle(wxCommandEvent& event)
{
    ToggleButton1->SetValue(false);
    fillMain();
//        ListBox2->SetSelection(-1);
    ListBox3->SetSelection(-1);
//    ListBox4->Clear();
//    StaticText9->SetLabel(_T(""));
}
void kitchenFrame::OnListBox2Select(wxCommandEvent& event)
{
    toSearch = Lst2[ListBox2->GetSelection()];
    fillDetails(toSearch);
    ListBox3->SetSelection(-1);
}

void kitchenFrame::OnListBox3Select(wxCommandEvent& event)
{
    toSearch = Lst3[ListBox3->GetSelection()];
    fillDetails(toSearch);
    ListBox2->SetSelection(-1);
}
void kitchenFrame::fillDetails(wxString& prodName)
{
    ListBox4->Clear();
    StaticText9->SetLabel(prodName);
    wxDateTime current = wxDateTime::Now();
    wxString orderBy;
    if(ToggleButton2->GetValue())
    {
        orderBy = _T("`time` ASC");
    }
    else if(ToggleButton1->GetValue())
    {
        orderBy = _T("`qty` DESC");
    }

    mysqlpp::Query query = conn->query();
    query << "SELECT `orders_dishes`.`id`,`orders_dishes`.`qty`,`orders_dishes`.`name`,`orders_dishes`.`comment` FROM \
`orders_dishes` ,`orders` WHERE `orders`.`time` > '"<< wx2std(current.FormatISODate(), wxConvUI) <<"' AND `orders`.`status`=3 \
AND `orders_dishes`.`kitchen`=1 AND `orders_dishes`.`ready`=0 \
AND `orders_dishes`.`order_id`=`orders`.`id` \
 AND `orders_dishes`.`name`='"<< wx2std(prodName, wxConvUI) <<"' ORDER BY "<< wx2std(orderBy, wxConvUI);
    mysqlpp::StoreQueryResult res = query.store();
    if (res)
    {
        if(res.num_rows() == 0)
        {
            StaticText9->SetLabel(_T(""));
            ListBox4->Clear();
//fillMain();
        }
        else
        {
            mysqlpp::Row row;
            mysqlpp::StoreQueryResult::size_type i;
            for (i = 0; i < res.num_rows(); ++i)
            {
                row = res[i];
                ListBox4->Append(formatItem(conn, ListBox4->GetCount(), int(row["id"]), true));
            }

        }
    }

}




void kitchenFrame::OnButton1Click(wxCommandEvent& event)
{
    ListBox4->ScrollLines(-2);
}

void kitchenFrame::OnButton2Click(wxCommandEvent& event)
{
    ListBox4->ScrollLines(2);
}

void kitchenFrame::OnUrlClick(wxHtmlLinkEvent& event)
{
    long templong;

    wxString link = event.GetLinkInfo().GetHref();

    link.Mid(0,link.Find(_T(":"))).ToLong(&templong);
    href=true;
    int num = templong;
    wxString temp;
    temp << num;

    mysqlpp::Query query = conn->query();
    wxString dishId = link.Mid(link.Find(_T(":"))+1);
    query <<"UPDATE `orders_dishes` SET `ready` = '1' \
   WHERE `orders_dishes`.`id` =" << wx2std(dishId, wxConvUI) << " LIMIT 1";
    query.execute(); //we just set to ready only one dish from order


    int orderId;
    query << "SELECT `order_id` FROM `orders_dishes` WHERE `id`="<< wx2std(dishId, wxConvUI);
    mysqlpp::StoreQueryResult res = query.store();
    if(res)
    {
        mysqlpp::Row row;
        row = res.at(0);
        orderId = int(row["order_id"]);
    }
    query << "SELECT `id` FROM `orders_dishes` WHERE `ready`=0 AND `order_id`="<< orderId;
    res = query.store();

    if(res)
    {
        if(!res.num_rows())  //no dishes to prepare
        {
            query << "UPDATE `orders` SET `status` = '4' WHERE `orders`.`id` ="<< orderId <<" LIMIT 1 ";
            query.execute(); //set the whole order to ready state
            //redo the pages to update status
            fillAll();
            wxString tem;
            tem << _T("r:") << orderId;
            sendMessageToServer(SocketClient1, tem);
        }
    }

    wxString prodName = StaticText9->GetLabel();
    fillDetails(prodName);
    fillMain();
}


void kitchenFrame::OnListBox4Select(wxCommandEvent& event)
{
    if(href)
    {
        ListBox4->SetSelection(-1);
        href = false;
    }
}

void kitchenFrame::OnNotebook1PageChanged(wxNotebookEvent& event)
{

    if(Notebook1->GetSelection() != 0)
    {
        OrderPanels[Notebook1->GetSelection()-1]->fillAll();

    }
    else
    {
        fillAll();
    }
}
void kitchenFrame::fillAll(void)
{
    fillMain();
    fillPanels();
}

void kitchenFrame::OnButton5Click(wxCommandEvent& event)
{
    fillAll();
}

void kitchenFrame::OnTimer1Trigger(wxTimerEvent& event)
{
    fillAll();
}

void kitchenFrame::OnButton6Click(wxCommandEvent& event)
{
    wxString message = TextCtrl2->GetValue();
    if(SocketClient1->IsConnected())
    {
        sendMessageToServer(SocketClient1, _T("m:") + message);
        TextCtrl2->Clear();
        TextCtrl1->AppendText(_("Kitchen: ") + message + _T("\n"));
    }
    else
    {
        wxMessageBox(_T("Host computer is not connected!\n Message was not sent."));
    }
}
