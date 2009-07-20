/***************************************************************
 * Name:      kitchenApp.h
 * Purpose:   Defines Application Class
 * Author:    Leonti Bielski (prishelec@gmail.com)
 * Created:   2008-05-04
 * Copyright: Leonti Bielski (http://leonti.ru)
 * License:
 **************************************************************/

#ifndef KITCHENAPP_H
#define KITCHENAPP_H

#include <wx/app.h>

class kitchenApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // KITCHENAPP_H
