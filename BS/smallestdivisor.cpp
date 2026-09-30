#include <iostream>
#include <vector>
using namespace std;

int smallestDivisor(vector<int> &nums, int threshold)
{
    int ans = 0;
    int n = nums.size();
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }
    int low = 0;
    int high = max;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] % mid == 0)
            {
                sum += nums[i] / mid;
            }
            else
            {
                sum += (nums[i] / mid) + 1;
            }
        }

        if (sum <= threshold)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> v1={1,2,5,9};
    cout << smallestDivisor(v1,6);
    cout << endl;
    vector<int> v2={2,3,5,7,11};
    cout << smallestDivisor(v2,11);
    vector<int> v3={19};
    cout << endl;
    cout << smallestDivisor(v3,5);
    cout << endl;
    vector<int> v4 ={21212,10101,12121};
    cout << smallestDivisor(v4,1000000);
}