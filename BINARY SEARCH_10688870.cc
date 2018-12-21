// EXAMPLE OF THE BINARY SEARCH ALGORITHM.

#include <iostream>
 
using namespace std;

//CREATING A FUNCTION FOR THE BINARY SEARCH ALGORITHM.

int binarySearch(int array[], int size, int searchValue)
{
    int low = 0;
    int high = size - 1;
 
    int mid;
 
    while (low <= high)
    {
        mid = (low + high) / 2;
 
        if(searchValue == array[mid])
        {
            return mid;
        }
        else if (searchValue > array[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
 
    return -1;
 
}
 
int main()
{
	// WE PROCEED TO DECLARE AND INITIALIZE THE ARRAY.
	// WITH THE BINARY SEARCH, THE ARRAY HAS TO BE SORTED.
	
    int array[] = { 7, 34, 47, 55, 67, 82, 98};
 
    int userValue;
 
    cout << "Enter an integer: " << endl;
    cout << " Hint: Numbers 7, 34, 47, 55, 67, 82, 98 will be found " << endl;
    cin >> userValue;
 
    int result = binarySearch(array, 8, userValue);
 
    if(result >= 0)
    {
        cout << "The number " << array[result] << " was found at the"
                " element with index " << result << endl;
    }
    else
    {
        cout << "The number " << userValue << " was not found. " << endl;
    }
}
