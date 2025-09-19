#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number :";
    cin>>n;
    int ans =0;
    int po =1;
    while (n>0)
    {
        int rem = n%2;
        n = n/2;
        ans = ans +(rem*po);
        po = po*10;
    }
    cout<<ans;
    
}