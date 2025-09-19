// Pair Sum
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2, 4, 5, 6, 7};
    int target = 9;

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {   // j = i+1 avoids duplicate pairs & self-pairing
            if (arr[i] + arr[j] == target) {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }
    return 0;
}
