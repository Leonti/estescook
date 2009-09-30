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
#ifndef UTILS_H_INCLUDED
#define UTILS_H_INCLUDED

#include <wx/string.h>
#include <wx/arrstr.h>
#include <wx/intl.h>
#include <wx/datetime.h>
#include <mysql++.h>
#include "wx_std.h"
#include <wx/socket.h>
#include <wx/stdpaths.h>
#include <wx/filename.h>

wxString formatItem(mysqlpp::Connection* conn, int num, int dishId, bool main = false);
wxString getPartName(mysqlpp::Connection* conn, int partId);
bool sendMessageToServer(wxSocketClient* SocketClient, wxString message);
#endif // UTILS_H_INCLUDED
