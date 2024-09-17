#include <iostream>

    using namespace std;

    int main() {
        int s;
        cout << "Input size massive: ";
        cin >> s;
        int* arr1 = new int[s];
        cout << "Input elements massive: ";
        for (int i = 0; i < s; i++) {
            cin >> arr1[i];
        }
        cout << "Massiv1: ";
        for (int i = 0; i < s; i++) {
            cout << arr1[i] << " ";
        }
        cout << endl;
        int* arr2 = new int[s + 1];
        for (int i = 0; i < s; i++) {
            arr2[i] = arr1[i];
        }
        arr2[s] = 100;
        cout << "Massiv2: ";
        for (int i = 0; i < s + 1; i++) {
            cout << arr2[i] << " ";
        }
        cout << endl;
        delete[] arr1;
        delete[] arr2;

        return 0;
    }