/*
Selection sort is a simple and easy-to-understand sorting algorithm that works by repeatedly selecting
the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted 
portion of the list. 


Lets consider the following array as an example: arr[] = {64, 25, 12, 22, 11}

First pass:



For the first position in the sorted array, the whole array is traversed from index 0 to 4 sequentially. The first position where 64 is stored presently, after traversing whole array it is clear that 11 is the lowest value.
   64   	   25   	   12   	   22   	   11   
Thus, replace 64 with 11. After one iteration 11, which happens to be the least value in the array, tends to appear in the first position of the sorted list.
   11   	   25   	   12   	   22   	   64   
Second Pass:

For the second position, where 25 is present, again traverse the rest of the array in a sequential manner.
   11   	   25   	   12   	   22   	   64   
After traversing, we found that 12 is the second lowest value in the array and it should appear at the second place in the array, thus swap these values.
   11   	   12   	   25   	   22   	   64   
Third Pass:

Now, for third place, where 25 is present again traverse the rest of the array and find the third least value present in the array.
   11   	   12   	   25   	   22   	   64   
While traversing, 22 came out to be the third least value and it should appear at the third place in the array, thus swap 22 with element present at third position.
   11   	   12   	   22   	   25   	   64   
Fourth pass:

Similarly, for fourth position traverse the rest of the array and find the fourth least element in the array 
As 25 is the 4th lowest value hence, it will place at the fourth position.
   11   	   12   	   22   	   25   	   64   
Fifth Pass:

At last the largest value present in the array automatically get placed at the last position in the array
The resulted array is the sorted array.



NOTE :- 
    1. time complexity = O(n^2)
    2. Does less memory write compared to quickSort, mergeSort, insertionSort... etc but cycle sort 
       is optimize in term of memory write
    3. not stable
    4. basic idea for heap sort
*/

#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    
    for(int i = 0; i < n; i++) {
        int k = i;
        for (int j = i+1; j < n; j++) {
            if(arr[k] > arr[j]) {
                k = j;
            }
        }
        swap(arr[i], arr[k]);
    }
}

int main() {
    int arr[] = {9, 3, 7, 6, 1};
    selectionSort(arr, 5);
    for (int i : arr) {
        cout << i << " ";
    }
}