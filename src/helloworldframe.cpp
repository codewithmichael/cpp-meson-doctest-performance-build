// helloworldapp.cpp
//
// Created: 2020.04.23
// Author: Michael Spencer
// License: MIT


#include "helloworldframe.hpp"
#include "greeting.hpp"


wxBEGIN_EVENT_TABLE(HelloWorldFrame, wxFrame)
    EVT_MENU(ID_Hello, HelloWorldFrame::OnHello)
    EVT_MENU(wxID_EXIT, HelloWorldFrame::OnExit)
    EVT_MENU(wxID_ABOUT, HelloWorldFrame::OnAbout)
wxEND_EVENT_TABLE()


HelloWorldFrame::HelloWorldFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
    : wxFrame(NULL, wxID_ANY, title, pos, size)
{
    this->SetMinSize(size);

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

    wxBoxSizer* frameSizer = new wxBoxSizer(wxHORIZONTAL);
    this->SetSizer(frameSizer);

    wxPanel* framePanel = new wxPanel(this, wxID_ANY);
    frameSizer->Add(framePanel, 1, wxALL|wxEXPAND, 0);
    wxBoxSizer* framePanelSizer = new wxBoxSizer(wxHORIZONTAL);
    framePanel->SetSizer(framePanelSizer);

    std::string greeting = greeting::generate_greeting();
    wxStaticText* label = new wxStaticText(this, wxID_ANY, greeting);
    framePanelSizer->AddStretchSpacer();
    framePanelSizer->Add(label, 0, wxALL|wxALIGN_CENTER, 5);
    framePanelSizer->AddStretchSpacer();

    this->Layout();
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


