#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H

#include <string>
#include <iostream>

namespace SchoolSystem {

    class SchoolClass {
    public:
        SchoolClass();

        // Методи для зміни та отримання інформації
        void setClassCode(int classCode);
        int getClassCode() const;

        void setTeacherCode(int teacherCode);
        int getTeacherCode() const;

        void setTypeCode(int typeCode);
        int getTypeCode() const;

        void setStudentCount(int studentCount);
        int getStudentCount() const;

        void setLetter(char letter);
        char getLetter() const;

        void setYear(int year);
        int getYear() const;

        void setCreationYear(int creationYear);
        int getCreationYear() const;

        // Метод для відображення інформації про клас
        void display() const;

    private:
        int mClassCode;
        int mTeacherCode;
        int mTypeCode;
        int mStudentCount;
        char mLetter;
        int mYear;
        int mCreationYear;
    };

}

#endif
