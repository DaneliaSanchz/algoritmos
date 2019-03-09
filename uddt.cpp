#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class client
{
    private:
      string Name;
      string Id;
      double Credit;
      string Address;

    public:
      client() {
        Name = "";
        Id = "";
        Credit = 0.0;
        Address = "";
      }

      void set_Name(string name)
      {
        Name = name;
      }
      void set_Id(string id)
      {
        Id = id;
      }
      void set_Credit(double credit)
      {
        Credit = credit;
      }
      void set_Address(string address)
      {
        Address = address;
      }
      string get_Name()
      {
        return Name;
      }
      string get_Id()
      {
        return Id;
      }
      double get_Credit()
      {
        return Credit;
      }
      string get_Address()
      {
        return Address;
      }
};

int main() {
  client client1;
  client1.set_Name("Camilo Valencia");
  client1.set_Id("0000000001");
  client1.set_Credit(1000000);
  client1.set_Address("Calle 1, Carrera 1 ciudad bolivar");

  cout << "The client name is: " << client1.get_Name() << endl;
  cout << "The client Id is:" << client1.get_Id() << endl;
  cout <<"The client Credit is: " << fixed << setprecision(0) << client1.get_Credit() << endl;
  cout << "The client Address is: " << client1.get_Address() << endl;

  return 0;
}
