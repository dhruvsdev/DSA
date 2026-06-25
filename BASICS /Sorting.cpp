#include <iostream>
using namespace std;


void selectionSort(int arr[],int n) {
    int i=0;
    while(i<=n-2) { // Swapping only happens till n-2 everytime .  
        int min_index=i; //. You kept it 0 , that's why values sorted once were displaced in another iteration
        // int min_val=INT_MAX;
        for(int j=i+1;j<n;j++) {
            if(arr[min_index]>arr[j]) {
                // min_index=max(min_index,j); // Not needed 
                min_index=j;
            }
        }
        swap(arr[min_index],arr[i]);
        i++; 
    }

    //TC - O(n^2) - for all cases 
}
void bubbleSort(int arr[],int n ){
    for(int i=n-1;i>=1;i--) {
        int didSwap =0;
        for(int j=0;j<i;j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                didSwap=1;
            }
        }
        if(didSwap==0) {
            break;
        }
        cout << "runs\n";
    }
}

int main() {
    int n;
    cout << "Enter n  : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    // selectionSort(arr,n);
    bubbleSort(arr,n);
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
