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

#ifndef THREEORDERS_H
#define THREEORDERS_H

//(*Headers(threeorders)
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/listbox.h>
//*)
#include <wx/msgdlg.h>
#include <wx/htmllbox.h>
#include <mysql++.h>
#include "wx_std.h"
#include "utils.h"
#include <wx/dynarray.h>
#include <wx/socket.h>
#include <wx/notebook.h>



struct panelPointers
{
    wxStaticText* number;
    wxStaticText* name;
    wxSimpleHtmlListBox* listbox;
    wxStaticText* time;
    wxStaticText* comment;
    wxFlexGridSizer* sizer;
    long listBoxId;
    long buttonUpId;
    long buttonDownId;
    int orderId;
};

WX_DECLARE_OBJARRAY(panelPointers, ArrayOfPanelPointers);
WX_DECLARE_OBJARRAY(wxArrayInt, ArrayOfInts);

struct ordersInfos
{
    wxArrayString titles;
    ArrayOfInts orderIdsArr;
    bool success;
};

class threeorders: public wxPanel
{
public:


    threeorders(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
    virtual ~threeorders();

    //(*Declarations(threeorders)
    wxFlexGridSizer* FlexGridSizer2;
    wxGridSizer* GridSizer3;
    wxStaticText* StaticText1;
    wxStaticText* StaticText3;
    wxSimpleHtmlListBox* ListBox1;
    wxButton* Button5;
    wxStaticText* StaticText4;
    wxStaticText* StaticText2;
    wxStaticText* StaticText9;
    wxButton* Button6;
    //*)
    wxArrayInt ordersIds;
    ArrayOfPanelPointers pointers;

    wxNotebook* Notebook1;

    void fillAll(void);
    void setFace(void);
    void clearPanels(void);
    void refreshAll(void);
    mysqlpp::Connection* conn;
    wxSocketClient* SocketClient;
protected:

    //(*Identifiers(threeorders)
    static const long ID_STATICTEXT3;
    static const long ID_STATICTEXT4;
    static const long ID_HTMLLISTBOX5;
    static const long ID_STATICTEXT1;
    static const long ID_STATICTEXT2;
    static const long ID_STATICTEXT9;
    static const long ID_BUTTON5;
    static const long ID_BUTTON6;
    //*)

private:
    void fillOrder(panelPointers point);
    void addOrder(void);
    ordersInfos getOrdersInfo(void);
    bool href;
    bool toDelete;
    //(*Handlers(threeorders)
    //*)
    void OnButtonUpClick(wxCommandEvent& event);
    void OnButtonDownClick(wxCommandEvent& event);
    void OnListBoxSelect(wxCommandEvent& event);
    void OnListUrlClick(wxHtmlLinkEvent& event);
    DECLARE_EVENT_TABLE()
};

#endif
