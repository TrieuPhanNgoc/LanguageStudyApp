#ifndef _UI_APPLICATION_H_
#define _UI_APPLICATION_H_

#include <wx/wx.h>
#include <wx/sizer.h>
#include "Frame.h"  
#include "Image.h"

class UIApplication : public wxApp {
    public:
        virtual bool OnInit();
        virtual int OnExit();
    
    protected:
        void onClickedStart(wxCommandEvent& event);
    private:
        wxTextCtrl* textCtrl;
        wxFrame* frame = nullptr;
        wxImagePanel* imgPanel = nullptr;
};

#endif // _UI_APPLICATION_H_