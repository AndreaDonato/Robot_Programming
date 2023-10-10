#include <iostream>
#include <cstdlib> // Include la libreria per la funzione system()
#include "lib.hpp"
#include "other_lib.hpp"

using namespace std;

int main() {

    timer t, t1;
    bash_test();
    ask_for_input();
    t.print_time(true);
    t.reset();
    bash_delete();
    ask_for_input();
    t.print_time();
    t1.print_time();
    cout << "\n\tFine!\n\n";
    return 0;
}