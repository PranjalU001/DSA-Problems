// Sum All Array Elements
class Solution {
  public:
    int arraySum(int arr[], int size) {
        // Code here
        int count = 0;
        int i =0;
        while(i<size){
            count = count + arr[i];
            i++;
        }
        return count;
    }
};