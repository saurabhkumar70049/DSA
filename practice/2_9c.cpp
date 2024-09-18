#include<bits/stdc++.h>
using namespace std;

void siev(int n){
    bool arr[n+1];
    for (int i = 0; i <= n; i++){
        arr[i] = true;
    }
    for (int i = 2; i <= n/2; i++){
        if(arr[i] == true){
            for(int j = i*2; j <= n; j += i){
                arr[j] = false;
            }
        }
    }   
    for(int i = 2; i <= n; i++){
        if(arr[i] == true){
            cout << i << " ";
        }
    }

}

int main() {
    int n;
    cout << "enter number: ";
    cin >> n;
    siev(n);
}