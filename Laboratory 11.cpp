/*
* Program: Laboratory 11.cpp 
* Author: Aanika Mishra
* Date: 11-21-2024
* Description: This array allows the user to input a 
* row number and seat number to reserve a seat on the CRJ 200
*/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int ROWS = 13;


int findRowIndex(int thisRow);
int findSeatIndex(char thisSeat);
void displaySeatColumn(char seats[][ROWS], int column);


int main()
{
    char seats[8][ROWS] = 
    {
    {'D','D','D','D','D','D','D','D','D','D','D','D',' '},
    {'C','C','C','C','C','C','C','C','C','C','C','C',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ','1','1','1','1'},
    {'1','2','3','4','5','6','7','8','9','0','1','2','3'},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {'B','B','B','B','B','B','B','B','B','B','B','B','B'},
    {'A','A','A','A','A','A','A','A','A','A','A','A','A'}
    };
    int row;
    char seat;
    bool done = false;

    

    //Loop for Q
    while (!done)
    {
        for (int i = 0; i < 8; i++)
        {
            displaySeatColumn(seats, i);
        }

        cout << "\nEnter a seat or Q to quit: ";
        cin >> row >> seat;

        if (cin.fail())
        {
            done = true;
            break;
        }      

        if (row < 1 || row > 13)
        {
            cout << "Sorry, this seat does not exist on the CRJ 200." << endl;
        }
        else if (findSeatIndex(seat) == -1)
        {
            cout << "Sorry, this seat does not exist on the CRJ 200." << endl;
        }
        else if (row == 13 && (findSeatIndex(seat) == 0 || findSeatIndex(seat) == 1))
        {
            cout << "Sorry, this seat does not exist on the CRJ 200." << endl;
        }
        else
        {
            seats[findSeatIndex(seat)][findRowIndex(row)] = 'X';
        }
        cout << "\n";
    }
    



}

// findRowIndex: given user input, returns appropriate row index into arrays.
// @param thisRow - integer indicating row selected by the user
// @return appropriate index into 2-D array if the specified row is valid, ERROR otherwise
int findRowIndex(int thisRow)
{
    return thisRow - 1;
}
// findSeatIndex: given user input, returns appropriate column index into seating chart array.
// @param thisSeat - character indicating selected seat within row
// @return appropriate index into 2-D array if the specified seat is valid, ERROR otherwise
int findSeatIndex(char thisSeat)
{
    switch (thisSeat)
    {
    case 'D': return 0;
    case 'C': return 1;
    case 'B': return 6;
    case 'A': return 7;
    }
    return -1;
}

// displaySeatColumn: given a 2-D mapping of the seating chart in the form [columns][rows],
// will print out a "column" of seats on one row of output (i.e., seat 'A' for all rows in the plane)
// @param seats - reference to a 2-D character array
// @param column - reference to which column of seats to display
void displaySeatColumn(char seats[][ROWS], int column)
{
        for (int i = 0; i < ROWS; i++) 
        {
		    cout << seats[column][i] << " ";
	    }
	    cout << "\n";

}
