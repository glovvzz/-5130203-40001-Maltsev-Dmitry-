#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float x=-100,gx,fx;
    cout<<"Введите x:\t";
    cin>>x;
    while (x<=(-4) || x==(-1)){
        cout<<"Invalid value. Please try again.\n" ;
        cout<<"Ведите x:\t";
        cin>>x;
    }

    if ((x>(-4)) && (x<(-1))){ 
        gx= abs(x+6)/(abs(x+3)-3);
    }
    else if((x>(-1)) && (x<5)){
        gx = sqrt(5-x)-2;
    }
    else{
        gx = log(x+10)-2;
    }

    if (gx<(-2)){
        fx = abs(gx/(1-gx));
        cout<<"f(g("<<x<<")) = ";
        cout<<fx << endl;
    }
    else if (gx>=(-2) && gx<=1){
        fx = pow(gx+2,2);
        cout<<"f(g("<<x<<")) = ";
        cout<<fx << endl;
    }
    else{
        cout<<"The value of g(x) is outside the permissible limits."<<endl;
    }
}