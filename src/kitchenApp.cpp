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
