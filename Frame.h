#ifndef _FRAME_H_
#define _FRAME_H_

#include <wx/wx.h>
#include <wx/spinctrl.h>
#include <iostream>

class UIFrame : public wxFrame {
    public:
        UIFrame(const wxString& title);
};

#endif // _FRAME_H_