#include <iostream>
#include <vector>
using namespace std;


int binarySearch(vector<int> vec , int val);


int main() {
    int n;
    cout << "Enter array size : ";
    cin >> n;
    vector<int> vec(n);
    for(int i =0;i<n;i++) {
        int x ;
        cin >> x;
        vec[i]=x;
    }
    int val;
    cout << "Enter value to search : ";
    cin >> val;
    cout <<  "Element is present at index :  " << binarySearch(vec,val);
}

int binarySearch(vector<int> vec , int val) {
    int low = 0;
    int high = vec.size()-1;

    while(low<=high) {
        // int mid = low + (high - low)/2;
        int mid = (low + high)/2;

        if(vec[mid]<val) {
            low = mid+1;
        }
        else if(vec[mid]==val) {
            return mid;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
} 