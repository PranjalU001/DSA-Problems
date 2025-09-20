#include<iostream>
using namespace std;
int main() {
    int arr[5] = {1, 2, 1, 1, 2};
    int n = 5;
    int majorityElement = -1;

    for (int str = 0; str < n; str++) {
        int freq = 0; 
        for (int i = 0; i < n; i++) {
            if (arr[str] == arr[i]) {
                freq++;
            }
        }
        if (freq > n/2) {
            majorityElement = arr[str];
            break;
        }
    }

    if (majorityElement != -1)
        cout << majorityElement << endl;
    else
        cout << "No majority element exists" << endl;

    return 0;
}
