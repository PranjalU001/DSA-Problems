#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums;
    for(int i = 1 ; i<5;i++){
        int val;
        cin>>val;
        nums.push_back(val);
    }
    nums.pop_back();
    for(int num : nums){
        cout<<num<<" ";
    }
    cout<<endl;
    cout<<nums.front();
    cout<<endl;
    cout<<nums.back();
    cout<<endl;
    cout<<nums.at(2);
}