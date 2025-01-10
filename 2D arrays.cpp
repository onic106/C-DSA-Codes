#include <iostream>
using namespace std;

// int main(){
//   int students[3][3]={{100,98,87},
//                       {56,78,89},
//                       {90,67,89}};
// cout<<students[1][2]<<endl;
  
//   return 0;
  
// }

// --> taking input from user for 2d arrays

// int main(){
//   int arr[3][4];
//   int n=3, m=4;
//   for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
//       cin>> arr[i][j];
//     }
//   }

//   for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
//       cout<< arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }

//   return 0;
// }

// --> spiral matirx
// #include <iostream>
// using namespace std;

// void spiralMatrix(int arr[][4], int n, int m) {
//     int srow = 0, scol = 0, erow = n - 1, ecol = m - 1;

//     while (srow <= erow && scol <= ecol) {
//         // top row
//         for (int j = scol; j <= ecol; j++) {
//             cout << arr[srow][j] << " ";
//         }
//         srow++; 

//         // right column
//         for (int i = srow; i <= erow; i++) {
//             cout << arr[i][ecol] << " ";
//         }
//         ecol--;

//         if (srow <= erow) {  
//             // bottom row
//             for (int j = ecol; j >= scol; j--) {
//                 cout << arr[erow][j] << " ";
//             }
//             erow--; //
//         }

//         if (scol <= ecol) {  
//             // left column
//             for (int i = erow; i >= srow; i--) {
//                 cout << arr[i][scol] << " ";
//             }
//             scol++; // 
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int matrix[4][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12},
//         {13, 14, 15, 16}
//     };

//     spiralMatrix(matrix, 4, 4);

//     return 0;
// }


// --> diagonal sum of matrix

void diagonalsum(int mat[][4], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            if(i==j){
                sum+=mat[i][j];
            }else if(j==n-i-1){
                sum+=mat[i][j];
            }
    }
    cout<<"sum = "<<sum<<endl;
    
}

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    diagonalsum(matrix, 4);

    return 0;
}
