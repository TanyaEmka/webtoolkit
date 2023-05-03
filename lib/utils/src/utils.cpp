#include "utils.hpp"

#include <iostream>
#include <Wt/WApplication.h>
#include <Wt/WBreak.h>
#include <Wt/WContainerWidget.h>
#include <Wt/WLineEdit.h>
#include <Wt/WPushButton.h>
#include <Wt/WText.h>
#include <Wt/WFlags.h>

using namespace Wt;

void print_version() {
    std::cout << __cplusplus << std::endl;
}

HelloApplication::HelloApplication(const WEnvironment& env) 
: WApplication(env)
{
    setTitle("Hello world");

    root()->addWidget(std::make_unique<WText>("Your name, please ? "));
    nameEdit_ = root()->addWidget(std::make_unique<WLineEdit>());
    nameEdit_->setFocus();

    WPushButton *button = root()->addWidget(std::make_unique<WPushButton>("Greet me."));
    button->setMargin(5, Side::Left);

    root()->addWidget(std::make_unique<WBreak>());

    greeting_ = root()->addWidget(std::make_unique<WText>());

    button->clicked().connect(this, &HelloApplication::greet);
}

void HelloApplication::greet() {
    greeting_->setText("Hello there, " + nameEdit_->text());
}