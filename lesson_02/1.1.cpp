#include <iostream>
using namespace std;
#include <cmath>


int main(){
    int a=0,b=0;
    while(a<10 || a>1000 || b<10 || b>1000){
        cout<<"Enter A:\t";
        cin>>a;
        cout<<"Enter B:\t";
        cin>>b;
    }
    
    int sd = 0, ka = 0, kb = 0, pna = 1, scb = 0, nod = 0;

    if (a>b){
        for (int i=1; i<=a; i++){
            if ((a%i)==0){
                sd+=i;
                ka+=1;
                if (i%2!=0){
                    pna*=i;
                }
            }
            if (b%i==0){
                sd+=i;
                kb+=1;
                if (i%2==0){
                    scb+=i;
                }
            }
            if ((a%i==0) && (b%i==0)){
                nod = i;
            }
        } 
    }
    if (a<b){
        for (int i=1; i<=b; i++){
            if ((a%i)==0){
                sd+=i;
                ka+=1;
                if (i%2!=0){
                    pna*=i;
                }
            }
            if (b%i==0){
                sd+=i;
                kb+=1;
                if (i%2==0){
                    scb+=i;
                }
            }
            if ((a%i==0) && (b%i==0)){
                nod = i;
            }
        } 
    }
    cout<<"Sum of divisors = "<<sd<<endl;
    cout<<"Product of the number of divisors = "<<ka*kb<<endl;
    cout<< "The sum of the product of the odd divisors of the number A by the sum of the even ones divisors\
of number B = "<<pna+scb<<endl;
    cout<<"NOD = "<<nod<<endl;
}