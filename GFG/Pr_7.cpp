// Zeros count
// User function template for C++

class Solution {
  public:
    int countZeroes(int arr[], int n) {
        int count=0;
        // code here
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                count++;
            }
    }
    return count;
    }
};