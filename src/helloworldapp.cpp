// helloworldapp.cpp


#include "helloworldapp.hpp"
#include "helloworldframe.hpp"


wxIMPLEMENT_APP(HelloWorldApp);


bool HelloWorldApp::OnInit()
{
    HelloWorldFrame *frame = new HelloWorldFrame("Hello World", wxPoint(50, 50), wxSize(300, 200));
    frame->Show();
    return true;
}