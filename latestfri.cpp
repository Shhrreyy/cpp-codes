#include <iostream>
using namespace std;

int main(){
    int a = 20;
    float b = 20.5;
    double c = 69.696;
    bool d = true;
    
    int*aptr = &a;
    float*bptr = &b;
    double*cptr = &c;
    bool*dptr = &d;
    
    cout<<a<<endl;
    cout<<*aptr;
    cout<<&a;
    
    cout<<b<<endl;
    cout<<*bptr;
    cout<<&b;
    
    cout<<c<<endl;
    cout<<*cptr;
    cout<<&c;
    
    cout<<d<<endl;
    cout<<*dptr;
    cout<<&d;
    
    return 0;
}
