#include<iostream>
using namespace std;
int main(){
    int ri, ci, temp, rc=2, cc=2;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>temp;
            if(temp == 1){
                ri=i, ci=j;
            }
        }
    }
    cout<<abs(rc-ri)+abs(cc-ci)<<endl;
    return 0;
}