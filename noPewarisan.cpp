#include <iostream>
using namespace std;

class baseClass final{
public:
    virtual void perkenalan(){
        cout << "Hallo saya Function dari base class";
    }
};

class deriVedClass : public baseClass {
public:
    void perkenalan() {
        cout << "Hallo saya function dari derived Class";
    }
};