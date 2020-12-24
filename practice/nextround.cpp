#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int ppl[n];
    for(int i=0; i<n; i++){
        cin>>ppl[i];
    }

    if(ppl[k-1]>0){
        int count=k;
        for(int i=k; i<n; i++)
        {
            if(ppl[i]!=ppl[k-1])
                break;
            count+=1;
        }
        cout<<count<<endl;
    }
    else
    {
        int count=0;
        for(int i=k-1; i>=0; i--){
            if(ppl[i]>0)
            {
                count=i+1;
                break;
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}
