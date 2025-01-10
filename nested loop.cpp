#include <iostream>
using namespace std;
 // square pattern 
// int main() {
//    // outer loop
//      for(int i=1 ; i<=5 ; i++){
//         // inner loop
//         for(int j=1 ; j<=5 ; j++){
//             cout<<i<< " ";
//         }
//         cout<<endl;
//      }
   
   
//    return 0;
   
//  }

// star pattern

// int main(){
//  for(int i=1 ;i<=5 ; i++){
//    for(int j=1 ; j<=i ; j++){
//      cout<<"*";
//    }
//    cout<< endl;
//  }
// }

// Inverted Star pattern

// int main(){
//   for (int i=5 ; i>=1 ; i--){
//     for (int j=1 ; j<=i ; j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// }

// half pyramid pattern
// int main() {
//    // outer loop
//      for(int i=1 ; i<=5 ; i++){
//         // inner loop
//         for(int j=1 ; j<=i ; j++){
//             cout<<j<< " ";
//         }
//         cout<<endl;
//      }
// }

// int main() {
//    // outer loop
//   char ch ='A';
//      for(int i=1 ; i<=7 ; i++){
//         // inner loop
//         for(int j=1 ; j<=i ; j++){
//             cout<<ch<< " ";
//           ch++;
//         }
//         cout<<endl;
//      }
// }

// Holllow Rectangle Pattern

#include <iostream>
using namespace std;

// int main() {
//     int n = 4; // Declare the number of rows and columns (square shape)

//     for (int i = 1; i <= n; i++) {         // Outer loop for rows
//         for (int j = 1; j <= n; j++) {     // Inner loop for columns
//             if (i == 1 || i == n || j == 1 || j == n) {
//                 cout << "*";               // Print '*' for boundary
//             } else {
//                 cout << " ";               // Print space for hollow part
//             }
//         }
//         cout << endl;                      // Move to the next line after each row
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5; // Number of rows

//     for (int i = 1; i <= n; i++) {       // Outer loop for rows
//         for (int j = 1; j <= n; j++) {   // Inner loop for spaces and stars
//             if (j <= n - i) {
//                 cout << " ";             // Print spaces
//             } else {
//                 cout << "*";             // Print stars
//             }
//         }
//         cout << endl;                    // Move to the next line
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5; 

//     // Top half of the diamond
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) { 
//             cout << " ";
//         }
//         for (int j = 1; j <= 2 * i - 1; j++) { 
//             cout << "*";
//         }
//         cout << endl;
//     }

//     // Bottom half of the diamond
//     for (int i = n - 1; i >= 1; i--) {
//         for (int j = 1; j <= n - i; j++) { 
//             cout << " ";
//         }
//         for (int j = 1; j <= 2 * i - 1; j++) { 
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }
