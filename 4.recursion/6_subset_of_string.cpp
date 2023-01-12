// Given a set represented as a string, write a recursive code to print all the subsets of it. The subsets can be printed in any order.
// Input :  set = "abc"
// Output : "". "a", "b", "c", "ab", "ac", "bc", "abc"

// Input : set = "abcd"
// Output : "" "a" "ab" "abc" "abcd" "abd" "ac" "acd"
//          "ad" "b" "bc" "bcd" "bd" "c" "cd" "d"


#include <bits/stdc++.h>
using namespace std;

// void bit_method(string str) {
//     int n = str.length();
//     for (int i = 0; i < pow(2, n); i++) {
//         for (int j = 0; j < n; j++) {
//             if ((i >> j) & 1) {
//                 cout << str[j];
//             }
//         }
//         cout << endl;
//     }
// }


// void recursion_method(string str, int index, string curr) {
//     int n = str.length();
//     if (index == n) {
//         cout << curr << endl;
//         return;
//     }

//     recursion_method(str, index + 1, curr + str[index]);
//     recursion_method(str, index + 1, curr);
// }

/*
                                            r_m(0, "")
                                    /                   \
                                /                            \

                    r_m(1,"a")                                          r_m(1, "")
                                                                                             \
                /               \                                   /                                \

        r_m(2,"ab")              r_m(2,"a")                        r_m(2, "b")                          r_m(2, "")

    /           \                 /         \                       /           \                       /           \

r_m(3, "abc")   r_m(3, "ab")    r_m(3, "ac")  r_m(3, "a")         r_m(3, "bc")     r_m(3, "b")         r_m(3, "c")    r_M(3, "")



*/
void recursion_method(string str, int index, string curr) {
    if (index == str.length()) {
        cout << curr << endl;
        return;
    }
    recursion_method(str, index + 1, curr+str[index]);
    recursion_method(str, index+1, curr);
}

int main() {
    string str;
    cout << "Enter a String : ";
    cin >> str;
    //bit_method(str);
    recursion_method(str, 0, "");
}