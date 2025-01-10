
// -> for loop
#include <iostream>
using namespace std;
// int main() {
//   for (int i=1; i<=10; i++) {
//     cout << "Iteration" << i << endl;
//   }
// }

// ->print sum of N natural numbers

// int main() {
//   int n;
//   cout<< "Enter the number: ";
//   cin>> n;
//   int sum=0;
//   for(int i=1; i<=n; i++) {
//     sum =sum +i;
//   }
//   cout<< "Sum is " <<sum<<endl;
// }

// -> Reverse no print pattern

// int main(){
//   for(int i=5; i>=1; i--){
//     cout<< i << endl;
//   }
// }
 


// -> while loop

// int main() {
//   int i=1;
//   while(i<=10){
//     cout << "Iteration" << i << endl;
//     i++;
//   }
  
// }

// -> Do while loop



// int main() {
//     int i = 1;
//     do {
//         cout << "Iteration: " << i << endl;
//         i++;
//     } while (i <= 5);

//     return 0;
// }


// Break statment
// int main() {
//   int n;
//   do{
//     cout<<"enter Your Number: ";
//     cin>>n;
//     if(n%10==0){
//       break;
//     }
//     cout<<"You entered"<<n<< endl;
//   }while(true);
// }

// continue statment
// int main(){
// for (int i = 1; i <= 5; i++) {
//     if (i == 3) continue;
//     cout << i << endl;
// }
// }

// prime no



// int main() {
//     int num;
//     bool isPrime = true;

//     cout << "Enter a number: ";
//     cin >> num;

//     if (num <= 1) {
//         isPrime = false; // Numbers less than or equal to 1 are not prime
//     } else {
//         for (int i = 2; i * i <= num; i++) { // Check divisors up to the square root of the number
//             if (num % i == 0) {
//                 isPrime = false;
//                 break; // No need to check further
//             }
//         }
//     }

//     if (isPrime) {
//         cout << num << " is a prime number." << endl;
//     } else {
//         cout << num << " is not a prime number." << endl;
//     }

//     return 0;
// }

//  factorial
// int main(){
// int n = 3; 
// int fact = 1; 
// for(int i=1; i<=n; i++) { 
// fact *= i; 
// } 
 
// cout << "factorial of " << n << " = " << fact << endl; 
// }

// fibonacii series
// int main(){
// int n = 10; 
// int first = 0, sec = 1; 
// cout << first << " " << sec << " "; 


// for(int i=2; i<n; i++) { 
// int third = first + sec; 
// cout << third << " "; 
// first = sec; 
// sec = third; 
// } 

// cout << endl;
// }