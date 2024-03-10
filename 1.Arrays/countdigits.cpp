#include <iostream>
#include <vector>

using namespace std;

int Count(int x){
    int i = 0;
    while(x > 0){
        x = x/10;
        i++;
    }
    return i;

}


int main(int argc, char const *argv[])
{
    int num = 275;
    int res = Count(num);
    cout << res <<endl;

    return 0;
}

