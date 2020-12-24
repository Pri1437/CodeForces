#include<iostream>
using namespace std;
bool isSolvable(int p, int v, int t){
    if(p==1 && v==1)
        return true;
    if(p==1 && t==1)
        return true;
    if(v==1 && t==1)
        return true;
    return false;
}
int main(){
    int nq, count=0;
    cin>>nq;
    while(nq--){
        int confidence[3];
        cin>>confidence[0]>>confidence[1]>>confidence[2];
        if(isSolvable(confidence[0], confidence[1], confidence[2]))
            count++;
    }
    cout<<count<<endl;
    return 0;
}