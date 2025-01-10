#include <iostream>
using namespace std;
// int main() {
//    int age;
//   cout <<"Enter your age: ";
//   cin >> age;

//   if(age>=18) {
//       cout << "Your are eligible to vote";
//   } else {
//       cout << "Your are not eligible to vote";
//   }
//    return 0;
// }

// q1 largest of two no.

// int main() {
//     int Num1;
//     int Num2;
//     cout << "Enter the first number: ";
//     cin >> Num1;
//     cout << "Enter the second number: ";
//     cin >> Num2;

//   if(Num1>Num2){
//     cout << "The largest number is: " << Num1;
//   }else {
//     cout << "The largest number is: " << Num2;
//   }
  
  
//   return 0;
  
// }

//Q2 odd or even

// int main() {
//   int num;
//   cout << "Enter the number: ";
//   cin >>num;

//   if(num%2==0) {
//     cout <<"The Number is even";
//   } else {
//     cout<< "The Number is Odd";
//   }
  
//   return 0;
// }

// Else if Statements

// int main () {
//   int marks;
//   cout << "Enter your marks: ";
//   cin>>marks;

//   if(marks>=90) {
//     cout << "A Grade";
//   } else if (marks>=80){
//     cout << "B Grade";
//   }else {
//     cout << "C Grade";
//   }
//    return 0;
  
// }

// Q-> print tax slab

// int main(){
//   int income;
//   float tax;
//   cout << "Enter your income (in lakhs): ";
//   cin>> income;

//   if (income<=5) {
//     tax =0;
//   } else if (income<=10){
//     tax = 0.05 * income;
//   } else {
//      tax = 0.10 * income;
//   }
    
//  cout<< "Your Tax will be "<< tax * 100000 << endl;
  
//   return 0;
  
// }

// -> Q2 largest of three numbers

// int main() {
//   int a , b, c;
//   cout << "Enter the first number: ";
//   cin>> a;
//   cout << "Enter the second number: ";
//   cin>> b;
//   cout << "Enter the Third number: ";
//   cin>> c;

//   if(a>=b && a>=c){
//     cout << "The largest number is: " << a;
//   } else if(b>=c){
//     cout << "The Largest Number is: " << b;
//   }else{
//     cout <<"The largest number is; " << c;
//   }
//   return 0;
// }

// -> Ternary Operator



// int main() {
//     int age;

//     cout << "Enter your age: ";
//     cin >> age;

//     cout << (age >= 18 ? "You are an adult." : "You are not an adult.") << endl;

//     return 0;
// }

// -> Switch Statement

// int main() {
//   int a, b;
//   char op;
//   cout << "Enter the first number: ";
//   cin >> a;
//   cout << "Enter the second number: ";
//   cin >> b;
//   cout<< "Enter Operand: ";
//   cin>> op;

//   switch(op) {
//   case '+':
//     cout << a + b;
//     break;
//   case '-':
//     cout << a - b;
//     break;
//   case '*':
//     cout << a * b;
//     break;
//   case '/':
//     cout << a / b;
//     break;
//   default:
//     cout << "Invalid Operator";
//   }
// }

//Leap year



// int main() {
//     int year;
//     cout << "Enter a year: ";
//     cin >> year;

//     if ((year % 4 == 0) && (year % 100 != 0 || year % 400 == 0)) {
//         cout << year << " is a leap year." << endl;
//     } else {
//         cout << year << " is not a leap year." << endl;
//     }

//     return 0;
// }
