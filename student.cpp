#include <iostream>
#include <string>
using namespace std;

class student
{
    private:
      string Name;
      string Id;
      int Age;

    public:
      // constructor
      student(string n, string id, int a)
      {
        Name = n;
        Id = id;
        Age = a;
      }
      string get_Name()
      {
        return Name;
      }
      string get_Id()
      {
        return  Id;
      }
      int get_Age()
      {
        return Age;
      }
};

int main() {
  student student1("Juan Perez", "123456", 22);

  cout << "The student name is: " << student1.get_Name() << endl;
  cout << "The student id is: " << student1.get_Id() << endl;
  cout <<"The student age is: " << student1.get_Age() << endl;

  return 0;
}
