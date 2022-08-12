#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int lowerNum = n - (n-1);
    while(lowerNum <= n){
        bool is_prime = true;

        if(lowerNum == 1){
            is_prime = false;
        }

        for(int i=2; i<=lowerNum/2; i++){
            if(lowerNum % i == 0){
                is_prime = false;
                break;
            }
        }

        if(is_prime){
            cout << lowerNum << " ";
        }

        lowerNum++;
    }

    return 0;
}
