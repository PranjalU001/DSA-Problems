// Decimal to Binary Conversion:
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
    int n;
    cin >> n;
    int result = DecToBin_num(n);
    cout<<result;
    return 0;
}
