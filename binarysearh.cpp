#include <iostream>
using namespace std;

int binarySearchRecursive(int array[], int left, int right, int objective) {
    if (right >= left) {
        int mid = left + (right -left) / 2;
        if (array[mid] == objective) {
            return mid;
        }
        if (array[mid] > objective) {
            return binarySearchRecursive(array, left, mid-1, objective);
        }
        return binarySearchRecursive(array, mid +1, right, objective);
    }
    return -1;
}
int main() {
    int array[] = {1, 5, 12, 42, 101, 233};
    int objective = 101;
    int sizearray = 6; // sizeof(array) / sizeof(array[0])
    int result = binarySearchRecursive(array, 0, sizearray -1, objective);
    if (result == -1){
        cout << "El elemento no fue encontrado" << endl;
    } else {
        cout << "El elemento fue encontrado " << result << endl;
    }
}