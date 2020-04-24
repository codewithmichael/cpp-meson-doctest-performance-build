// helloworldapp.hpp
//
// Created: 2020.04.23
// Author: Michael Spencer
// License: MIT


#ifndef helloworldframe_hpp
#define helloworldframe_hpp


#include "wx.hpp"


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


#endif //helloworldframe_hpp