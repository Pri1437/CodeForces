#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string seq;
    cin>>seq;
    vector<int> numbers;
    for(char ch:seq)
    {
        if(ch != '+')
        {
            numbers.push_back(ch-'0');
            // cout<<*(numbers.end()-1);
        }
    }
    
    sort(numbers.begin(), numbers.end());
    for(int i=0; i<numbers.size(); i++)
    {
        if(i==numbers.size()-1){
            // cout<<"inside";
            cout<<numbers[i]<<endl;
            break;
        }
        cout<<numbers[i]<<'+';
    }
    return 0;
}