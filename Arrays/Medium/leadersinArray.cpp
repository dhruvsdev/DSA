#include <iostream>
#include <vector>
using namespace std;


vector<int> leaders(vector<int> & nums) {
    vector<int> v;
    int n = nums.size();
    for(int i =0;i<=n-2;i++) {
        int k =1;
        for(int j =i+1;j<n;j++) {
            if(nums[j] >nums[i]) {
                k=0;
                break;
            }
            else {
                k=1;
            }
        }
        if(k==1) v.push_back(nums[i]);
    }
    v.push_back(nums[n-1]);
    return v;
}

int main()
{
    int n;
    vector<int> nums;
    cout << "Enter n  :";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << endl;
    vector<int> vec = leaders(nums);
    for (auto it : vec)
    {
        cout << it << " ";
    }
}