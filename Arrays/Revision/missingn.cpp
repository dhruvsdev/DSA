#include <iostream>
#include <map>
using namespace std;
#include <vector>

int missingNum(vector<int> &nums)  {
    int n = nums.size();
    //approach 1  - linear search - TC - O(nlogn) , SC - O(1)

    // sort(nums.begin(),nums.end());
    // if(nums[0]!=0) return 0; //Important after sorting 
    // for(int i =0;i<nums.size()-1;i++) {
    //     if(nums[i+1]-nums[i]>1) {
    //         return (nums[i+1]+nums[i])/2;
    //     }
    // }
    // return n ;

    //Approach 2 - hashmap - TC - O(n) , SC - O(n)

    // unordered_map<int,int> mpp;
    // vector<int> hash(n+1,0);

    // for(int i =0;i<n;i++) {
    //     hash[nums[i]]++;
    // }
    // for(int i =0;i<hash.size();i++) {
    //     if(hash[i]==0) {
    //         return i;
    //     }
    // }

    //Approach 3 - sum of n terms - TC - O(n) , SC - O(1)

    // int expSum = (n*(n+1)/2);

    // int currSum = 0;
    // for(int i =0;i<n;i++) {
    //     currSum+=nums[i];
    // }
    // return expSum-currSum;

    //Approach 4 - XOR - TC - O(n) , SC - O(1)

    // int xor1=0;
    // int xor2=0;
    // for(int i =0;i<=n;i++) {
    //     xor1^=i;
    // }
    // for(int i =0;i<n;i++) {
    //     xor2^=nums[i];
    // }
    // return xor1^xor2;

}


int main() {
    int n ;
    cout << "Enter size : ";
    cin >> n;

    vector<int> nums;

    for(int i =0;i<n;i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << missingNum(nums);
    
}