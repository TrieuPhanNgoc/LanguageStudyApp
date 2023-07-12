#ifndef __IMAGE_H__
#define __IMAGE_H__

#include <wx/wx.h>

class wxImagePanel : public wxPanel {
    public:
        wxImagePanel(wxFrame* parent, wxString file, wxBitmapType format);

        void paintEvent(wxPaintEvent & evt);
        void paintNow();

        void render(wxDC& dc);

        // mouse events

        DECLARE_EVENT_TABLE()
    
    private:
        wxBitmap image;
};

#endif 