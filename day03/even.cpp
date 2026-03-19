#include <iostream>
using namespace std ;
int main(){
    cout << "enter range" << endl ;
    int n ;
    cin >> n ;
    cout << "starts from" << endl ;
    for(int i = 0 ; i <= n ; i+=2){
        if(i != 0){
            cout << i << endl ;
        }
    }
}