#include <iostream>
using namespace std;

int main () {

    //Declaration of variables
    int n;  //numero de xifres que diu cada jugador
	cin >> n;
	n = n * 2;
	int anna, bernat;
    //Creem dos bools. Un que sigui per anna i altre per bernat.
    bool found_bernat = false, found_anna = false;
	cin >> anna;
    //Creem el aux una variable auxiliar per guardar coses. la i conta les posicions
	int aux = anna, elem = 0, i = 1;
    //Inicialitzacio del bucle. Es repetira mentre el num de anna no sigui 0 i elements anira sumant
    while (aux != 0) {
        aux/= 10;
        ++elem;
    }
    //Bucle per trobar el nums de anna
    for (int j = 1; j <= elem/2; ++j) anna /= 10;
    //Dividim entre 10 per trobar el numero del mig
    if (elem > 0)anna %= 10;
    //Si el num de anna es parell, el bool sera cert i sortirem del bucle ja q bernat es el guanyador
    if (elem%2 == 0 and elem != 0) found_anna = true;
    //Anem restant de n, el nombre de nums que diu cada jugador
    --n;
    //Nou bucle
    while (n != 0 and not found_bernat and not found_anna) {
        //Creem nous auxiliars
        int auxi, element = 0;
        //Si la i es senar, entrara el num de bernat i auxiliar valdra el num de bernat
		if (i%2 != 0) {
            cin >> bernat;
            auxi = bernat;
            //Inicialitzacio del bucle.
            //Es repetira mentre el num de bernat no sigui 0 i elements anira sumant fins arribar a n*2
            while (auxi != 0) {
                auxi/=10;
                ++element;
            }
            for (int j = 1; j <= element/2; ++j) bernat /= 10;
            //Dividim entre 10 per trobar el numero del mig
            if (element > 0) bernat = bernat%10;
            //Si el num de bernat es parell o diferent al de anna
            //el bool sera cert i sortirem del bucle ja q anna es la guanyador
            if (bernat != anna or (element%2 == 0 and element != 0)) found_bernat = true;
            ++i;
		}
        else {
            //En cas de ser parell, entrara el num de anna
            cin >> anna;
            auxi = anna;
            //Inicialitzacio del bucle.
            //Es repetira mentre el num de anna no sigui 0 i elements anira sumant fins arribar a n*2
            while (auxi != 0) {
                auxi/=10;
                ++element;
            }
            for (int j = 1; j <= element/2; ++j) anna /= 10;
            //Dividim entre 10 per trobar el numero del mig
            if (element > 0)anna %= 10;
            //Si el num de anna es parell o diferent al de bernat
            //el bool sera cert i sortirem del bucle ja q bernat es la guanyador
            if (anna != bernat or (element%2 == 0 and element != 0)) found_anna = true;
            ++i;
        }
        //Anem restant de n, el nombre de nums que diu cada jugador
        --n;
	}
    //Condicions del retorn de variable segons els bools.
    //Si el de bernat es cert, significa que perd i el guanyador es anna
    if (found_bernat) cout << 'A' << endl;
    //i aqui es al reves
    else if (found_anna) cout << 'B' << endl;
    //en cas de q cap dels dos bools sigui true, es un empat
    else cout << '=' << endl;
}
