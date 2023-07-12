#include "FunctionalController.h"
#include "UIApplication.h"

int main(int argc, char *argv[]) {
    // FunctionalCtrl controller;
    // controller.run();

    UIApplication *application = new UIApplication();
    application->OnInit();

    if (application) {
        delete application;
        application = nullptr;
    }

    return 0;
}