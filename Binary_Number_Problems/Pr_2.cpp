// Decimal to Binary Conversion From 1 To 10:
#include <iostream>
using namespace std;
int DecToBin_num(int n ){
int ans = 0 ,pow =1;
while( n>0){
    int rem = n%2;
    n = n/2;
    ans = ans+ (rem * pow);
    pow = pow*10;
}
return ans;
}
int main() {
    for (int i = 1; i < 11; i++)
    {
     int result = DecToBin_num(i);
    cout<<i<<" : "<<result<<endl;   
    }
    return 0;
}
