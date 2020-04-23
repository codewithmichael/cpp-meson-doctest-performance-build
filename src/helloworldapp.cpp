// helloworldapp.cpp


// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif


class HelloWorldApp : public wxApp
{
public:
    virtual bool OnInit();
};


class HelloWorldFrame : public wxFrame
{
public:
    HelloWorldFrame(const wxString& title, const wxPoint& pos, const wxSize& size);

private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);

    wxDECLARE_EVENT_TABLE();
};


enum
{
    ID_Hello = 1
};


wxBEGIN_EVENT_TABLE(HelloWorldFrame, wxFrame)
    EVT_MENU(ID_Hello, HelloWorldFrame::OnHello)
    EVT_MENU(wxID_EXIT, HelloWorldFrame::OnExit)
    EVT_MENU(wxID_ABOUT, HelloWorldFrame::OnAbout)
wxEND_EVENT_TABLE()


wxIMPLEMENT_APP(HelloWorldApp);


bool HelloWorldApp::OnInit()
{
    HelloWorldFrame *frame = new HelloWorldFrame("Hello World", wxPoint(50, 50), wxSize(450, 340));
    frame->Show();
    return true;
}


HelloWorldFrame::HelloWorldFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
    : wxFrame(NULL, wxID_ANY, title, pos, size)
{
    wxMenu* menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&Hello...\tCtrl-H",
        "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);

    wxMenu* menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);

    wxMenuBar* menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");

    SetMenuBar(menuBar);

    CreateStatusBar();
    SetStatusText("Welcome to wxWidgets!");
}


void HelloWorldFrame::OnExit(wxCommandEvent& event)
{
    Close();
}


void HelloWorldFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox("This is a wxWidgets' Hello World sample",
        "About Hello World", wxOK | wxICON_INFORMATION);
}


void HelloWorldFrame::OnHello(wxCommandEvent& event)
{
    wxLogMessage("Hello World from wxWidgets!");
}


