#include <iostream>

using namespace std;

int main() {

    //na poczatek petla while, argument (true) oznacza,
    //że petla bedzie sie wykonywac nieskonczona ilosc razy,
    //chyba, że? czytaj niżej.
    
    //POCZATEK PETLI WHILE
    while(true) {
        cout << "Wybierz figure" << endl;
        cout << "1. Kwadrat" << endl;
        cout << "2. Prostokat" << endl;
        cout << "3. Trojkat" << endl;
        cout << "4. Koniec" << endl;

        int wyborFigury;
        cin >> wyborFigury;


        //jezeli ktos wybirze 4 (czyli koniec) to nastąpi przerwanie/zakonczenie petli
        //jeżeli ktos wybierze 1,2,3 to wykona się to co jest pod poniższy IF-em
        
        if(wyborFigury == 4){
            
            //wyrazenie BREAK znaczy przełam/przerwij, break dziala tylko w petlach (for,while,do..while)
            
            break;
        }

        cout << "Co chcesz obliczyć" << endl;
        cout << "1. Pole" << endl;
        cout << "2. Obwod" << endl;

        int poleCzyObwod;
        cin >> poleCzyObwod;

        int a, b, c, h;
        
        //ustawiay "wynik" na 0. To dobra pratyka, ale trzeba uważać gdzie się to stosuje. 
        //zmienna "wynik" będzie rózna i użyta w wielu miejscach dlatego to robimy. (dla bezpieczeństwa)
        //opowiem o tym więcej jak się zgadamy
        
        double wynik = 0;   
        
        //opis koncowy sluzy do tego aby za kazdym razem nie pisac
        //że pole trojkata = x, pole kwadratu =x etc.
        //po prostu konstruujesz STRINGA
        
        string opisKoncowy;

        if (wyborFigury == 1 && poleCzyObwod == 1) {
            //tutaj licze POLE dla kwadratu

            cout << "Podaj A" << endl;
            cin >> a;
            
            // znak ^ oznacza potęgowanie,
            
            wynik = a ^ 2;
            opisKoncowy = "POLE kwadratu";

        } else if (wyborFigury == 1 && poleCzyObwod == 2) {
            //tutaj licze OBWOD dla kwadratu

            cout << "Podaj A" << endl;
            cin >> a;
            wynik = 4 * a;
            opisKoncowy = "OBWOD kwadratu";

        } else if (wyborFigury == 2 && poleCzyObwod == 1) {
            //tutaj licze POLE dla prostokąta

            cout << "Podaj A i B" << endl;
            cin >> a;
            cin >> b;
            wynik = a * b;
            opisKoncowy = "POLE prostokata";

        } else if (wyborFigury == 2 && poleCzyObwod == 2) {
            //tutaj licze OBWOD dla prostokąta

            cout << "Podaj A i B" << endl;
            cin >> a;
            cin >> b;
            wynik = 2 * (a + b);
            opisKoncowy = "OBWOD prostokata";

        } else if (wyborFigury == 3 && poleCzyObwod == 1) {
            //tutaj licze POLE dla trojkata

            cout << "Podaj A i H" << endl;
            cin >> a;
            cin >> h;
            wynik = 0.5 * a * h;
            opisKoncowy = "POLE trojkata";

        } else if (wyborFigury == 3 && poleCzyObwod == 2) {
            //tutaj licze OBWOD dla trojkata

            cout << "Podaj A, B oraz C" << endl;
            cin >> a;
            cin >> b;
            cin >> c;
            wynik = a + b + c;
            opisKoncowy = "OBWOD trojkata";
        } else {
            cout << "Dokonano niewalsciwego wyboru sproboj jeszcze raz" << endl;
        }

        cout << opisKoncowy << ": " << wynik << endl;
    }
    //KONIEC PETLI WHILE
    return 0;
}
