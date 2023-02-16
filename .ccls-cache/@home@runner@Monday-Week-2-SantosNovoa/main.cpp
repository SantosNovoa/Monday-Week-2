// Monday-Week-2
/************************************
Student first name: Santos
Student last name: Novoa
*************************************/

#include <iostream>
using namespace std;

/************************************
Be sure to connect this replit project
with GitHub !
*************************************/

/************************************
declare a constant integer named:
NBR_SCORES with a value of 3
*************************************/
const int NBR_SCORES = 3;
/************************************
IMPORTANT!
Use the above constant in your code
do not use a literal number 3
anywhere in your code!!!!!
*************************************/
class Student {
  private:
    string firstName;
    string lastName;
    int arrayScores[NBR_SCORES];
  public:
    void setName (string, string);
    void setScores ();
    void showScores () const;
};
/************************************
define a class named Student
The class will have 3 private members:
1) a string for first name
2) a string for last name
3) an integer array of size NBR_SCORES
the class will have 3 public members:
NOTE: only prototype the functions in the class

1) a void function named setName with 2 string parameters
to set the student first name and last name
2) a void function named setScores with no parameters
setScores will prompt the user for scores to pupulate
the private member array: scores 
see sample output
3) a void function named showScores with no parameters
showScores will display the values in
the private member array: scores
and will also display the average scores.
see sample output
Note: showScores is a const function
*************************************/

/************************************
In the main function:
1) declare a Student object named student
2) declare 2 srtrings for first name and last name
3) prompt the user for the student's
first name and last name
4) use setName to set the student object's
first name and last name
5) use setScores to set the student' scores
6) use showScores to show the student's scores
*************************************/
int main() {
  Student student;
  string fName, lName;
  
  cout << "Enter student's first-name and last-name: ";
  getline(cin, fName, ' ');
  getline(cin, lName);

  
  student.setName(fName, lName);
  student.setScores();
  student.showScores();
  cout << "Goodbye";
  return 0;
}
void Student::setName(string fName, string lName) {
  firstName = fName;
  lastName = lName;
}
void Student::setScores() {
  for (int i = 0; i < NBR_SCORES; i++) {
    cout << "Enter score " << i + 1 << " for " << firstName << " " << lastName << endl;
    cin >> arrayScores[i];
  }
}
void Student::showScores() const {
  int total = 0;
  int average;
  cout << "Scores for " << firstName << " " << lastName << " are" << endl; 
  for (int i = 0; i < NBR_SCORES; i++) {
    cout << arrayScores[i] << " ";
    total += arrayScores[i];
  }
  average = total / NBR_SCORES;
  cout << endl << "The average is: " << average << endl;
}

/************************************
Define your member funcrtions 
below the main function
*************************************/


/********************************************
// YOUR OUTPUT
// copy-and-paste your output here
Enter student's first-name and last-name: Santos Novoa
Enter score 1 for Santos Novoa
100
Enter score 2 for Santos Novoa
98
Enter score 3 for Santos Novoa
94
Scores for Santos Novoa are
100 98 94 
The average is: 97
Goodbye
// SAMPLE OUTPUT
Enter student's first-name and last-name: Brad Gilbert
Enter score 1 for Brad Gilbert
100
Enter score 2 for Brad Gilbert
98
Enter score 3 for Brad Gilbert
94
Scores for Brad Gilbert are 
100 98 94 
The average is: 97
Goodbye
**********************************************/
