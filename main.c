#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "list.h"

int main() {
    setlocale(LC_ALL, "RUS");

    List* StudentList = InitList();
    StudentList->append(StudentList, InitStudent(23, "Ksenia", "Tfgd", "W", "ghgjf4", 4, 5, 5));
    StudentList->append(StudentList, InitStudent(14, "Vaho", "Tfgd", "W", "ghgjf4", 4, 4, 3));
    StudentList->append(StudentList, InitStudent(17, "Timur", "Tfgd", "W", "ghgjf4", 4, 3, 3));
    StudentList->append(StudentList, InitStudent(13, "Tim", "Ted", "M", "ISP-test", 5, 5, 5));

    StudentList->save(StudentList, "students.txt");

    List* LoadedStudentList = InitList();
    LoadedStudentList->load(LoadedStudentList, "students.txt");

    LoadedStudentList->print(LoadedStudentList);

    LoadedStudentList->free(LoadedStudentList);

    StudentList->saveBinary(StudentList, "students.bin");

    StudentList->free(StudentList);

    List* LoadedStudentListBinary = InitList();
    LoadedStudentListBinary->loadBinary(LoadedStudentListBinary, "students.bin");

    LoadedStudentListBinary->print(LoadedStudentListBinary);

    LoadedStudentListBinary->free(LoadedStudentListBinary);

    return 0;
}
