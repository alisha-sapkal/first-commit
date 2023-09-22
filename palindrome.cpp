#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter n : ";
    cin >> n;
    long long ans = 0 ;
    long long x = n ;
    while(x != 0){
        int digit = x % 10 ;
        ans = (ans * 10) + digit ;
        x = x / 10 ;
    }
    if(n == ans && n > 0){
        cout << "yes";
    } 
    else{
        cout << "no";
    }
    return 0;
}