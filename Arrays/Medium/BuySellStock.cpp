#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    int profit = 0;
    for(int i =0;i<prices.size();i++) {
        for(int j =i+1;j<prices.size();j++) {
            int diff = prices[j]-prices[i];

            if(diff > 0 ) {
                profit = max(profit,diff);
            }
        }
    }
    return profit;
}
int main() {
    int n ;
    vector<int> prices;
    cout << "Enter n  :";
    cin >> n;

    for(int i =0;i<n;i++) {
        int x ;
        cin >> x ;
        prices.push_back(x);
    }
    cout << maxProfit(prices);
}