#include<iostream>
#include<string>
#include <cctype>
using namespace std;
int main(){
    string s;
    cout << "enter a word:";
    cin >> s;
    cout<< "the given string is "<<s<<endl;
    for(char c: s){
        cout << (char)toupper(c);
    }
    bool pal;
    size_t i=0; size_t j =s.size()-1;
    for (i=0; i<j; ++i,--j){
        if (s[i] = s[j]){
            pal=false;
            cout<<"the given string is not palindrome";
            break;
        }
        
            cout<<"the given string is palindrome/n";
        
    }
    size_t pos=s.find("ad");
    if(pos==1){
        cout<<"substring is found in the string"<<endl;
        
            cout<<"substring is not found"<<endl;
        
        
    }
}