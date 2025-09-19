#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,4,6,7,8};
    int prod =1;
    for (int i = 0; i < 5; i++)
    {
        prod = prod* arr[i];
    }
    cout<<prod;
}