#include<iostream>
using namespace std;

int main(){
    
    int i;
    int even =0;
    int odd =0;

    while(i!=0){
    cout << "Enter an integer: ";
    cin >> i;
     
    
    if(i%2 == 0){
    even++;
    } else {
    odd++;
    }
    }
    
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd << endl;

    return 0;
}