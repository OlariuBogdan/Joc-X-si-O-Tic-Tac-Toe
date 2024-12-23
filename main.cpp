#include <iostream>
#include <string>

using namespace std;

int main()
{
    char fundal [3][3]{
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};
const char jucatorX = 'X';
const char jucatorO = 'O';
char jucatorCurent = jucatorX;
int r = -1;
int c = -1;
char castigator = ' ';


  for (int i = 0; i < 9; i++) {
        //printeza fundalul
        cout << "   |   |   " << endl;
        cout << " " << fundal[0][0] << " | " << fundal[0][1] << " | " << fundal[0][2] << endl;
        cout << "___|___|___" << endl;
        cout << "   |   |   " << endl;
        cout << " " << fundal[1][0] << " | " << fundal[1][1] << " | " << fundal[1][2] << endl;
        cout << "___|___|___" << endl;
        cout << "   |   |   " << endl;
        cout << " " << fundal[2][0] << " | " << fundal[2][1] << " | " << fundal[2][2] << endl;
        cout << "   |   |   " << endl;

        if (castigator != ' '){
            break;
        }
        cout<< "Jucatorul curent este: "<<jucatorCurent<<endl;
        while(1){
cout<<"Introdu randul de la 0->2: "<<endl;
cin>>r;
cout<<"Introdu coloana de la 0->2: "<<endl;
cin>>c;
     if (r < 0 || r > 2 || c < 0 || c > 2) {
                cout << "Ai introdus ceva gresit. Incerca din nou." << endl;
            }
            else if (fundal[r][c] != ' ') {
                cout << "Locul este ocupat!." << endl;
            }
            else {
                break;
            }

r = -1;
c = -1;
cin.clear();
cin.ignore(10000, '\n');
}


fundal[r][c] = jucatorCurent;
jucatorCurent = (jucatorCurent==jucatorX)? jucatorO:jucatorX;
// verificare castigator
//verificare randuri orizontal
for (int r = 0; r < 3; r++) {
            if (fundal[r][0] != ' ' && fundal[r][0] == fundal[r][1] && fundal[r][1] == fundal[r][2]) {
                castigator = fundal[r][0];
                break;
            }
}
//verificare coloane
for (int c = 0; c < 3; c++) {
            if (fundal[0][c] != ' ' && fundal[0][c] == fundal[1][c] && fundal[1][c] == fundal[2][c]) {
                castigator = fundal[0][c];
                break;
            }
}
//verificare diagonala
if (fundal[0][0] != ' ' && fundal[0][0] == fundal[1][1] && fundal[1][1] == fundal[2][2]) {
            castigator = fundal[0][0];
        }
        else if (fundal[0][2] != ' ' && fundal[0][2] == fundal[1][1] && fundal[1][1] == fundal[2][0]) {
            castigator = fundal[0][2];
        }



};
if (castigator != ' '){
    cout<<"Jucatorul "<<castigator<<" este invingator!"<<endl;
}
else
{
    cout<< " Egalitate!!! "<<endl;
}

}
