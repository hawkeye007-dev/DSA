#include <iostream>
using namespace std ;

int main(){
    cout << "Enter the number you want to print table\n";
    int n ;
    cin >> n ;
    for(int i = 0 ; i < 10 ; i++){
        cout << n << " * " << i << " = " << n*i << endl ;
    }
}
