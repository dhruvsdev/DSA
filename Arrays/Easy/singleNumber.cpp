#include <iostream>
#include <vector>
using namespace std;

int maxLengthSubArrayK(vector<int> & nums,int k) {
    // int n =nums.size();
    // int len=0;
    // for(int i =0;i<n;i++) {
    //     for(int j =i;j<n;j++) {
    //         int sum =0;
    //         for(int z = i ; z<=j;z++) {
    //             sum+=nums[z];    
    //         }
    //         if(sum==k) {
    //                 len=max(len,j-i+1);
    //             }
    //     }
    // }
    // return len;
    // int n =nums.size();
    // int len=0;
    // for(int i =0;i<n;i++) {
    //     int sum=0;
    //     for(int j =i;j<n;j++) {
    //         sum+=nums[j];
    //         if(sum==k) {
    //             len=max(len,j-i+1);
    //         }
    //     }
    // }
    // return len;

    //TC - O(n^2) Brute force approach 

    // PREFIX SUM - Better approach 

    
}
vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> pair;
        int n = numbers.size();
        int i =0;
        int j = n-1;
        while(i<j) {
            if(numbers[i]+numbers[j] < target) {
                i++;
            }
            else if(numbers[i]+numbers[j]==target) {
                pair.push_back(i+1);
                pair.push_back(j+1);
                return pair;
                break;
            }
            else {
                j--;
            }
        }
        return pair;
    }
int majorityElement(vector<int> & nums) {
    // int n = nums.size();
    // for(int i =0;i<=n/2;i++) {
    //     int j =i;
    //     int cnt=0;
    //     while(j<n) {
    //         if(nums[i]==nums[j]) {
    //             cnt++;
    //             j++;
    //         }
    //         else {
    //             j++;
    //         }
    //     }
    //     if(cnt > n/2) {
    //             return nums[i];
    //         }
    // }
    int n = nums.size();
        int cnt =0;
        sort(nums.begin(),nums.end());
        for(int i =1;i<n;i++) {
                if(nums[i-1]==nums[i]) {
                    cnt++;
                }
                if(cnt > n/2) {
                    return nums[i];
                }
        }
        
}
int main() {
    vector<int> nums;
    int n;
    cout << "Enter size : ";
    cin >> n;
    int k;
    // cout << "Enter target sum  : ";
    // cin >> k;
    for(int i=0;i<n;i++) {
        int x ;
        cin >> x;
        nums.push_back(x);
    }
    cout << maxLengthSubArrayK(nums,k);
    vector<int> vec = twoSum(nums,k);
    for(auto it : vec) {
        cout << it << " ";
    }
    // cout << majorityElement(nums);

}
