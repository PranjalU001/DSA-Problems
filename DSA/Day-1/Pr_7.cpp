#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr(5);   // create vector of size 5
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    for (int nums : arr) {
        cout << nums << " ";
    }

    return 0;
}
