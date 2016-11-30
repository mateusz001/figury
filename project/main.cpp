#include <iostream>
#include <windows.h>
using namespace std;

int figura;
int bok_a, bok_b, bok_c, pole, obwod; // ustawiam parametr startowy 0 czesto stosuje się domyslnie
string poleczyobwod;
string nazwaFigury;

float podstawa, h;

int main() {

    cout << "wybierz figure:" << endl;

    Sleep(500);
    cout << "1. kwadrat" << "\a" << endl;
    Sleep(500);
    cout << "2. prostokat" << "\a" << endl;
    Sleep(500);
    cout << "3. trojkat" << "\a" << endl;
    cout << endl;

    cin >> figura;
    cout << " " << endl;

    if (figura == 1) {
        cout << "Wybrales kwadrat" << endl;
        nazwaFigury = "Kwadrat";
         cout << "Co mam wyliczyc dla: " << nazwaFigury <<"? Pole czy obwod?"<< endl;
    cin>>poleczyobwod;
if(poleczyobwod=="pole")
   { cout<<"podaj bok a"<<endl;
    cin>> bok_a;
    cout<<"podaj bok b"<<endl;
    cin>>bok_b;
cout<<"pole wynosi "<<(bok_a*bok_b);}
else if(poleczyobwod=="obwod")
{
    cout<<"podaj bok a"<<endl;
    cin>> bok_a;
    cout<<"podaj bok b"<<endl;
    cin>>bok_b;
cout<<"obwod wynosi "<<((bok_a+bok_b)*2);
}
    }




    else if (figura == 2) {
        cout << "Wybrales prostokat" << endl;
        nazwaFigury = "prostokat";

       cout << "Co mam wyliczyc dla: " << nazwaFigury <<"? Pole czy obwod?"<< endl;
    cin>>poleczyobwod;
if(poleczyobwod=="pole")
   { cout<<"podaj bok a"<<endl;
    cin>> bok_a;
    cout<<"podaj bok b"<<endl;
    cin>>bok_b;
cout<<"pole wynosi "<<(bok_a*bok_b);}
else if(poleczyobwod=="obwod")
{
    cout<<"podaj bok a"<<endl;
    cin>> bok_a;
    cout<<"podaj bok b"<<endl;
    cin>>bok_b;
cout<<"Obwod wynosi "<<((bok_a+bok_b)*2);
}



    } else if (figura == 3) {
        cout << "Wybrales trojkat" << endl;
        nazwaFigury = "trojkat";
        cout << "Co mam wyliczyc dla: " << nazwaFigury <<"? Pole czy obwod?"<< endl;
    cin>>poleczyobwod;
if(poleczyobwod=="pole")
   { cout<<"podaj wysokosc trojka"<<endl;
    cin>> h;
    cout<<"podaj bok a (podstawa)"<<endl;
    cin>>podstawa;
cout<<"pole wynosi "<<((podstawa/2)*h);}
else if(poleczyobwod=="obwod")
{
    cout<<"podaj bok a"<<endl;
    cin>> bok_a;
    cout<<"podaj bok b"<<endl;
    cin>>bok_b;
    cout<<"podaj bok b"<<endl;
    cin>>bok_c;
cout<<"obwod wynosi "<<(bok_a+bok_b+bok_c);
}




    } else {
        cout << "niepoprawna figura! sprubuj jeszcze raz wybierajac opcje 1,2 lub 3" << endl;
    }


    //krotka lekcja

    //    while (warunek){
    //        co mam zrobic jezeli warunek jest prawda
    //    };


    return 0;
}
