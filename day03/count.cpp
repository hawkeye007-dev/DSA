#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int e = 0 , o = 0 , zero = 0 ;
    for(int i = 0 ; i < n ; i++){
        int temp ;
        cin >> temp ;
        if (temp == 0){
            zero+=1 ;
        }
        else if (temp % 2 == 0){
            e+=1 ;
        }
        else {
            o+=1 ;
        }
    }
    cout << e << o << zero ;
}