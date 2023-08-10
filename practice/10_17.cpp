#include<bits/stdc++.h>
using namespace std;

int sumOfDigit(string str){
    string temp = "";
    int sum = 0;
    for(int i = 0; i <= str.length(); i++){
        if(i != str.length() && str[i] >= 48 && str[i] <= 57){
            temp += str[i];    
        }
        else {
            
            if(temp == ""){
                continue;
            }
            
            else {
                cout << temp << endl;
                int j = 0, tempSum= 0;
                while (j < temp.length()){
                    tempSum = tempSum*10 + (temp[j] - '0');
                    j++;
                }
                sum += tempSum;
            }
            temp = "";
        }
    }
    return sum;
}

int main() {
    string str;
    getline(cin, str);
    cout << sumOfDigit(str);
}