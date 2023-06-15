#include<bits/stdc++.h>
using namespace std;

void print(char arr[]) {
    cout << arr << endl;
}

int main() {
    //way of declaring a character array string 
    char str[] = "hello saurabh";
    cout << str <<endl;
    char str1[30] = "hello saurabh";
    cout << str1 << endl;
    char str2[] = {'h','e','l','l','o',' ','s','a','u','r','a','b','h','\0'};
    cout << str2 <<endl;
    char str3[20] = {'h','e','l','l','o',' ','s','a','u','r','a','b','h','\0'};
    cout << str3 <<endl;

    char arr[] = {'a', 'c', 'm','\0'}; // if we not but '\0' character at end then compiler will take garbej value after reading all character
    cout << arr << endl;

    //Way of declaring a Object type String 
    string str4 = "hello Mr. Saurabh";
    cout << str4 << endl;

    //way to take input from console
    string str5, str6, str7;
    cin >> str5;
    cout<< str5 << endl;
    getline(cin, str6);
    cout<< str6 << endl;
    getline(cin, str7, 'A');
    cout<< str7 << endl;

    // print(arr);

}