#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, sum, diff, score1, score2;   
    cin >> n;
    
    while (n --> 0) {
        cin >> sum >> diff;
        
        if ((sum-diff)%2 == 0 && sum >= diff){  //scores not a whole number
            score1 = (sum-diff)/2+diff; //score1 is the larger score
            score2 = (sum-diff)/2;
            cout << score1 << ' ' << score2 << '\n';
        }else{
            cout << "impossible" << '\n';
        }
    }
    return 0;
}
