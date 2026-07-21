#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    if (nums[0] < 0)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                swap(nums[0], nums[i]);
                break;
            }
        }
    }
    int i = 0;
    int j = 0;
    while (i <= j && j < nums.size())
    {
        if (nums[i] > 0)
        {
            if (nums[j] > 0)
                j++;
            else
            {
                swap(nums[i + 1], nums[j]);
                i++;
            }
        }
        else
        {
            if (nums[j] < 0)
                j++;
            else
            {
                swap(nums[i + 1], nums[j]);
                i++;
            }
        }
    }
    return nums;
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
    rearrangeArray(nums);
    for (auto it : nums)
    {
        cout << it << " ";
    }
}