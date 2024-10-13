#include "SchoolDatabase.h"
#include <iostream>
#include <stdexcept>

using namespace std;

namespace SchoolSystem {

    SchoolDatabase::SchoolDatabase() : mNextSlot(0) {}
    SchoolDatabase::~SchoolDatabase() {}

    SchoolClass& SchoolDatabase::addClass(int classCode, int teacherCode, int typeCode, int studentCount, char letter, int year, int creationYear) {
        if (mNextSlot >= kMaxClasses) {
            cerr << "Database is full!" << endl;
            throw runtime_error("Class limit exceeded.");
        }

        SchoolClass& newClass = mClasses[mNextSlot++];
        newClass.setClassCode(classCode);
        newClass.setTeacherCode(teacherCode);
        newClass.setTypeCode(typeCode);
        newClass.setStudentCount(studentCount);
        newClass.setLetter(letter);
        newClass.setYear(year);
        newClass.setCreationYear(creationYear);

        return newClass;
    }

    SchoolClass& SchoolDatabase::getClass(int classCode) {
        for (int i = 0; i < mNextSlot; ++i) {
            if (mClasses[i].getClassCode() == classCode) {
                return mClasses[i];
            }
        }
        cerr << "Class with code " << classCode << " not found!" << endl;
        throw runtime_error("Class not found.");
    }

    void SchoolDatabase::displayAllClasses() const {
        for (int i = 0; i < mNextSlot; ++i) {
            mClasses[i].display();
        }
    }

}
