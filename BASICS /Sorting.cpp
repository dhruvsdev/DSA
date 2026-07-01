#include <iostream>
#include <vector>
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
// Remarks - haha , logic was correct by me in first time but didn't dry run completely 
void insertionSort(int arr[],int n) {
    for(int i=0;i<n;i++) {
        //int corri =i;  // no need you can use j only 
        for(int j=i;j>0;j--) {
            if(arr[j-1]>arr[j]) {
                swap(arr[j-1],arr[j]);
            }
        }
    }
}
void merge(vector<int> &arr,int low,int mid,int high) {
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right <=high) {
        if(arr[left]<=arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while(right <=high) {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++) {
        arr[i]=temp[i-low];
    }
}
void mergeSort(vector<int> &arr,int low , int high) {
    if(low>=high) return;
    else {
        int mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);

    }

}
int qs(vector<int> &arr,int low , int high) {
    int pvt = arr[low];
    int i = low;
    int j = high;
    while(i<j) {
        while(arr[i] <=pvt && i<=high-1) {
            i++;
        }
        while(arr[j]>pvt && j>=low+1) {
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void quickSort(vector<int> &arr,int low , int high) {
        if(low<high) {
            int ptn = qs(arr,low,high);
            quickSort(arr,low,ptn-1);
            quickSort(arr,ptn+1,high);
        }
}

int  bbSort(vector<int> &arr,int i) {
        int didSwap = 0;
        for(int j=0 ;j<i;j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                didSwap=1;

            }
        }
        return didSwap;   
}
void recurbbSort(vector<int> &arr,int n) {
        if(n == 1) return;
        else {
            int k = bbSort(arr,n-1);
            if(k==0)  {
                cout << "sorted\n";
                return;
            }
            recurbbSort(arr,n-1);
        }
}
void inSort(vector<int> &arr,int i) {
    for(int j = i;j>0;j--) {
        if (arr[j]<arr[j-1]) {
            swap(arr[j-1],arr[j]);
        }
    }
}
void recurinSort(vector<int> &arr,int i ,int n) {
    if(i==n) return ;
    else {
        inSort(arr,i);
        recurinSort(arr,i+1,n);
    }
}
int main() {
    int n;
    cout << "Enter n  : ";
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    // selectionSort(arr,n);
    // bubbleSort(arr,n);
    // insertionSort(arr,n);
    // mergeSort(arr,0,n-1);
    // quickSort(arr,0,n-1);
    recurbbSort(arr,n);
    // recurinSort(arr,0,n);
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
