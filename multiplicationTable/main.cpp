// create a multiplication table with starting and ending values given by the user
// Functional, but formatting could use work
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // INITIALIZE ALL VARIABLES
    int startValue = 0; // 0 by default 
    int endValue = 0; // 0 by default
    
    // Get input from user
    cout << "Enter starting value: ";
    cin >> startValue;
    cout << "Enter ending value: ";
    cin >> endValue;
    
    // Control the row
    for(int i = 0; i<=(endValue-startValue); i++) 
    {
		// This allows for the first row to display correctly
		int row;
		if (i == 0)
			row = i + 1;
		else 
			row = i + startValue;
	
		// Control the column
		for (int j = 0; j<=(endValue-startValue); j++) 
		{
			// This allows for the first column to display correctly
			int col;
			
			if (j == 0)
				col = j + 1;
			else 
				col = j + startValue;
	    
			cout << (row * col) << " ";
		}// end for
	
		cout << endl;
    }
    system("pause");
    return 0;
}
