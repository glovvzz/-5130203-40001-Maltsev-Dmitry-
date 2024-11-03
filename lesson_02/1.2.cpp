#include <iostream>
#include <cmath>
using namespace std;

int main(){

    char p='Y';
    
    while (p=='Y'){
        int x=0, opt=0,k = 0,max = 0,min = 9990,s = 0,pr=1,ch = 0,mn = 1,x1 = 0;
        while (x<1000 || x>999999999){
        cout<<"Enter number:\t";
        cin>>x;
        }
        x1 = x;
        cout<<"Options menu:\n";
        cout<<"1)Find out the digits of the number\n";
        cout<<"2)Number of digits\n";
        cout<<"3)Min and Max digits of the number\n";
        cout<<"4)Sum of digits of a number\n";
        cout<<"5)Product of odd digits\n";
        cout<<"6)Reversed version of the number\n";
        while (opt!=1 && opt!=2 && opt!=3 && opt!=4 && opt!=5 && opt!=6){
        cout<<"Select an option:\t";
        cin>>opt;}

        switch(opt){
            case 1:
                cout<<"Number digits = {"; 
                while(x>0){
                if(x>10){
                cout<<(x%10)<<",";}
                else{cout<<(x%10);}
                x = x/10;
                } cout<<"}"<<endl;
                break;

            case 2:
                while (x>0){
                    k++;
                    x = x/10;
                    }
                cout<<"Number of digits = "<<k<<endl;
                break;
            
            case 3:
                while (x>0){
                    if ((x%10)>max){
                        max = x%10;
                    }
                    if ((x%10)<min){
                        min = x%10;
                    }
                    x = x/10;
                }
                cout<<"MAX = "<<max<<" ; "<<"MIN = "<<min<<endl;
                break;
            
            case 4:
                while(x>0){
                    s+=(x%10);
                    x = x/10;
                }
                cout<<"Sum of digits of a number = "<< s <<endl;
                break;

            case 5:
                while(x>0){
                    if ((x%10)%2!=0){
                        pr = pr*(x%10);
                        x = x/10;
                    }
                }
                cout<<"Product of odd digits of a number = "<<pr<<endl;
                break;

            case 6:
                while (x1>0){
                    k++;
                    x1 = x1/10;
                    }
                mn = pow(10,k-1);
                while(x>0){
                    ch+= (x%10)*mn;
                    mn = mn/10;
                    x = x/10;
                }
                cout<<"Reversed number = "<< ch <<endl;
                break;
        }

        cout<<"If you want to continue, then enter 'Y', to exit any other character:\t";
        cin>>p;
    }
}