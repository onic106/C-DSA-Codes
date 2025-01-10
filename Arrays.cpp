#include <iostream>
using namespace std;

// int main() {
//     // int numbers[3] = {10, 20, 30};

//     // cout << "First element: " << numbers[0] << endl;
//     // cout << "Second element: " << numbers[1] << endl;
//     // cout << "Third element: " <<numbers[2] << endl;
// }

// int main() {

//   int numbers[5];

//     for (int i = 0; i <=4; i++) {
//       cin>>numbers[i];
//         cout << "Element at index " << i << ": " << numbers[i] << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

// int main() {
//     int numbers[5]; // Declares an array of size 5 to store integers

//     cout << "Enter 5 integers:" << endl;

//     // Input each element using a loop
//     for (int i = 0; i < 5; i++) {
//         cout << "Enter element " << i  << ": "; // Prompts user to input
//         cin >> numbers[i]; // Takes input and stores it in the array
//     }

//     cout << "You entered: ";
//     for (int i = 0; i < 5; i++) {
//         cout << numbers[i] << " "; // Outputs each element from the array
//     }

//     return 0;
// }

// -> largest and smallest no. in array
// int main() {
//   int array[] = {12,25,33,4,56};
//   int n=sizeof(array)/sizeof(int);

//   int max=array[0];
//   int min=array[0];
//   for(int i=0; i<n; i++){
//     if(array[i]>max){
//       max=array[i];

//       if(array[i]<min){
//         min=array[i];

//     }
//   }
//   }
//   cout<<"maxmimum value is"<<max<<endl;
//   cout<<"minmum value is"<<min<<endl;
//   return 0;
//   }

// -> linear search

// int linearsearch(int arr[], int n, int key){
//   for(int i=0; i<n; i++){
//     if(arr[i]==key){
//       return i;
//     }
//   }
//   return -1;
// }

// int main() {
//     int n, key;

//     cout << "Enter the number of elements in the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Enter the element to search: ";
//     cin >> key;

//     int result = linearsearch(arr, n, key);

//     if (result != -1) {
//         cout << "Element " << key << " found at index " << result << "." <<
//         endl;
//     } else {
//         cout << "Element " << key << " not found in the array." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//   int arr[] = {4, 5, 6, 7, 3, 2};       // Original array
//   int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

//   cout << "Original array: ";
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
//   cout << endl;

//   // using two-pointer technique
//   int start = 0, end = n - 1;
//   while (start < end) {
//     // Swap the elements at start and end
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;

//     // Move pointers
//     start++;
//     end--;
//   }

//   cout << "Reversed array: ";
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
//   cout << endl;

//   return 0;
// }

 ///--> binary search

// #include <iostream>
// using namespace std;

// // Function for binary search
// int binarySearch(int arr[], int n, int key) {
//     int start = 0, end = n - 1;

//     while (start <= end) {
//         int mid = start + (end - start) / 2; // Prevents overflow for large start and end

//         if (arr[mid] == key) {
//             return mid; // Key found at index mid
//         }
//         if (arr[mid] < key) {
//             start = mid + 1; // Search in the right half
//         } else {
//             end = mid - 1; // Search in the left half
//         }
//     }

//     return -1; // Key not found
// }

// int main() {
//     int arr[] = {2, 4, 6, 8, 10, 12, 16}; // Sorted array
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int key;

//     cout << "Enter the element to search: ";
//     cin >> key;

//     int result = binarySearch(arr, n, key);

//     if (result != -1) {
//         cout << "Element " << key << " found at index " << result << "." << endl;
//     } else {
//         cout << "Element " << key << " not found in the array." << endl;
//     }

//     return 0;
// }
