#include<iostream>
using namespace std;

int main(){
    int num;
    
    cout<<"Enter any Number:";
    cin>>num;
    
    if(num%2 == 0){
        cout<<"The Number is Even"<<endl;
    }
    
    else if(num/2 != 0){
        cout<<"The Number is Odd"<<endl;
    }
    
    else{
        cout<<"Number is Zero";
    }
}
