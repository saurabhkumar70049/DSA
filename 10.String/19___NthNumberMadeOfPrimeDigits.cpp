/*
Nth number made of prime digits
EasyAccuracy: 59.07%Submissions: 14K+Points: 2
Join the most popular course on DSA. Master Skills & Become Employable by enrolling today! 
Given a number 'N'. The task is to find the Nth number whose each digit is a prime number i.e 2, 3, 5, 7. In other words you have to find nth number of this sequence : 2, 3, 5, 7, 22, 23 ,.. and so on.

Example 1:

Input:
N = 10
Output: 33
Explanation:10th number in the sequence of
numbers whose each digit is prime is 33.
Example 2:

Input:
N = 21
Output: 222
Explanation:21st number in the sequence of
numbers whose each digit is prime is 222.
Your Task:
Complete primeDigits function and return the nth number of the given sequence made of prime digits.

Constraints:
1 <= N <= 100 
*/

#include<bits/stdc++.h>
using namespace std;

int arr[100] = {0};
/*
    first method 
    time complexity = O(log10(N)*MAX_N)
*/
// int nthPrime(int n) { 
//      initializationPrime();
//     return arr[n-1];
// }
// bool isPrime(int num) {
//     if(num == 1 || num == 0) {
//         return false;
//     }
//     for(int i = 2; i <= sqrt(num); i++) {
//         if (num%i == 0){
//             return false;
//         }
//     }
//     return true;
// }
// void initializationPrime(){
//     int num = 2, i = 0;
//     while(i < 100) {
//         int temp = num;
//         bool ans = true;
//         while(temp > 0) {
//             if(isPrime(temp%10) == false){
//                 ans = false;
//                 break;
//             }
//             temp /= 10;
//         }
//         if(ans == true){
//             arr[i] = num;
//             i++;
//         }
//         num++;
        
//     }
// }

void initializationPrime(){
    int a[4] = {2, 3, 5, 7};  // this is the logic of this concept. this question ask about prime digit of number so there are only 4 unit digit are prime 
    int k = 0;
    for(int i = 2; i < 2300; i++) {
        int temp = i;
        
        int digit = 0;
        int count = 0;
        while(temp > 0){
            digit++;
            int check = temp%10;
            temp /= 10;
            for(int i = 0; i < 4; i++) {
                if(a[i] == check) {
                    count++;
                }
            }
        }
        if(digit == count) {
            arr[k++] = i; 
        }
    }
}

int nthPrime(int n) {
    initializationPrime();
    // for(int i : arr) {
    //     cout << i << " ";
    // }
    return arr[n-1];
}

int main() {
    
    int n;
    cin >> n;
    cout << nthPrime(n) ;
}