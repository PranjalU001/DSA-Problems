#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the Binary Number :";
    cin>>n;
    int ans =0;
    int pow=1;
    while (n>0)
    {
        int rem = n %10;
        ans = ans +(rem*pow);
        n = n/10;
        pow = pow*2;
    }
    cout<<ans;
}