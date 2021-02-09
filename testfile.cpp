/*TASK : 
SHUBHANK - Uncomment sequentialSearch function definition
PRATUL - Uncomment binarySearch function definition
DO NOT change anything else in this file. */

#include <iostream>
#include <cstdlib> // for rand and srand
#include <ctime> // for the time function
#include <fstream> //for output file

using namespace std;

//Function prototypes
void populateArray (int [], int); //generates random numbers
void selectionSort (int [], int); //performs an ascending order selection sort on array. size is the number of elements
int sequentialSearch (const int [], int, int); //also known as linear search
int binarySearch (const int [], int, int); //performs binary search


int main()
{
    int randomNum;
    
    //seed the random number generator
    srand(static_cast<unsigned int>(time(NULL)));
    
    
    const int SIZE = 200;
    int randNumArray [SIZE]={};
    
    //generate random numbers and store them in array
    populateArray(randNumArray, SIZE);
    
    //sort the values
    selectionSort(randNumArray, SIZE);
}
  
void populateArray (int array[], int size)
{
    
    for (int count = 1; count < size; count++)
    {
        array[count]=1+rand()% size;
        cout <<array[count]<<"\n";
    }
}

void selectionSort (int array[], int size)
{
    // int startScan, minIndex, minValue;
    // for (startScan = 0; startScan < (size - 1); startScan++)
    // {minIndex = startScan;minValue = array[startScan];
        
    //     for (int index = startScan + 1; index < size; index++)
    //     {
    //         if (array[index] < minValue)
    //         {
    //             minValue = array[index];
    //             minIndex = index;
    //         }
    //     }
    //     array[minIndex] = array[startScan];
    //     array[startScan] = minValue;
    // }
}
int sequentialSearch (const int array[], int size, int value)
{
    // int index = 0, position = -1;
    // bool found = false;
    
    // while (!found && index < size)
    // {
    //     if (array [index] == value)
    //     {
    //         found = true;
    //         position = index;
    //     }
    //     index++;
    // }
    // return position;
}

int binarySearch (const int array[], int size, int value)
{
    // //first array element, last array element, midpoint of search and position   of search value
    // int first = 0, last = size -1, middle, position = -1;
    
    // //flag
    // bool found = false;
    
    // while (!found && first <= last)
    // {
    //     middle = (first + last)/2;      //calculates midpoint
    //     if (array [middle] == value)    //if value is found at midpoint
    //     {
    //         found = true;
    //         position = middle;
    //     }
    //     else if (array[middle] > value) //if value is found in lower half
    //     {
    //         last = middle - 1;
    //     }
    //     else                            //if value is found in upper half
    //     {
    //         first  = middle + 1;
    //     }
    // }
    // return position;
}
