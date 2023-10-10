#include <iostream>
#include <cstdlib> // Include la libreria per la funzione system()
#include "other_lib.hpp"
using namespace std;

void bash_delete()
{
	cout << "\n\t";
    int exitCode = system("sudo rm test.txt && echo 'test.txt rimosso con successo' && ls -l");
    cout << endl;
    // Verifica il codice di uscita dell'esecuzione del comando
    if (exitCode == 0) {
        cout << "\tComando eseguito con successo!" << endl;
    } else {
        cerr << "\tErrore nell'esecuzione del comando." << endl;
    }
    cout << endl;
}
