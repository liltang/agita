//=================================================================
//	STUDENT.H
//	ERIKA WINTERS  COP 3331
//=================================================================
#include <string>

class Student : public Person
{
  private:
    string studentType;
  public:
    Student(string name, string bDay, int uid, char gender, string studentType); //constructor
    void print(Student student); //print student
}
