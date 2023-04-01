//Do insert, search, delete operation on 0 - 99;
#include<bits/stdc++.h>
using namespace std;

void insert(int key, bool arr[], int n) {
    arr[key] = true;
}
bool searchElement(int key, bool arr[], int n) {
    if (arr[key] == 1) {
        return true;
    }
    return false;
}
void deleteElement(int key, bool arr[], int n) {
    arr[key] = false;
}

int main() {
    bool arr[100] = {0};
    insert(88, arr, 100);
    insert(9, arr, 100);
    insert(46, arr, 100);
    cout << searchElement(9, arr, 100) << endl;
    cout << searchElement(98, arr, 100) << endl;
    deleteElement(9, arr, 100);
    cout << searchElement(9, arr, 100) << endl;

}