#include <iostream>
using namespace std;

// // --> ascending order bubble sort
// void printarray(int arr[], int n) {
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
// }
// void bubblesortascedning(int arr[], int n) {
//   for (int i = 0; i < n - 1; i++) {
//     for (int j = 0; j < n - i - 1; j++) {
//       if (arr[j] > arr[j + 1]) {
//         swap(arr[j], arr[j + 1]);
//       }
//     }
//   }
//   printarray(arr, n);
// }
// // --> descending order bubble sort
// void bubblesortdescedning(int arr[], int n) {
//   for (int i = 0; i < n - 1; i++) {
//     for (int j = 0; j < n - i - 1; j++) {
//       if (arr[j] < arr[j + 1]) { // Swap if current is smaller than next
//         int temp = arr[j];
//         arr[j] = arr[j + 1];
//         arr[j + 1] = temp;
//       }
//     }
//   }
//   printarray(arr, n);
// }

// int main() {

//   int arr[10] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};

//   cout << "ascedning oder is:";
//   bubblesortascedning(arr, 10);

//   cout << endl;

//   cout << "descedning oder is:";
//   bubblesortdescedning(arr, 10);

//   return 0;
// }
