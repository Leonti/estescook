#include "conn_set_panel.h"

//(*InternalHeaders(conn_set_panel)
#include <wx/string.h>
#include <wx/intl.h>
//*)

//(*IdInit(conn_set_panel)
const long conn_set_panel::ID_STATICTEXT1 = wxNewId();
const long conn_set_panel::ID_STATICTEXT2 = wxNewId();
const long conn_set_panel::ID_TEXTCTRL1 = wxNewId();
const long conn_set_panel::ID_STATICTEXT3 = wxNewId();
const long conn_set_panel::ID_SPINCTRL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(conn_set_panel,wxPanel)
	//(*EventTable(conn_set_panel)
	//*)
END_EVENT_TABLE()

conn_set_panel::conn_set_panel(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(conn_set_panel)
	wxFlexGridSizer* FlexGridSizer1;
	wxFlexGridSizer* FlexGridSizer2;

	Create(parent, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("wxID_ANY"));
	FlexGridSizer1 = new wxFlexGridSizer(3, 1, 0, 0);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Specify local name or IP of the main POS \ncomputer and port to connect:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2 = new wxFlexGridSizer(2, 2, 0, 0);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Name or IP:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	FlexGridSizer2->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("192.168.0.1"), wxDefaultPosition, wxSize(136,26), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	FlexGridSizer2->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Port:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	FlexGridSizer2->Add(StaticText3, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrl1 = new wxSpinCtrl(this, ID_SPINCTRL1, _T("3000"), wxDefaultPosition, wxSize(54,26), 0, 0, 9999, 3000, _T("ID_SPINCTRL1"));
	SpinCtrl1->SetValue(_T("3000"));
	FlexGridSizer2->Add(SpinCtrl1, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);
	//*)
}

conn_set_panel::~conn_set_panel()
{
	//(*Destroy(conn_set_panel)
	//*)
}
void conn_set_panel::fill_all(){
TextCtrl1->SetValue(set_now->addres);
SpinCtrl1->SetValue(set_now->port);
    }

void conn_set_panel::Save(){
confi->Write(_T("/program/addres"),TextCtrl1->GetValue());
wxString temp;
temp << SpinCtrl1->GetValue();
confi->Write(_T("/program/port"),temp);
    }
