#include <iostream>
#include <vector>
#include <map>
using namespace std;

int subArraySumK(vector<int>&nums,int k) {
        int n = nums.size();
        multimap<int,int> preSumMap;
        int sum =0;
        int cnt =0;
        for(int i =0;i<n;i++) {
            sum+=nums[i];
            if(sum==k) {
                cnt++;
            }
            int rem = sum - k;
            for(auto it = preSumMap.begin(); it!=preSumMap.end() && it->first==rem;it++) {
                    cnt++;
            }
            preSumMap.emplace(sum,i);
        }
        return cnt;

}

int main() {
    int n ;
    cout <<"enter size : ";
    cin >> n;
    vector<int> nums;
    for(int i =0;i<n;i++) {
        int x ;
        cin >>x ;
        nums.push_back(x);
    }
    int k;
    cout << "enter k : ";
    cin >> k;
    cout << subArraySumK(nums,k);
}
