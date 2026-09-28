#include <iostream>
using namespace std;

int main() {
    int marks[5]; // FIXED: Added [5] so it can hold 5 values
    
    cout << "Enter marks for 5 subjects:\n";
    for(int i = 0; i < 5; i++) 
    {
        cin >> marks[i];
    }
    
    // Bubble sort for Descending Order
    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            // '<' arranges them from highest to lowest
            if(marks[j] < marks[j+1])
            {
                int temp = marks[j];
                marks[j] = marks[j+1];
                marks[j+1] = temp;
            }
        }
    }
    
    cout << "\nMarks from Highest to Lowest:\n";
    for(int i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }
    cout << endl;
    
    return 0;
}
