#include <iostream>
using namespace std;

class baseClass {
public:
    virtual void perkenalan() final {
        "Hallo saya Function dari base class";
    }
}; 
class deriVedClass : public baseClass {
public:
    void perkenalan() {
        cout << "Hallo saya function dari derived Class";
    }
};
int main() {
    
} 