#include <iostream>
using namespace std;

// class parent
// tambahkan final sesudah nama class
// untuk mencegah adanya overriding

class baseclass
{
public:
    virtual void perkenalan()
    {
        cout << "Hallo saya Function dari base class";
    }
};

int main()
{
    std::cout << "Hello World!\n";
}