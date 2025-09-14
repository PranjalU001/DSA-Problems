// Maximum Subarray
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[7]={3,-4,5,4,-1,7,-8};
    int max_sum = INT_MIN;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int st = 0 ; st<n ;st++){
        int current_sum = 0;
        for(int j = st; j<n;j++){
            current_sum +=arr[j];
            max_sum = max(max_sum,current_sum);
        }
    }
    cout<<max_sum;
}