#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Employee {
  public:
    string last_name;
    string first_name;
    string name();
    int id_number;
    string department;
    double hourly_rate;
    double hours_worked_per_week;
    double weekly_wage;
}

string Employee::name() {
  string name = last_name + ", " + first_name;

  return name;
}

void employees(Employee roster[]) {
  roster[0].last_name = "The Clown";
  roster[0].first_name = "Bozo";
  roster[0].id_number = 345;
  roster[0].department = "Entertainment";
  roster[0].hourly_rate = 35.55;
  roster[0].hours_worked_per_week = 25;

  roster[1].last_name = "Solo";
  roster[1].first_name = "Han";
  roster[1].id_number = 666;
  roster[1].department = "Trouble";
  roster[1].hourly_rate = 15.69;
  roster[1].hours_worked_per_week = 45;

  roster[2].last_name = "Obama";
  roster[2].first_name = "Barack";
  roster[2].id_number = 44;
  roster[2].department = "President";
  roster[2].hourly_rate = 155.25;
  roster[2].hours_worked_per_week = 5;
}

void wages(Employee roster[], int size) {
  for(i = 0; i < size; i++) {
    roster[i].weekly_wage = roster[i].hourly_rate * roster[i].hours_worked_per_week;
  }
  
}
int main () {
  const int ARRAY_SIZE = 3;
  Employee roster[ARRAY_SIZE];

  employees(roster);

  return 0;
}
