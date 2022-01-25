#include <iostream>
#include <fstream>
#include <string>
using namespace std;
  
int main(){
  
  float gpa[5];
    //create for loop to iterate through 5 gpa's in gpa.txt
  for (int i = 0; i < 5; i++) {
    gpa[i] = 0;
    }
      //open up gpa file
    ifstream reader;
    reader.open("gpa.txt");
    for (int i = 0; i < 5; i++){
      reader >> gpa[i];
      }
    //user input for new gpa's to compare
      cout << "Enter a new GPA" << endl;
      float users_gpa;
      cin >> users_gpa;

    //conditional statements for student gpa feedback
      if ((users_gpa > gpa[0]) and (users_gpa > gpa[1]) and (users_gpa > gpa[2]) and (users_gpa > gpa[3]) and (users_gpa > gpa[4])){
        cout << "This student is doing well" << endl;
      } else if ((gpa[0] > users_gpa) and (gpa[1] > users_gpa) and (gpa[2] > users_gpa) and (gpa[3] > users_gpa) and (gpa[4] > users_gpa)){
        cout << "This student could improve" << endl;
      } else {
        cout << "This student is doing fine" << endl;
        }
}
