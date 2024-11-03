#include<iostream>
#include<cmath>
using namespace std;

int main(){
    char p = 'Y';

    while (p=='Y'){
        int x=0, opt=0,x1=0,n=0;
        double lt = 0,res = 0;

        while (n<2 || n>20){
        cout<<"Введите n:\t";
        cin>>n;
        }
        cout<<"Введите x:\t";
        cin>>x;
        x1 = x;
        
        cout<< "[1] ОПЦИЯ 1: вычисление Ряда Маклорена для показательной функции" << endl;
        cout<< "[2] ОПЦИЯ 2: вычисление Ряда Маклорена для функции натурального логарифма" << endl;
        cout<< "[3] ОПЦИЯ 3: вычисление Ряда Маклорена для синусоидальной функции" << endl;
        cout<< "[4] ОПЦИЯ 4: вычисление Ряда Маклорена для функции косинуса" << endl;
        cout<< "[5] ОПЦИЯ 5: вычисление Ряда Маклорена для рациональной функции" << endl;
        
        while (opt!=1 && opt!=2 && opt!=3 && opt!=4 && opt!=5){
        cout<< "Выберите опцию:\t";
        cin>>opt;}

        switch (opt){
            case 1:
                lt = 1;
                res = lt;
                for (int i=1;i<=n;i++){
                    lt = lt*(x/i);
                    res+=lt;
                }
                cout<<"[1] = "<<res<<endl;
                break;

            case 2:
                res = x;
                for (int i=2;i<=n;i++){
                    res+= pow(-1,i+1)*pow(x,i)/i;
                }
                cout<<"[2] = "<< res << endl;
                break;

            case 3:
                lt = x;
                res = lt;
                for (int i=1;i<=n;i++){

                    lt = pow(-1,i)*((lt*x*x)/((2*i)*(2*i+1)));
                    res+=lt;
                    lt = abs(lt);
                }
                cout<<"[3] = "<<res<<endl;
                break;
            
            case 4:
                lt = 1;
                res = lt;
                for (int i=1;i<=n;i++){
                    lt = pow(-1,i)*((lt*x*x)/((2*i)*(2*i-1)));
                    res+=lt;    
                    lt = abs(lt);
                }
                cout<<"[4] = "<<res<<endl;
                break;
            case 5:
                while (abs(x) >= 1)
                    {
                        cout<< "Введите число x: ";
                        cin>>x;}
                res = 1;
                for (int i=1;i<=n;i++){
                    res+=(n+1)*pow(x,n);
                }
                cout<<"[5] = "<<res<<endl;
                break;} 
    cout<<"Если вы хотите продолжить, введите «Y», чтобы выйти из любого другого символа:\t" ;             
    cin>>p;
    }
}