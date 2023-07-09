#include "UIApplication.h"

bool UIApplication::OnInit() {
    UIFrame* frame = new UIFrame("Korean Study Application");
    frame->SetSize(wxSize(800, 600));
    frame->Center();
    frame->Show(true);
    return true;
}

wxIMPLEMENT_APP(UIApplication);