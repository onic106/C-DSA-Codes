#include <iostream>
using namespace std;


// void printsubarray(int arr[], int n){
//   for(int start=0;start<n; start++){
//     for(int end=start; end<n;end++){
//       // cout<<"("<<start<<","<<end<<") "<<endl;
//       for(int i=start; i<=end; i++){
//         cout<<arr[i]<<" ";
//       }
//       cout<<",";
//     }
//     cout<<endl;
// }
// }


// // Brute force approach ->maximum subarray
// void subarraysum(int arr[], int n){
//   int maxsum;
//   for(int start=0 ;start<n; start++){
//      for(int end=start; end<n;end++){
//        int currsum=0;
//        for(int i=0 ;i<=end; i++){
//          currsum+=arr[i];
//        }
//        cout<<currsum<<",";
//        maxsum=max(maxsum,currsum);
//      }
//   }
//   cout<<"Maximum sum is"<<maxsum<<endl;
// }


// kadanes algorithm ->maximum subarray
// #include <climits>
//   void subarraysum(int *arr, int n){   
//     int maxSum = INT_MIN; // Corrected line
//     int currsum=0;
//     for(int i=0; i<n; i++){
//       currsum+=arr[i];
//       maxSum=max(maxSum,currsum);
//       if(currsum<0){
//         currsum=0;
//       }
//     }
//     cout<<"Maximum sum is "<<maxSum<<endl;
//   }
//  int main() {
//    int arr[6]= {2,-3,6,-4,5,6};
//    int n= sizeof(arr)/sizeof(int);
//    subarraysum(arr,n);
//   return 0;

//  }

// void printarray(int arr[], int n){

//   for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
    
//   }cout<<endl;     

// }
// void swapalternate(int arr[], int size){
//   for(int i=0; i<size; i+=2){
//     if(i+1<size){
//       swap(arr[i],arr[i+1]);
//     }
//   }
// }
// int main(){
//   int even[8]= {5,2,9,4,7,6,1,3};
//   int odd[7]= {3,5,7,3,5,4,2};

//   swapalternate(even,8);
//   printarray(even,8);
// cout<<endl;
//   swapalternate(odd,7);
//   printarray(odd,7);
// }