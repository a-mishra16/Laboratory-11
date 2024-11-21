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

//const int ROWS = 13;

//int getRow(char value[3]);

/*
int findRowIndex(int thisRow);
int findSeatIndex(char thisSeat);
void displaySeatColumn(char seats[][ROWS], int column);
*/

int main()
{
    char seats[13][4] = { {'A', 'B', 'C', 'D'}, {'A', 'B', 'C', 'D'}, {'A', 'B', 'C', 'D'}, {'A', 'B', 'C', 'D'},
                          {'A', 'B', 'C', 'D'}, {'A', 'B', 'C', 'D'}, {'A', 'B', 'C', 'D'}, {'A', 'B', 'C', 'D'},
                          {'A', 'B', 'C', 'D'}, {'A', 'B', 'C', 'D'}, {'A', 'B', 'C', 'D'}, {'A', 'B', 'C', 'D'}, {'A', 'B', ' ', ' '}};
    char rows[13][2] = { {' ', '1'}, {' ', '2'}, {' ', '3'}, {' ', '4'}, {' ', '5'}, {' ', '6'}, {' ', '7'}, {' ', '8'}, {' ', '9'}, {'1', '0'}, { '1', '1' }, {'1', '2'}, {'1', '3'} };
    string seat;
    bool done = false;

    //DISPLAYS THE SEATING CHART
    for (int i = 4; i > 0; i--)
    {
        for (int j = 0; j < 13; j++)
        {
            cout << seats[j][i-1] << ' ';
        }
        cout << "\n";
        if (i == 3)
        {
            cout << "\n";
            for (int i = 0; i < 13; i++)
            {
                cout << rows[i][0] << ' ';
            }
            cout << "\n";
            for (int i = 0; i < 13; i++)
            {
                cout << rows[i][1] << ' ';
            }
            cout << "\n" << endl;
        }   
    }
    cout << "\n";
    //END SEATING CHART

    //Loop for Q
    while (!done)
    {
        cout << "Enter a seat or Q to quit: ";
        getline(cin, seat);

        if (seat == "Q")
        {
            done = true;
            break;
        }        
    }
    



}
/*
int getRow(char value[3])
{
    int digit = 0;
    int num = value[0];
    switch (num)
    {
      case 49: digit = 1;
      case 50: digit = 2;
      case 51: digit = 3;
    }
    return digit;
}

// findRowIndex: given user input, returns appropriate row index into arrays.
// @param thisRow - integer indicating row selected by the user
// @return appropriate index into 2-D array if the specified row is valid, ERROR otherwise
int findRowIndex(int thisRow)
{
    
}
// findSeatIndex: given user input, returns appropriate column index into seating chart array.
// @param thisSeat - character indicating selected seat within row
// @return appropriate index into 2-D array if the specified seat is valid, ERROR otherwise
int findSeatIndex(char thisSeat)
{

}
// displaySeatColumn: given a 2-D mapping of the seating chart in the form [columns][rows],
// will print out a "column" of seats on one row of output (i.e., seat 'A' for all rows in the plane)
// @param seats - reference to a 2-D character array
// @param column - reference to which column of seats to display
void displaySeatColumn(char seats[][ROWS], int column)
{
    for(int i = 0; i < ROWS; i++)
    {

    }

}
*/