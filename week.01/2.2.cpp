#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double H,V,alh,tru=0,T,x,y,t=-1;
    const float g=9.8;

    do{ 
        cout<< "ENTER H:\t";
        cin>>H;
        cout<< "ENTER V:\t";
        cin>>V;
        cout<< "ENTER alh:\t";
        cin>>alh;
     
       if (V>=0 && H>=0 && (pow(V,2)*pow(sin(alh),2))!=0)   // CHECKING THE SCOPE
        {
            tru++;
        } else{
            cout<< "ERROR. VIOLATION OF SCOPE. TRY AGAIN"<< endl;
        }
    } while(tru==0);


    T = V*sin(alh)/g*(1+pow(1+(2*g*H)/(V*V*sin(alh)*sin(alh)),0.5));

    cout<<"ENTER t (time) TO DETERMINE COORDINATES"<<endl;
    while(t<0){
        cin>>t;
        if (t<0){

        }
    }

    x = V*t*cos(alh);
    y = H + V*t*sin(alh)-0.5*g*t*t;

    cout<< "coordinates (x,y):\t" << "("<<x<<","<<y<<")"<<endl;







    


}