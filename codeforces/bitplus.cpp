#include<iostream>
using namespace std;

int main(){
    int n,x=0;
    cin>>n;
    while(n--){
        string stmt;
        cin>>stmt;
        for(char c: stmt)
        {
            if(c == '+')
            {
                x+=1;
                break;
            }
            else if(c == '-'){
                x-=1;
                break;
            }
        }
    }
    cout<<x<<endl;
    return 0;
}