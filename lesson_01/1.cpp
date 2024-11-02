#include <iostream>
using namespace std;

int main(){
    cout << "****** WELCOME TO TAX PROGRAM ******" << endl;
    
    int z1=-1,z3=-1;
    float m,nalog=0,res=0,z2=0;

    //TAX WITHOUT INCREASES (FOR COATING TYPE) : НАЛОГ БЕЗ УВЕЛИЧЕНИЯ (ЗА ПОКРЫТИЕ)
    cout<<"Enter the number of square meters of land with a roof: \t";
    cin>>m;
    nalog+=(5*m);
    cout<<"Enter the number of square meters of land without a roof: \t";
    cin>>m;
    nalog+=(3*m);
    cout<<"Enter the number of square meters of garden on the plot: \t";
    cin>>m;
    nalog+=m;


    // WE COUNT THE TAX INCREASE TO FIND THE AMOUNT IN THE END : СЧИТАЕМ УВЕЛИЧЕНИЕ НАЛОГА, ЧТОБЫ В КОНЦЕ НАХОДИТЬ СУММУ


    // INCREASE PER MATERIAL TYPE IN PERCENTAGE : УВЕЛИЧЕНИЕ ЗА ТИП МАТЕРИАЛА В ПРОЦЕНТАХ
    cout << "SELECT A NUMBER DEPENDING ON THE TYPE OF MATERIAL:" << endl << "1) QUALITY MATERIAL" << endl \
    << "2) SAMAN" << endl <<"3) OTHER MATERIAL" << endl << "ENTER A NUMBER: \t";

    while (z1!=1 && z1!=2 && z1!=3){
        cin >> z1;
        if (z1!=1 && z1!=2 && z1!=3){
            cout<<"ERROR. ENTER AGAIN:\t";
        }
    }
    
    if (z1==1){    // MARK UP IN PERCENTAGE FOR MATERIAL
        z1=15;
    }else if(z1==2){
        z1=10;
    }else{
        z1=5;
    } 


    //INCREASE FOR THE AVAILABILITY OF BASIC SERVICES (IN THOUSANDS OF RUBLES) : ПОВЫШЕНИЕ ЗА ДОСТУПНОСТЬ БАЗОВЫХ УСЛУГ (В Т.P)
    cout << "CHOOSE A NUMBER DEPENDING ON THE CONDITIONS:" << endl \
    << "1) AVAILABILITY OF WATER AND SEWERAGE" << endl << "2) LACK OF WATER AND SEWERAGE" << endl << "ENTER A NUMBER: \t";
   
    while (z2!=1 && z2!=2){
        cin>>z2;
        if (z2!=1 && z2!=2){
            cout<<"ERROR. ENTER AGAIN: \t";
        }
    }
    if (z2==1){
        z2=2.5;
    } else{
        z2=0;
    }


    // INCREASE IN PERCENTAGE PER BUILDING STORIES : УВЕЛИЧЕНИЕ В ПРОЦЕНТАХ ЗА ЭТАЖНОСТЬ ЗДАНИЯ 
    cout << "CHOOSE A NUMBER DEPENDING ON THE HIGH STORIES OF THE BUILDING:" << endl << "1) 2 FLOORS" << endl <<\
     "2) 3 OR 4 FLOORS" << endl << "3) MORE THAN FOUR FLOORS" << endl << "ENTER A NUMBER: \t";
    
    while (z3!=1 && z3!=2 && z3!=3){
        cin>>z3;
        if (z3!=1 && z3!=2 && z3!=3){
            cout<<"ERROR. ENTER AGAIN: \t";
        }
    }
    if (z3==1){
        z3=10;
    }else if(z3==2){
        z3=15;
    }else{
        z3=20;
    }

    cout<<""<<endl;
    res =    nalog*   (((float(z1)+z3)/100)+1)   +     z2;
    cout << res << endl;



}