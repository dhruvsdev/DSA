#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int n1=a.size();
        int n2=b.size();
        vector<int> temp;
        int i =0;
        int j =0;
        while(i<n1 && j<n2) {
            if(a[i]<=b[j]) {
                if(temp.size() ==0 || temp.back() !=a[i]) {
                    temp.push_back(a[i]);
                    i++;
                }
                else {
                    i++;
                }
            }
            else {
                if(temp.size()==0 || temp.back() !=b[j]) {
                    temp.push_back(b[j]);
                    j++;
                }
                else{
                    j++;
                }
            }
        }
        while(i<n1) {
            if(temp.size()==0  || temp.back() !=a[i]) {
                temp.push_back(a[i]);
                i++;
            }
        }
        while(j<n2) {
            if(temp.size()==0  || temp.back() !=b[j]) {
                temp.push_back(b[j]);
                j++;
            }
        }
        return temp;
        
}
    vector<int> twoSum(vector<int> & nums,int target) {
    int n = nums.size();
    multimap<int,int> mpp;
    vector<int> vec;
    for(int i =0;i<n;i++) {
        if(mpp.find(target-nums[i]) !=mpp.end()) {
            auto it = mpp.find(target-nums[i]);
            vec.push_back(i);
            vec.push_back((*it).second);
            break;
        }
        else {
            mpp.emplace(nums[i],i);
        }    
    }
    return vec;
}
int main() {
    // int n1,n2;
    // vector<int> a;
    // vector<int> b;
    // cout << "Enter n1 and n2 : ";
    // cin >> n1 >> n2;
    // cout << "Enter elements of array a :\n";
    // for(int i=0;i<n1;i++) {
    //     int x ;
    //     cin >> x;
    //     a.push_back(x);
    // }
    // cout << "Enter elements of array b :\n";
    // for(int i=0;i<n2;i++) {
    //     int x ;
    //     cin >> x;
    //     b.push_back(x);
    // }
    // vector<int> v = findUnion(a,b);

    // for(int i : v) {
    //     cout << i << " ";
    // }
    int n;
    vector<int>nums;
    cout << "enter n : ";
    cin >> n;
    for(int i=0;i<n;i++) {
        int x ;
        cin >> x;
        nums.push_back(x);
    }
    int target;
    cout << "Enter target : ";
    cin >> target;
    // sort(nums.begin(),nums.end());
    // for(int i : nums) {
    //     cout << i << " ";
    // }
    // cout << endl;
    // cout << missingNumber(nums);

    vector<int> v = twoSum(nums,target);
    for(auto it : v) {
        cout << it << " ";
    }

}