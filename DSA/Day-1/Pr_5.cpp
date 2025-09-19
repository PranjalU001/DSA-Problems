#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 7, 8, 2, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unique elements are: ";
    for (int i = 0; i < n; i++) {
        bool isUnique = true;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
