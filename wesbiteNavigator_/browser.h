/****************************************************************************************************************************
Title        : browser.h
Author       : Lanique Peterson
Description  : Header file for the Browser class
****************************************************************************************************************************/
#ifndef BROWSER_H
#define BROWSER_H

#include <string>
#include "queue.cpp"
#include "stack.cpp"

class Browser{
    private:
    std::string visit = "";
    std::string back = "";
    std::string history = "";
    std::string currentWebsite = "";
    
    public:

        /**
        * Default Constructor 
        * @ param  None
        * @ return None
        */
        Browser();

        /**
        * @param  website Visits a website
        * @return The name of the website we just visited
        */
        std::string visit(std::string website);

        /**
        * @param  None
        * @return The webpage we land on after going back one in our history
        *         If you cannot go back or end up at a default state, return a empty string
        */
        std::string back();

        /**
        * @param  None
        * @return A string detailing our session history with the oldest visited website printing first
        * Format:
        *       <website>
        * Note: each website should be on their own line
        *
        * Example:
        *       visit("www.google.com")
        *       visit("www.yahoo.com")
        *       back()
        *       visit("www.bing.com")
        *       back()
        *       visit("www.netflix.com")
        *       getHistory()
        *
        *       The above should print out a string in the following format:
        *       www.google.com
        *       www.yahoo.com
        *       www.bing.com
        *       www.netflix.com 
        *
        *       NOTE: The last character in your string should be a new line UNLESS you had no history
        * Example 2:
        *       visit("www.google.com")
        *       visit("www.yahoo.com")
        *       back()
        *       visit("www.bing.com")
        *       back()
        *       visit("www.netflix.com")
        *       clearSession()
        *       getHistory()
        *
        *       The above should print out an empty string.
        *       Note that clearSession wipes our history.
        *       
        */
        std::string getHistory();


        /**
        * Wipes our current session's history (Resets the browser's history)
        * A call to back after a clear session should return an empty string
        * @param  None
        * @return None
        */
        void clearSession();

        /**
        * @param  None
        * @return Returns the website the browser is currently on
        *         If you are at a default state(No visited websites or cleared session), return empty string
        */
        std::string getCurrentWebsite();

        /**
        * Deconstructor
        * @param  None
        * @return None
        */
        ~Browser();

};
#endif
