#include <iostream>
using namespace std;

vector<int> removeDuplicates(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[i - 1])
        {
            for (int j = i; j < arr.size() - 1; j++)
            {
                if (arr[j] <= arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
    int count = 1;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            count++;
        }
    }
    vector<int> temp;
    ;
    for (int i = 0; i < count; i++)
    {
        temp.push_back(arr[i]);
    }
    return temp;
}

int main() {
    vector<int> arr;
    int n;
    cout << "Enter size : ";
    cin >> n;
    for(int i =0;i<n;i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    vector<int> temp;
    temp = removeDuplicates(arr);
    for(auto it : temp ) {
        cout << (it) << " " ;
    }
}