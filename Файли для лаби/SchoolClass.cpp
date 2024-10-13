#include "SchoolClass.h"

using namespace std;

namespace SchoolSystem {

    SchoolClass::SchoolClass()
        : mClassCode(0), mTeacherCode(0), mTypeCode(0), mStudentCount(0), mLetter('A'), mYear(0), mCreationYear(0) {}

    void SchoolClass::setClassCode(int classCode) { mClassCode = classCode; }
    int SchoolClass::getClassCode() const { return mClassCode; }

    void SchoolClass::setTeacherCode(int teacherCode) { mTeacherCode = teacherCode; }
    int SchoolClass::getTeacherCode() const { return mTeacherCode; }

    void SchoolClass::setTypeCode(int typeCode) { mTypeCode = typeCode; }
    int SchoolClass::getTypeCode() const { return mTypeCode; }

    void SchoolClass::setStudentCount(int studentCount) { mStudentCount = studentCount; }
    int SchoolClass::getStudentCount() const { return mStudentCount; }

    void SchoolClass::setLetter(char letter) { mLetter = letter; }
    char SchoolClass::getLetter() const { return mLetter; }

    void SchoolClass::setYear(int year) { mYear = year; }
    int SchoolClass::getYear() const { return mYear; }

    void SchoolClass::setCreationYear(int creationYear) { mCreationYear = creationYear; }
    int SchoolClass::getCreationYear() const { return mCreationYear; }

    void SchoolClass::display() const {
        cout << "Class " << mLetter << " (Class Code: " << mClassCode << ", Teacher Code: " << mTeacherCode << ")" << endl;
        cout << "Number of Students: " << mStudentCount << ", Year of Study: " << mYear << ", Year of Creation: " << mCreationYear << endl;
    }

}


