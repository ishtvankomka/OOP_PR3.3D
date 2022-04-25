#include <iostream>
#include "Triangle.hpp"
#include "RightAngled_open.hpp"
//#include "RightAngled_close.hpp"

using namespace std;

int main() {
    RightAngled_open t1, t2;
    Read(t1);
    t2 = t1;
    Display(t2);
    
//    RightAngled_close t1, t2;
//    cin >> t1;
//    t2 = t1;
//    cout << t2;
    return 0;
}
