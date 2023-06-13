#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::sort(arr, arr + size);

    int uniqueElements = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != arr[uniqueElements]) {
            uniqueElements++;
            arr[uniqueElements] = arr[i];
        }
    }

    for (int i = 0; i <= uniqueElements; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
