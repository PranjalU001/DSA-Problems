#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>counts;
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int i =0;
        while(i<n){
            int j=i;
            while(j<n && arr[j]==arr[i]){
                j++;
            }
            counts.push_back(j-i);
            i=j;
        }
        sort(counts.begin(),counts.end());
        for(int k = 1 ;k<counts.size();k++){
            if(counts[k]==counts[k-1]){
                return false;
            }
        }
        return true;
    }
};
//arr = [1,2,2,1,1,3]
//Step 1: sort the array

arr = [1,1,1,2,2,3]