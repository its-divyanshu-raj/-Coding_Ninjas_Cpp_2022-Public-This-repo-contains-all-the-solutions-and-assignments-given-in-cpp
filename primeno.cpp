// is a given number prime or not 

#include <iostream>
using namespace std;
int main (){
    int n;

    cout <<" Enter n " << endl ;
    
    cin>> n ;

    int d = 2 ;
    bool divded = false ;

    while (d>2) {
        if (n%d == 0) {
            cout << " Not prime " << endl ;
            divided=true ;
        }
    }

    if  (! divided) {
        cout <<"prime"<<endl;
    }
}
