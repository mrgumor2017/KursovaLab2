#include <iostream>
#include "SchoolDatabase.h"

using namespace std;
using namespace SchoolSystem;

int displayMenu();
void doAddClass(SchoolDatabase& db);

int main() {
    SchoolDatabase schoolDB;
    bool done = false;

    while (!done) {
        int selection = displayMenu();
        switch (selection) {
        case 1:
            doAddClass(schoolDB);
            break;
        case 2:
            schoolDB.displayAllClasses();
            break;
        case 0:
            done = true;
            break;
        default:
            cerr << "Unknown command." << endl;
        }
    }

    return 0;
}

int displayMenu() {
    int selection;
    cout << "School System" << endl;
    cout << "1) Add new class" << endl;
    cout << "2) Display all classes" << endl;
    cout << "0) Exit" << endl;
    cout << "---> ";
    cin >> selection;
    return selection;
}

void doAddClass(SchoolDatabase& db) {
    int classCode, teacherCode, typeCode, studentCount, year, creationYear;
    char letter;

    cout << "Class code: ";
    cin >> classCode;
    cout << "Teacher code: ";
    cin >> teacherCode;
    cout << "Type code: ";
    cin >> typeCode;
    cout << "Number of students: ";
    cin >> studentCount;
    cout << "Class letter: ";
    cin >> letter;
    cout << "Year: ";
    cin >> year;
    cout << "Creation year: ";
    cin >> creationYear;

    db.addClass(classCode, teacherCode, typeCode, studentCount, letter, year, creationYear);
}
