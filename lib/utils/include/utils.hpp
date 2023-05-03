#pragma once

#include <iostream>
#include <Wt/WApplication.h>
#include <Wt/WBreak.h>
#include <Wt/WContainerWidget.h>
#include <Wt/WLineEdit.h>
#include <Wt/WPushButton.h>
#include <Wt/WText.h>
#include <Wt/WFlags.h>

using namespace Wt;

class HelloApplication : public WApplication {
public:
    HelloApplication(const WEnvironment& env);

private:
    WLineEdit *nameEdit_;
    WText *greeting_;

    void greet();
};

void print_version();