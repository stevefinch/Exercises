// Exercise01Console
// Steve Finch
// CS162
// April 4, 2017

// Program demonstrating console I/O.  The user is prompted for their 
// favorite beer and a phrase is printed the number of times that was 
// entered on the command line.

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char *argv[])
{
  string beername;

  cout << "What is your favorite beer?   ";
  cin >> beername;

  for (int i=0; i<stoi(argv[1]); ++i) {
    cout << "99 bottles of " << beername << " on the wall\n";
  }

  cout << "\nBye for now!\n";
}