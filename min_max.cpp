#include <iostream>
#include <limits.h>
using namespace std;
// int setmini(int A[], int N) {
//     int mini = INT_MAX;
//     for(int i = 0 ; i < N ; i++){
//         if( A[i] < mini ) {
//             mini = A[i];
//         }
//     }
//     return mini;
// }
// int setmaxi(int A[] , int N){
//     int maxi=INT_MIN;
//     for(int i = 0 ; i < N ; i++) {
//         if(A[i] > maxi){
//             maxi = A[i];
//         }
//     }
//     return maxi;

// }
// int main(){
//     int A [] = { 10 , 22 , 23 , 18 , 9 , 34 };
//     int N = 6 ;
//     cout<<"Minimum element is: "<<setmini(A,N)<<endl;
//     cout<<"Maximum element is: "<<setmaxi(A,N)<<endl;
// }
int setmini(int A[],int N){

    int mini= INT_MAX;
    for(int i=0;i<N;i++){
        if(A[i]<mini){
          mini =A[i];
        }
        return mini;

    }
}
int setmaxi(int A[],int N){
    int max=INT_MIN;
    for(int i=0;i<N;i++){
        if(A[i]>max){
            max=A[i];

        }
        return max;
    }
    

}
int main(){
    int A [] = { 10 , 22 , 23 , 18 , 9 , 34 };
    int N = 6 ;
    cout<<"Minimum element is: "<<setmini(A,N)<<endl;
    cout<<"Maximum element is: "<<setmaxi(A,N)<<endl;

}



