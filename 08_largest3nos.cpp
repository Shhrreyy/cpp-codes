#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    
    cout<<"Enter 3 Number:";
    cin>>a>>b>>c;
    
    
    if(b>a  && b>c){
        cout<<"B is Largest"<<endl;
    }
    
    else if(c>a && c>b){
        cout<<"C is largest"<<endl;
    }
    else if(a>c && a>b){
        cout<<"A is largest"<<endl;
    }
    
    
    else{
        cout<<"All are equal"<<endl;
    }
  return 0;
}
