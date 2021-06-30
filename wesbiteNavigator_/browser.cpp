/****************************************************************************************************************************
Title        : browser.cpp
Author       : Lanique Peterson
Description  : Implementation file for the browser class
****************************************************************************************************************************/

#include "browser.h"

Browser::Browser(){
}

std::string Browser::visit(std::string website) ///return the name of the website we just visted.
{
    currentSite = website;
    return currentSite;
}

std::string Browser::back() ///return the webpage we land on after going back one in our history
{
    ///if current website is not null
    ///place in a node.
    
    ///If you cannot go back
    ///or end up at a default state
    return ""; ///return an empty string
}

void Browser::clearSession() ///clearSession wipes our history.
{
    siteHistory = "";
}

std::string Browser::getHistory() ///return a string detailing our session history with the oldest visited website printing first, each website should be on own line. The last character in your string should be a new line UNLESS you had no history
{
    return siteHistory;
}

std::string Browser::getCurrentWebsite() ///Returns the website the browser is currently on. If you are at a default state(No visited websites or cleared session), return empty string
{
        if (currentSite != "")
        return currentSite;
    
    return  "";
}

Browser::~Browser()
{

}
