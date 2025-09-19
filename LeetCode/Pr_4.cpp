#include<iostream>
using namespace std;
int find_pair(int*arr,int n,int target){
    for (int i = 0; i < n-1; i++)
    {   
        for (int j = 0; j < n; j++)
        {
            if (arr[i]+arr[j]==target)
            {
                cout<<i<<" ";
                return j;
            }  
    }
}
    return -1;
    
}
int main(){
    int arr[5]={2,3,4,5,7};
    int n  = 5;
    int target =10;
    int result = find_pair(arr,n,target);
    cout<<result;
}