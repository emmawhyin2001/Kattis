#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, capacity, maxdiff;   //the number of socks, the capacity of a laundry machine and the maximum color difference
    cin >> n >> capacity >> maxdiff;

    if(n==1){
        cout << 1;
    }else{
        int socks[n];
        for (int i = 0; i < n; i++) {
            cin >> socks[i];
        }
        sort(socks, socks + n); //sorted array of sock colors
        int lightest = socks[0], machines = 1, temp = 1;
        
        //starts from the second sock
        for (int x = 1; x < n; x++) {
            temp++;
            if(socks[x] - lightest > maxdiff || temp > capacity){  //new machine
                machines++;
                temp = 1;
                lightest = socks[x];
            }
        }
        cout << machines;
    }
    return 0;
}
