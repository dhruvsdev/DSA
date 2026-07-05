#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

void leftRotateby1(vector<int> &arr);
void leftRotatebyK(vector<int> &arr, int k , int n );
void moveZeroes(vector<int>& nums);
vector<int> unionArray(vector<int>& nums1, vector<int>& nums2);


int main() {
    vector<int> arr;
    int n1,n2;
    vector<int> nums1;
    vector<int> nums2;
    cout << "Enter n1 : ";
    cin >> n1;
    cout << "Enter n2 : ";
    cin >> n2;
    for(int i =0;i<n1;i++) {
        int x ;
        cin >> x;
        nums1.push_back(x);
    }
    for(int i =0;i<n2;i++) {
        int x ;
        cin >> x;
        nums2.push_back(x);
    }

    // int K;
    // cout << "Enter places : ";
    // cin >> K;
    // for(int i =0;i<n;i++) {
    //     int x ;
    //     cin >> x;
    //     arr.push_back(x);
    // }
    // leftRotatebyK(arr,K,n);
    // moveZeroes(arr);
    vector<int> vec = (unionArray(nums1,nums2));
    for(auto it : vec) {
        cout << it <<" ";
    }
}
void leftRotateby1(vector<int> &arr) {
    // int i =0;
    // for(int j =1;j<arr.size();j++) {
    //     swap(arr[i],arr[j]);
    //     i++;
    // }
    // You did thought of a better approach but why two pointers if its stated that rotate by 1 place 
    int temp = arr[0];
    for(int i = 1;i<arr.size();i++) {
        arr[i-1]=arr[i];
    }
    arr[arr.size()-1]=temp;
    //This is the optimal approach store first in a var and then shift other elements

}
void reverseArr(vector<int> &arr, int a , int b) {
    int i = a;
    int j = b;
    while(i<j) {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
void leftRotatebyK(vector<int> &arr, int k , int n) {
    // int i =0;
    // k= k % arr.size();
    // while(i<k) {
    //     int temp = arr[0];
    //     for(int j=1;j<arr.size();j++) {
    //         arr[j-1]=arr[j];
    //     }
    //     arr[arr.size()-1]=temp;
    //     i++;
    //     cout << "rotated\n";
    // }
    //Brute approach 1 - nested loops 

    //Yours brute approach has O(n^2) TC 
    //You didnt think of copying those elements into another vector as striver copied in left rotate by 1 


    //Brute approach 2 - extra array , TC : O(n+k) SC : O(k)
    // vector<int> temp;

    // //copying first k elements
    // for(int i =0;i<k;i++) {
    //     temp.push_back(arr[i]);
    // }
    // //shifting the rest 

    // //from [k,n-1] should be shifted to [0,k]
    // for(int i =k ;i<arr.size();i++) {
    //     arr[i-k]=arr[i];
    // }

    // //putting back copied elements

    // //from [0,k-1] tp [n-k,n-1]

    // for (int i = n-k ;i<n;i++) {
    //     arr[i] = temp[i-(n-k)];
    // }

    //Optimal approach - reverse parts then reverse full array , TC :O(2n) , SC- O(1)
    reverseArr(arr,0,k-1); //O(k)
    reverseArr(arr,k,n-1); //O(n-k)
    reverseArr(arr,0,n-1); //O(n)
}
void moveZeroes(vector<int>& nums) {
        int n =nums.size();
        // for(int i =0;i<n;i++) {
        //     if(nums[i] !=0) {
        //         for(int j =i;j>0;j--) {
        //             if(nums[j-1]==0) {
        //                 swap(nums[j-1],nums[j]);
        //                 cout << "swap\n";
        //             }
        //         }
        //         for(auto it :  nums ) {
        //                 cout << it << " ";
        //             }
        //             cout << endl;
        //     }
        // }
        for(int i =0;i<n;i++) {
            if(nums[i] !=0) {
                int j =i;
                while(nums[j-1] ==0 && j>0) {
                    swap(nums[j-1],nums[j]);
                    j--;
                }
            }
        }

    }
vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        // set<int> s;
        // //nums1
        // for(int i =0;i<n1;i++) {
        //     s.insert(nums1[i]);
        // }
        // //nums2
        // for(int i=0;i<n2;i++) {
        //     s.insert(nums2[i]);
        // }
        // //print
        // vector<int> arr;
        // for(auto it : s) {
        //     arr.push_back(it);
        // }
        // return arr;
    //Push nums2 
    // for(auto it : nums2) {
    //     nums1.push_back(it);
    // }

    // //sort 
    // sort(nums1.begin(),nums1.end());
    // //remove duplicates 
    // int i =0;
    // for(int j =1;j<nums1.size();j++) {
    //     if(nums1[j] !=nums1[i]) {
    //         nums1[i+1]=nums1[j];
    //         i++;
    //     }
    // }
    // vector<int> arr;
    // for(int j =0;j<i+1;j++) {
    //     arr.push_back(nums1[j]);
    // }
    // return arr;

    int i =0;
    int j = 0;
    vector<int> temp;
    while(i < n1 && j<n2) {
        if(nums1[i] < nums2[j]) {
            temp.push_back(nums1[j]);
            i++;
        }
        else if(nums1[i] > nums2[j]) {
            temp.push_back(nums2[j]);
            j++;
        }
        else if(nums1[i] == nums2[j]) {
            temp.push_back(nums1[j]);
            i++;
            j++;
        }
        while(i<n1) { 
            temp.push_back(nums1[i]);
            i++;
        }
        while(j<n2) {
               temp.push_back(nums1[i]);
                j++;
        }

    }
    return temp;


}


