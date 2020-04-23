// helloworldapp.cpp


#include "helloworldframe.hpp"


wxBEGIN_EVENT_TABLE(HelloWorldFrame, wxFrame)
    EVT_MENU(ID_Hello, HelloWorldFrame::OnHello)
    EVT_MENU(wxID_EXIT, HelloWorldFrame::OnExit)
    EVT_MENU(wxID_ABOUT, HelloWorldFrame::OnAbout)
wxEND_EVENT_TABLE()


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


