#pragma once
#include <chrono>
using namespace std::chrono;

// Classe timer, permette di misurare il tempo di esecuzione di una porzione di programma
class timer {
public:
	// Costruttore. Non accetta parametri, inizializza una variabile start che salva l'istante in cui è stata inizializzata
	timer(); //: start(high_resolution_clock::now()) {}
	
	// Stampa la differenza in secondi tra l'istante in cui viene chiamata e l'istante in cui è stata inizializzata start. Passando true si resetta start
	void print_time(bool reset = false);

	// Resetta la variabile start
	void reset();

private:
	high_resolution_clock::time_point start;
};

// Funzione per testare il comando system() che scrive in bash su terminale
void bash_test();

// Funzione per chiedere interazione all'utente
void ask_for_input();