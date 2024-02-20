#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	int size; //number of rows and columns in the table
	cout << "Please enter the size of the table: ";
	cin >> size;

	//PRINT THE TABLE
	
	//Print the heading : 1 2 3 4 5 etc.
	
	int column = 1;
	cout << "    ";
	while(column <= size) {
		cout << setw(4) << column; //Prints heading for the first column
		column++;
	}
	cout << endl;

	//Print the separatot: +---------------------
	

	cout << " +";
	column = 1;
	while(column <= size) {
		cout << "------"; //Prints the line for this column
		column++;	
	}
	cout << endl;

	//Print table contents
	
	int row = 1;
	while(row <= size) {		//Table has size rows
		cout << setw(2) << row << " |";	//Print heading for this row
		int column = 1;		//Reset column for each row
		while(column <= size) {	//Table has size columns
			int product = row*column; //Compute product
			cout << setw(4) << product; //Display product
			column++;
		}
		row++;
		cout << endl;
		
	
		
	}

	
	






}
