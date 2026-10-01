#include <iostream>
#include <vector>
using namespace std;


int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int max = 0;

        for(int i =0;i<n;i++) {
            if(piles[i]>=max) {
                max = piles[i];
            }
        }
        int ans =INT_MAX;
        // for(int i =1;i<=max;i++) {
        //     int time =0;
        //     for(int j=0;j<n;j++) {
        //         if(piles[j]<=i) {
        //             time+=1;
        //         }
        //         else {
        //             int left = piles[j];
        //             while(left>0) {
        //                 left -=i;
        //                 time+=1;
        //             }
        //         }
        //     }
        //     if(time <=h) {
        //         ans = i;
        //         break;
        //     }
        // }

        int low = 1;
        int high = max;

        while(low<=high) {
            int mid = low + (high-low)/2;
            int time = 0;
            for(int i =0;i<n;i++) {
                if(piles[i]%mid ==0) {
                    time+=(piles[i]/mid);
                }
                else {
                    time+=(piles[i]/mid)+1;
                }
            }
            if(time <=h) {
                ans = mid;
                high = mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return ans;
    }

int main() {
    vector<int> v1= {30,11,23,4,20};
    cout << minEatingSpeed(v1,5);
}