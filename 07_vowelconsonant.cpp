#include<iostream>
using namespace std;

int main(){
    char ch;
    
    cout<<"Enter an Alphabet :";
    cin>>ch;
    
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        cout<<"It is a Vowel"<<endl;
    }
    else{
        cout<<"It is consonant"<<endl;
    }
    return 0; 
}
