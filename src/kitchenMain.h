/***************************************************************
 * Name:      kitchenMain.h
 * Purpose:   Defines Application Frame
 * Author:    Leonti Bielski (prishelec@gmail.com)
 * Created:   2008-05-04
 * Copyright: Leonti Bielski (http://leonti.ru)
 * License:
 **************************************************************/

#ifndef KITCHENMAIN_H
#define KITCHENMAIN_H

//(*Headers(kitchenFrame)
#include <wx/sizer.h>
#include <wx/notebook.h>
#include <wx/button.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/tglbtn.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/timer.h>
#include <wx/listbox.h>
//*)
#include <wx/htmllbox.h>
#include "threeorders.h"
#include <mysql++.h>
#include <wx/msgdlg.h>
#include "wx_std.h"
#include "settings.h"
#include "utils.h"
#include <wx/dynarray.h>
#include <wx/socket.h>


WX_DECLARE_OBJARRAY(threeorders*, ArrayOfThreeorders);

class kitchenFrame: public wxFrame
{
    public:

        kitchenFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~kitchenFrame();

    private:

        //(*Handlers(kitchenFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnSettingsMenuSelected(wxCommandEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        void OnButton4Click(wxCommandEvent& event);
        void OnToggleButton1Toggle(wxCommandEvent& event);
        void OnToggleButton2Toggle(wxCommandEvent& event);
        void OnListBox2Select(wxCommandEvent& event);
        void OnListBox3Select(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnListBox4Select(wxCommandEvent& event);
        void OnNotebook1PageChanged(wxNotebookEvent& event);
        void OnButton5Click(wxCommandEvent& event);
        void OnTimer1Trigger(wxTimerEvent& event);
        void OnButton6Click(wxCommandEvent& event);
        //*)
        void OnUrlClick(wxHtmlLinkEvent& event);
        void readSet(void);
        int connect_to_db(void);
        void read_settings(void);
        void fillPanels(void);
        void fillMain(void);
        void fillDetails(wxString& prodName);
        void addPanel(wxString& title, wxArrayInt& ids);
        bool connectToServer(void);
        void OnSocketEvent(wxSocketEvent& event);
        void readFromDining(wxSocketBase *sock);
        void fillAll();
        //(*Identifiers(kitchenFrame)
        static const long ID_STATICTEXT1;
        static const long ID_BUTTON5;
        static const long ID_TOGGLEBUTTON1;
        static const long ID_TOGGLEBUTTON2;
        static const long ID_HTMLLISTBOX1;
        static const long ID_HTMLLISTBOX2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT9;
        static const long ID_HTMLLISTBOX3;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_TEXTCTRL1;
        static const long ID_TEXTCTRL2;
        static const long ID_BUTTON6;
        static const long ID_PANEL1;
        static const long ID_NOTEBOOK1;
        static const long idMenuQuit;
        static const long ID_MENUITEM1;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        static const long ID_TIMER1;
        //*)
        static const long SOCKET_ID;

        wxSocketClient *SocketClient1;
        wxConfig *config;
        mysqlpp::Connection* conn;
        current_settings sett;
        wxString host;
        wxString user;
        wxString pass;
        wxString dbase;
        wxLocale Locale;
        current_settings set_now;
        wxArrayString Lst2;
        wxArrayString Lst3;
        wxString toSearch;
        bool href;
        ArrayOfThreeorders OrderPanels;
        //(*Declarations(kitchenFrame)
        wxSimpleHtmlListBox* ListBox2;
        wxSimpleHtmlListBox* ListBox4;
        wxToggleButton* ToggleButton1;
        wxPanel* Panel1;
        wxStatusBar* StatusBar1;
        wxMenu* Menu3;
        wxButton* Button4;
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxStaticText* StaticText1;
        wxTimer Timer1;
        wxToggleButton* ToggleButton2;
        wxMenuItem* MenuItem3;
        wxButton* Button5;
        wxTextCtrl* TextCtrl1;
        wxStaticText* StaticText2;
        wxNotebook* Notebook1;
        wxStaticText* StaticText9;
        wxTextCtrl* TextCtrl2;
        wxButton* Button6;
        wxSimpleHtmlListBox* ListBox3;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // KITCHENMAIN_H
