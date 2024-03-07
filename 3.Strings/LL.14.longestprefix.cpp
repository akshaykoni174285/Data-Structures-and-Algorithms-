#include <iostream>
#include <string>
#include <vector>

using namespace std;


string LongCommPref(vector<string> names){
    // base case if the len of list is 1
    if(names.size() <=1){
        return names[0];
    }
    string first_element = names[0];
    bool Flag = false;
    int counter = 0;
    string res = "";
    string ans="";
    while (!Flag)
    {
        Flag = false;

        for (size_t i = 1; i < names.size(); i++)
        {
            if(first_element[counter] == names[i][counter]){
                continue;
            }
            else{
                Flag = true;
            }
        }
        ans = res;
        res = res+first_element[counter];
        counter++;
        
    }
    return ans;
    


}
int main(int argc, char const *argv[])
{
    // vector<string> Li_names = {"floower","floow","floight"};
    vector<string> Li_names = {"",""};
    // vector<string> Li_names = {""};
    string res = LongCommPref(Li_names);
    cout<<"the res is " << res << endl;
    return 0;
}
