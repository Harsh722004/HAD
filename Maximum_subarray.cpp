#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int maxSubarraySum(int A[], int N) {
    int res = A[0];
    for (int i = 0; i < N; ++i) {
        int currsum = 0;
        for (int j = i; j < N; ++j) {
            currsum += A[j];
            res = max(res, currsum);
        }
    }
    return res;
}

int main() {
    int N;
    
    cout << "Enter the number of elements: ";
    cin >> N;

    int* A = new int[N];

    cout << "Enter the elements: ";
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    cout << "Maximum subarray sum is: " << maxSubarraySum(A, N) << endl;

    delete[] A;

    return 0;
}
