#include <iostream>
#include <vector>

#include "browser.cpp"

using namespace std;

int main(){
    Browser Lynn;
    Lynn.visit("www.google.com");
//    Lynn.visit("www.yahoo.com");
    Lynn.back();
//    Lynn.visit("www.bing.com");
//    Lynn.back();
//    Lynn.visit("www.netflix.com");
    
   
    std::cout << Lynn.getHistory();
    Lynn.clearSession();
    
    std::cout << "new history\n" << Lynn.getHistory();
    
return 0;
}
