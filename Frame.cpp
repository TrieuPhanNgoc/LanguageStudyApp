#include "Frame.h"
#include <wx/image.h>
#include <wx/bitmap.h>
#include <wx/colour.h>
#include <wx/dcmemory.h>

UIFrame::UIFrame(const wxString& title) :
    wxFrame(NULL, wxID_ANY, title)
{
}
