#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums = {1,2,3,4};
    for(int num : nums){
        cout<<num<<" ";
    }
    cout<<endl;
    vector<int>nums1(4,0);
    for(int num : nums1){
        cout<<num<<" ";
    }
}