#include "UIApplication.h"

bool UIApplication::OnInit() {
    wxInitAllImageHandlers();

    wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);

    frame = new UIFrame("Korean Study Application");
    frame->SetSize(wxSize(800, 600));

    imgPanel =  new wxImagePanel(frame, wxT("../resource/background.jpeg"), wxBITMAP_TYPE_JPEG);
    sizer->Add(imgPanel, 1, wxEXPAND);
    frame->SetSizer(sizer);

    textCtrl = new wxTextCtrl(imgPanel, wxID_ANY, "Text - Editable", wxPoint(100, 250), wxDefaultSize);
    wxButton* button = new wxButton(imgPanel, wxID_ANY, "Start Studying", wxPoint(100, 50), wxSize(200,100));
    button->Bind(wxEVT_BUTTON, &UIApplication::onClickedStart, this);

    frame->Center();
    frame->Show(true);
    return true;
}

int UIApplication::OnExit() {
    if (frame) {
        delete frame;
        frame = nullptr;
    }


    if (imgPanel) {
        delete imgPanel;
        imgPanel = nullptr;
    }
}

void UIApplication::onClickedStart(wxCommandEvent& event) {
    textCtrl->SetValue("Start Studying");
}

wxIMPLEMENT_APP(UIApplication);