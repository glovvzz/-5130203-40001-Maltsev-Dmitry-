#include <iostream>
using namespace std;
#include <cmath>


int main(){
    cout << "THE PROGRAM FOR CALCULATING THE PERIOD (T)" << endl;

    double k,omg=0,f0,tru=0,T;
    const float pi = 3.14;

   do{
    cout<<"ENTER k: \t";
    cin>>k;
    if (1>=(1.0/k) && (-1)<=(1.0/k) ){
        tru=1;
    }
    if (tru==0){
        cout<<"INVALID VALUE: k \n" ;
    }
    } while (tru!=1);

    while (omg==0){
    cout<<"ENTER omg: \t";
    cin>>omg;
    if (omg==0){
        cout<<"INVALID VALUE: omg \n" ;
    }
    }

    f0 = asin(1/k);
    T = ((pi/2) - f0) / omg;

    
    cout << "The initial phase of the oscillations (f0) =\t" << f0 << endl;
    cout << "Period (T) =\t"<< T << endl;




   
}




    