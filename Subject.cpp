//
// Created by Piotr on 2015-11-28.
//

#include "Subject.h"
#include "Utils.h"


void Subject::setMarks(list<int> newMarks){
    marks = newMarks;
};

void Subject::setName(string newName) {
    name = newName;
}

void Subject::printSubject() {
    cout << "Nazwa przedmiotu " << name << endl;
    cout << "Oceny ";
    for (list<int>::iterator i = marks.begin(); i != marks.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;;

}

void Subject::setMarks() {
    int mark; // deklaracja oceny

    cout << "Podaj oceny: dla przedmiotu "<< name << ":";
    for (int i = 0; i < 3; ++i) {
        mark = cinInt();
        marks.push_back(mark);// dodawnie elementow listy
    }

}