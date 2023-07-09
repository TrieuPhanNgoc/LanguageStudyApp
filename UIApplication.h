#ifndef _UI_APPLICATION_H_
#define _UI_APPLICATION_H_

#include <wx/wx.h>
#include "Frame.h"
class UIApplication : public wxApp {
    public:
        virtual bool OnInit() override;
};

#endif // _UI_APPLICATION_H_