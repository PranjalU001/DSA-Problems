// Binary to Decimal:
#include<iostream>
#include<math.h>
using namespace std;
int BinToDeci(int n){
    int ans = 0;
    int i  = 0;
    while (n>0)
    {
        int dig = n%10;
        ans = ans + (pow(2,i)*dig);
        n = n/10;
        i++;
    }
    return ans;
}
int main(){
    int binary;
    cout<<"Enter the Binary Number: ";
    cin>>binary;
    cout<<"This is Decimal Number: ";
    int result = BinToDeci(binary);
    cout<<result;
    
}