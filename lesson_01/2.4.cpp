#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a1=0,a2=0,discount=999;
    float s=0,price = 0,s1=0,x=0;
    int disc[4][3]= {
        {40,30,20},
        {30,20,10},
        {20,10,0},
        {0,-5,-10}
    };

    cout<<"Product categories:\n 1) Category A \n 2) Category B \n \
3) Category C" << endl;
    while(a1!=1 && a1!=2 && a1!=3){
    cout<<"Select a number:\t";
    cin >> a1;
    if (a1!=1 && a1!=2 && a1!=3){
        cout<<"Error. Enter again."<< endl;
    }
    }
    cout<< "Categories of clients:\n 1) Excellent \n 2) Good \n 3) Average \n 4) Bad\n";
    while (a2!=1 && a2!=2 && a2!=3 && a2!=4){
        cout<<"Select customer category number:\t";
        cin>>a2;
        if (a2!=1 && a2!=2 && a2!=3 && a2!=4){
        cout<<"Error. Enter again."<< endl;
    }
    }
    cout<<"Enter purchase price(>0):\t";
    while (s<=0){
        cin>>s;
    }
    s1=s;
    cout<<"Select payment method:\n";
    if (a2==1 || a2==2){
        cout<<"1) Cash \n2) Bank check \n3) Credit \n";
        while (x!=1 && x!=2 && x!=3){
        cout<<"Select a number:\t";
        cin>>x;
        if (x!=1 && x!=2 && x!=3){
            cout<<"Error. Enter again."<< endl;
        }
        }
    } else if (a2==3){
        cout<<"1) Cash \n2) Bank check \n";
        while (x!=1 && x!=2){
        cout<<"Select a number:\t";
        cin>>x;
        if (x!=1 && x!=2){
            cout<<"Error. Enter again."<< endl;
        }
        }
    } else {
        cout<<"1) Cash \n";
        while (x!=1){
        cout<<"Select a number:\t";
        cin>>x;
        if (x!=1){
            cout<<"Error. Enter again."<< endl;
        }
        }
    }
    discount = disc[a2-1][a1-1];

    if (x==1){
        price = s - s*discount/100;
    }
    if (x==2){
        float i=-1,n=-1;
    
        while (n<0){
            cout<<"Enter the number of contributions:\t";
            cin>>n;
        }
        while (i<3 || i>15){
            cout<<"Enter interest rate:\t";
            cin>>i;
        }
        price = s*(1+(i*n/100));
        price = price - price*discount/100;
    }
    if (x==3){
        float i=-1,n=-1;

        while (n<1 || n>6){
            cout<<"Enter the number of installment payments:\t";
            cin>>n;
        }
        cout<<"Select loan type:\n 1) Platinum \n 2) Business\n";
        while(i!=1 && i!=2){
            cin>>i;
        }
        if (i==1){
            i=5;
        }else{
            i=2;
        }
        s = s - s*discount/100;
        price = s*pow(1+i/100,n);
    }

    cout<<s1<<endl;
    cout<<price<<endl;

}