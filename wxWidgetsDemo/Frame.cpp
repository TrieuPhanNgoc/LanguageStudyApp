#include <wx/wx.h>
#include <wx/spinctrl.h>
#include <iostream>

UIFrame::UIFrame(const wxString& title) :
    wxFrame(NULL, wxID_ANY, title)
{
    // Making panel before using any attributes (it seems like framework)
    wxPanel* panel = new wxPanel(this); // When putting this -> seems as anchors.fill: parent in qml qt 
    wxButton* button = new wxButton(panel, wxID_ANY, "Click Button", wxPoint(100, 50), wxSize(100,50));
    wxCheckBox* checkBox = new wxCheckBox(panel, wxID_ANY, "CheckBox", wxPoint(100, 100), wxSize(100,100));
    wxStaticText* text = new wxStaticText(panel, wxID_ANY, "Static Text - not editable", wxPoint(100,200));
    wxTextCtrl* textCtrl = new wxTextCtrl(panel, wxID_ANY, "Text - Editable", wxPoint(100, 250), wxSize(100,-1));
    wxSlider* slider = new wxSlider(panel, wxID_ANY, 25, 0, 100, wxPoint(100, 300), wxSize(200, -1));
    wxGauge* gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(100, 350), wxSize(200, -1));
    gauge->SetValue(60);

    // Selection
    wxArrayString choices;
    choices.Add("Choice 1");
    choices.Add("Choice 2");
    choices.Add("Choice 3");

    wxChoice* choice = new wxChoice(panel, wxID_ANY, wxPoint(100, 400), wxSize(100, -1), choices);
    // Default selected item
    choice->Select(0); // The newest one already set 0 is default

    wxSpinCtrl* spin = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(400, 100), wxSize(100, -1),
    // wxSP_ARROW_KEYS | wxSP_WRAP | wxSP_AUTOTICKS
    );

    wxListBox* list = new wxListBox(panel, wxID_ANY, wxPoint(400, 150), wxSize(100, -1), choices,
        wxLB_MULTIPLE
    );

    wxRadioBox* radioBox = new wxRadioBox(panel, wxID_ANY, "RadioBox", wxPoint(400, 250), wxDefaultSize, choices);

    wxButton* button2 = new wxButton(panel, wxID_ANY, "Click Button 2", wxPoint(400, 300), wxSize(100,50), wxBU_LEFT);
    wxCheckBox* checkBox2 = new wxCheckBox(panel, wxID_ANY, "Check Box 2", wxPoint(400, 350), wxDefaultSize, wxCHK_3STATE | wxCHK_ALLOW_3RD_STATE_FOR_USER);
    wxStaticText* stt_text = new wxStaticText(panel, wxID_ANY, "Static Text - not editable", 
            wxPoint(400,-1), wxSize(200, -1), wxALIGN_CENTER_HORIZONTAL);
    stt_text->SetBackgroundColour(*wxLIGHT_GREY);

    wxSlider* slider2 = new wxSlider(panel, wxID_ANY, 25, 0, 100, wxPoint(400, 400), wxSize(100, -1), wxSL_VALUE_LABEL);
    wxTextCtrl* textCtrl2 = new wxTextCtrl(panel, wxID_ANY, "Text - Editable", wxPoint(100, 250), wxSize(100,-1), wxTE_PASSWORD);
    wxGauge* gauge2 = new wxGauge(panel, wxID_ANY, 100, wxPoint(250, 300), wxSize(200, 200), wxGA_VERTICAL);
    gauge2->SetValue(60);
}
