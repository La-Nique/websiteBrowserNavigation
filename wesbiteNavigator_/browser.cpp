/****************************************************************************************************************************
Title        : browser.cpp
Author       : Lanique Peterson
Description  : Implementation file for the browser class
****************************************************************************************************************************/

#include "browser.h"
#include <vector>
#include <iostream>

Browser::Browser(){
}

std::string Browser::visit(std::string website) ///return the name of the website we just visted.
{
    siteHistory.push_back(website);
    currentSite = website;
    return website;
}

std::string Browser::back() ///return the webpage we land on after going back one in our history
{
        if(currentSite != "")
        {
            previousSite = siteHistory.back();
        }
        else
        {
            return "";
        }
    
    return previousSite; ///return an empty string
}

void Browser::clearSession() ///clearSession wipes our history.
{
    siteHistory.clear();
    currentSite = "";
}

std::string Browser::getHistory() ///return a string detailing our session history with the oldest visited website printing first, each website should be on own line. The last character in your string should be a new line UNLESS you had no history
{
    std::string completeHistory = "";
    
        if(currentSite != "")
        {
//            for (int i = siteHistory.size() - 1; i >= 0; i--)
//                completeHistory += siteHistory[i] + "\n";
            for (int i = 0; i < siteHistory.size(); i++)
                completeHistory += siteHistory[i] + "\n";
        }
        
    return completeHistory;
}

std::string Browser::getCurrentWebsite() ///Returns the website the browser is currently on. If you are at a default state(No visited websites or cleared session), return empty string
{
        if (currentSite != "")
        return currentSite;
    
    return  "";
}

Browser::~Browser()
{
    siteHistory.clear();
    currentSite = "";
}
