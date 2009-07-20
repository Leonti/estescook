/***************************************************************
 * Name:      kitchenApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Leonti Bielski (prishelec@gmail.com)
 * Created:   2008-05-04
 * Copyright: Leonti Bielski (http://leonti.ru)
 * License:
 **************************************************************/

#include "kitchenApp.h"

//(*AppHeaders
#include "kitchenMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(kitchenApp);

bool kitchenApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	kitchenFrame* Frame = new kitchenFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
