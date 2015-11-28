#include <iostream>

#include "Subject.h"
#include <map>

Subject createSubject(string name);// definicja funkcji

using namespace std;

int main() {

    Subject matematyka = createSubject("matematyka");
    Subject polski = createSubject("polski");
    Subject fizyka = createSubject("fizyka");

    matematyka.printSubject();
    polski.printSubject();
    fizyka.printSubject();

}

Subject createSubject(string name) { // funkcja
    Subject result;  // stworzenie zmienne result typu subject (klasa)
    result.setName(name);// wywolanie na zmiennej funkcji set name.
    result.setMarks(); // wywolanie funkcji setMarks w kt�rej zadeklaruje oceny(marks) - w klasie subject
    return result; //zwrocenie zmiennej z funkcji createSubject
}