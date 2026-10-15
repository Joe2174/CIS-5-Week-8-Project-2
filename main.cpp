#include <iostream>
#include <cstdlib>
#include <ctime>

const int scoreAt0 = 99; // change this number

// Project 2 — Joe Barron
// CIS 5 Week 08
// Do not edit the boilerplate. It randomly generates 30 elements into the array.
// One main only. No vector. No extra functions. No files.

int main() {
  const int N = 30;
  int scores[N];
  const int scoreAt10 = 85; // change this number

  // Do not edit this boilerplate. It randomly generates 30 elements into the array.
  srand(static_cast<unsigned>(time(nullptr)));

  const int scoreAt20 = 79; // change this number

  for (int i = 0; i < N; ++i) {
    scores[i] = rand() % 100;
  }

  scores[0] = scoreAt0;
  const int scoreAt27 = 89; // change this number
  scores[10] = scoreAt10;
  scores[20] = scoreAt20;
  scores[27] = scoreAt27;

    using std::cout;
    using std::endl;
  // TODO: print each index and scores[i]
  for (int i = 0; i < N; ++i) // Loop through the array
  {
	  cout << "[" << i << "] = " << scores[i] << endl;
  }

  int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0; // Initialize counters for each grade category
  for (int i = 0; i < N; ++i)
  {
	  if (scores[i] >= 90)
	  {
		  countA++;
	  }
	  else if (scores[i] >= 80)
	  {
		  countB++;
	  }
	  else if (scores[i] >= 70)
	  {
		  countC++;
	  }
	  else if (scores[i] >= 60)
	  {
		  countD++;
	  }
	  else
	  {
		  countF++;
	  }
  }
  cout << "==== Grade Distribution ====" << endl;
  cout << "A: " << countA << endl;
  cout << "B: " << countB << endl;
  cout << "C: " << countC << endl;
  cout << "D: " << countD << endl;
  cout << "F: " << countF << endl;
  cout << "============================" << endl;
  while (true) // True loop to find students who need to come to office hours.
  {
	  for (int i = 0; i < N; ++i) // Loop through the array to find students who need to come to office hours.
	  {
		  if (scores[i] < 60)
		  {
			  cout << "Student ID " << i << " needs to come to office hours." << endl;
		  }
	  }
	  break; // Break the loop after checking all students.
  }
 
 

  return 0;
}
