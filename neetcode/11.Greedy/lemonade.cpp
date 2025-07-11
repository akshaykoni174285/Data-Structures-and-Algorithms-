#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(int argc, char const *argv[])
{
    vector<int> bills = {5,5,5,10,20};
        int five=0;
        int ten=0;
        for(auto& bill:bills){
            if(bill == 5){
                five++;
            }
            else if (bill == 10){
                if(five > 0){
                    five --;
                    ten++;
                }
                else {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
            else{
                if(ten > 0 && five > 0){
                    ten--;
                    five--;
                }
                else if(five >= 3){
                    five -= 3;
                }
                else {
                    cout<<"NO"<<endl;
                    return 0;
            }
            }
        }
        
            
        
    return 0;
}
