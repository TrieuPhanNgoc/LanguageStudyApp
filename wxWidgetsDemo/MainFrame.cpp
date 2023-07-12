#include <wx/wx.h>
#include <wx/spinctrl.h>
#include <iostream>

UIFrame::UIFrame(const wxString& title) :
    wxFrame(NULL, wxID_ANY, title)
{
    // Panel cover whole frame
    wxButton* button = new wxButton(panel, wxID_ANY, "Click Button", wxPoint(100, 50), wxSize(100,50));
}
