#include <iostream>
using namespace std;
int maze(int current_row, int current_column, int end_row, int end_column)
{
    int downside = 0, rightside = 0;
    // if current row and column is equal to the end row and column means maze in the destination
    if (current_column == end_row && current_row == end_column)
    {
        return 1;
    }
    if (current_row == end_row)
    { // only right side we can go now
        rightside += maze(current_row, current_column + 1, end_row, end_column);
    }

    if (current_column == end_column)
    { // only downward we can go now
        downside += maze(current_row + 1, current_column, end_row, end_column);
    }

    if (current_column < end_row && current_row < end_column)
    { // if it is in any postion except border position
        rightside += maze(current_row, current_column + 1, end_row, end_column);

        downside += maze(current_row + 1, current_column, end_row, end_column);
    }
    int totalways = rightside + downside;
    return totalways;
}
int main()
{
    int rows, columns;
    cout << "Enter the number of rows : ";
    cin >> rows;
    cout << "Enter the number of columns : ";
    cin >> columns;
    int numberofpath = maze(1, 1, rows, columns); // 1,1 are starting position rows and column are ending position
    cout << "Total number of ways are  : " << numberofpath;
    return 0;
}