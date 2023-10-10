#include <iostream>
#include <cstdlib> // Include la libreria per la funzione system()
#include <chrono>
#include <ctime>
#include "lib.hpp"

using namespace std;
using namespace std::chrono;

// class timer
timer::timer() : start(high_resolution_clock::now()) {} 	// classe::costruttore(parametri):variabili_inizializzate(valore_di_inizializzazione) {corpo_della_funzione_di_inizializzazione;}

void timer::print_time(bool reset)
{
	auto fine = high_resolution_clock::now();
    auto tempo_trascorso = duration_cast<seconds>(fine - start).count();
	cout << "\n\t" << tempo_trascorso << "\n\n";
	if(reset) start = high_resolution_clock::now();
}

void timer::reset() {start = high_resolution_clock::now();}


void bash_test()
{
	//cout << "Hello, World!" << endl;
    // Esegui un comando Bash utilizzando la funzione system()
    cout << "\n\t";
    int exitCode = system("touch test.txt && echo 'test.txt creato con successo' && ls -l");
    cout << endl;
    // Verifica il codice di uscita dell'esecuzione del comando
    if (exitCode == 0) {
        cout << "\tComando eseguito con successo." << endl;
    } else {
        cerr << "\tErrore nell'esecuzione del comando." << endl;
    }
    cout << endl;
}

void ask_for_input()
{
	int a;
	cout << "\n\tQuanti elementi ci sono nella cartella?  ";
	cin >> a;
	cout << "\n\n";
}