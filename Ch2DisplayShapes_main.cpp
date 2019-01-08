//main.cpp

/*

Chapter 2 Exercise
2.21 Displaying Shapes with Asterisks

Write a program that prints a box, an oval, an arrow, and a diamond as follows.
(Examples in book, page 66.)

*/

//#includes
#include <iostream>

//STDLIB functions
using std::cout;
using std::cin;
using std::endl;

int main()
{
	//Var to keep the output window open on Windows until the user enters a character
	char ExitChar;
	
	cout << "*********\n*       *\n*       *\n*       *\n*       *\n*       *\n*       *\n*       *\n*********\n\n" << endl;
	cout << "   ***   \n *     *\n*       *\n*       *\n*       *\n*       *\n*       *\n *     *\n   ***   \n\n" << endl;
	cout << "  *  \n *** \n*****\n  *  \n  *  \n  *  \n  *  \n  *  \n  *  \n\n" << endl;
	cout << "    *    \n   * *   \n  *   *  \n *     * \n*       *\n *     * \n  *   *  \n   * *   \n    *    \n\n" << endl;
	
	//Wait for the user to enter a character to close the output window
	cout << "\n\nPress any key then [ENTER] to exit: ";
	cin >> ExitChar;

	return 0;
}