#include<bits/stdc++.h>
using namespace std;
/*int counting(int x) {   // 1st method
    int count = 0;        // time complexity of this method is O(N) and space complexity is O(1)
    if (x == 0) {
        return 1;
    }
    while (x > 0) {     //doubt in time complexity
        count++;
        x = x/10;
    }
    return count;
}*/
/*int counting(int x) {   // 2nd method
    if (x/10 == 0) {    // time complexity = O(log n) and space complexity = O(log n)
        return 1;
    }
    return 1 + counting(x/10);
}*/
int counting(int x) {   // 3rd method
    //return log10(x) + 1;    this step is also correct but 
    return floor(log10(x) + 1); // we can use floop function to returns the largest possible integer value which is less than or equal to the given argument 
                            // time and space complexity are O(1);
}
int main() {
    cout << "enter number : " ;
    int x;
    cin >> x;
    int count = counting(x);
    cout << count << " digit present in number";
}

