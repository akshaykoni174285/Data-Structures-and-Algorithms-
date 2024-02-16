#include <iostream>

using namespace std;


int factorial(int n){
    // base case
    if (n == 0) return 1;
    return n * factorial(n-1);
}

void Print(int n){
    if (n==0)
        return ;

    Print(n-1);
    cout<<n<<endl;


}

int Rev(int n){

    if (n == 1) 
        return 1;
    cout<<n<<endl;
    Rev(n-1);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    // Print(n);
    Rev(n);

    
    return 0;
}
