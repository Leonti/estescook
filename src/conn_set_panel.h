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
#ifndef CONN_SET_PANEL_H
#define CONN_SET_PANEL_H

//(*Headers(conn_set_panel)
#include <wx/spinctrl.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)
#include <wx/config.h>
#include "prog_set_panel.h"

class conn_set_panel: public wxPanel
{
public:

    conn_set_panel(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
    virtual ~conn_set_panel();

    //(*Declarations(conn_set_panel)
    wxStaticText* StaticText1;
    wxStaticText* StaticText3;
    wxTextCtrl* TextCtrl1;
    wxStaticText* StaticText2;
    wxSpinCtrl* SpinCtrl1;
    //*)
    current_settings* set_now;
    wxConfigBase *confi;
    void fill_all(void);
    void Save(void);
protected:

    //(*Identifiers(conn_set_panel)
    static const long ID_STATICTEXT1;
    static const long ID_STATICTEXT2;
    static const long ID_TEXTCTRL1;
    static const long ID_STATICTEXT3;
    static const long ID_SPINCTRL1;
    //*)

private:

    //(*Handlers(conn_set_panel)
    //*)

    DECLARE_EVENT_TABLE()
};

#endif
