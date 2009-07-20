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
