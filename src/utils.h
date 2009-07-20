#ifndef UTILS_H_INCLUDED
#define UTILS_H_INCLUDED

#include <wx/string.h>
#include <wx/arrstr.h>
#include <wx/intl.h>
#include <wx/datetime.h>
#include <mysql++.h>
#include "wx_std.h"
#include <wx/socket.h>
wxString formatItem(mysqlpp::Connection* conn, int num, int dishId, bool main = false);
wxString getPartName(mysqlpp::Connection* conn, int partId);
bool sendMessageToServer(wxSocketClient* SocketClient, wxString message);
#endif // UTILS_H_INCLUDED
