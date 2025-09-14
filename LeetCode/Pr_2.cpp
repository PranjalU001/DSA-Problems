// Kadan Algorithum
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int nums[7]={3,-4,5,4,-1,7,-8};
    int max_sum = INT_MIN;
    int curent_sum = 0;
    int n = sizeof(nums)/sizeof(nums[0]);
    for (int i = 0; i < n; i++)
    {
        curent_sum += nums[i];
        max_sum = max(max_sum,curent_sum);
        if(curent_sum<0){
            curent_sum = 0;
        }
    }
    cout<<max_sum;
}