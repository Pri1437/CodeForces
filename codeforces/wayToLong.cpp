#include<iostream>
#include<string>
using namespace std;

int main(){
    string word;
    int t;
    cin>>t;
    while(t--){
        cin>>word;

        if(word.length() > 10){
            string abb; abb+= word[0];
            abb+=to_string(word.length()-2);
            abb+=word[word.size()-1];
            cout<<abb<<endl;
        }
        else
            cout<<word<<endl;
    }
}