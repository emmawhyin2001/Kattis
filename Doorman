#include <iostream>
#include <string>

using namespace std;

int main() {
    int maxdiff, diff=0, letin=0;
    string queue;
    
    cin >> maxdiff;
    cin >> queue;
        
    while(queue.size() > 0) {
        //diff-- for female, diff++ for male  
            if(queue.at(0) == 'W'){//female
                diff--;
                queue.erase(queue.begin());
            }else{//next in line = male
                diff++;
                queue.erase(queue.begin());
            }
                
            if(diff > maxdiff) {//one too many male
                if(queue.at(0)=='W'){
                    queue.erase(queue.begin());//next woman sets the balance back
                    diff--;
                    letin++;
                }else{
                    break;
                }
            }else if(diff < -1*maxdiff){//one too many female
                if(queue.at(0)=='M'){
                    queue.erase(queue.begin());//next man sets the balance back
                    diff++;
                    letin++;
                }else{
                    break;
                }
            }
        letin++;
    }
    cout << letin;
    return 0;
}
