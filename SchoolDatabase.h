#ifndef SCHOOLDATABASE_H
#define SCHOOLDATABASE_H

#include "SchoolClass.h"

namespace SchoolSystem {

    const int kMaxClasses = 100;

    class SchoolDatabase {
    public:
        SchoolDatabase();
        ~SchoolDatabase();

        SchoolClass& addClass(int classCode, int teacherCode, int typeCode, int studentCount, char letter, int year, int creationYear);
        SchoolClass& getClass(int classCode);

        void displayAllClasses() const;

    private:
        SchoolClass mClasses[kMaxClasses];
        int mNextSlot;
    };

}

#endif
