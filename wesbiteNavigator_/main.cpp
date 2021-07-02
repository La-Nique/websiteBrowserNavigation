#include <iostream>
#include <vector>

#include "browser.cpp"

int main(){
    Browser Lynn;
    Lynn.visit("www.google.com");
    std::cout << "current website should be google:\n" << Lynn.getCurrentWebsite() << std::endl;
    Lynn.visit("www.spotify.com");
    Lynn.visit("www.apple.com");
    Lynn.back();
    std::cout << "Get History func:\n" << Lynn.getHistory() <<std::endl;
    Lynn.clearSession();
    std::cout <<"cleared history:\n" << Lynn.getHistory() << std::endl;
    
    
    return 0;
}
