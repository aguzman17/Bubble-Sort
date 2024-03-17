#include <iostream>
#include <vector>
using namespace std;

// Function prototypes
template <class T>
void bubbleSort(vector<T>&);
template <class T>
void swapq(T&, T&);
template <class T>
T SumOf(T a, T b);

int main()
{
    const int SIZE = 6;

    // Array of unsorted values
    vector<int> values = { 6, 1, 5, 2, 4, 3 };

    // Display the unsorted array
    cout << "The unsorted values:\n";
    for (auto element : values)
        cout << element << " ";
    cout << endl;

    // Sort the array
    bubbleSort(values);

    // Display the sorted array
    cout << "The sorted values:\n";
    for (auto element : values)
        cout << element << " ";
    cout << endl;

    int num1;
    int num2;

    cout << "Insert the first value: " << endl;
    cin >> num1;

    cout << "Insert the second value: " << endl;
    cin >> num2;

    cout << "The sum of the 2 elements is: " << SumOf(num1, num2) << endl;
    return 0;
}

/********************************************************
 *                       bubbleSort                     *
 * This function sorts a vector in ascending order.     *
 ********************************************************/
template<class T>
void bubbleSort(vector<T> &arr)
{
    int maxElement;
    int index;

    for (maxElement = arr.size() - 1; maxElement > 0; maxElement--)
    {
        for (index = 0; index < maxElement; index++)
        {
            if (arr[index] > arr[index + 1])
            {
                swapq(arr[index], arr[index + 1]);
            }
        }
    }
}

/****************************************
 *                 swap                 *
 * This function swaps the contents of  *
 * variables a and b.                   *
 ****************************************/
template<class T>
void swapq(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class T>
T SumOf(T a, T b)
{
    T sum;

    sum = a + b;

    return sum;
}
