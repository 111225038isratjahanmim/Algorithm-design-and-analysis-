#include <iostream>
#include <list>
using namespace std;

int main()
{
    // Create a list of integers
    list<int> numbers;

    // Add elements to the end
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Add an element to the beginning
    numbers.push_front(5);

    // Display the list
    cout << "List: ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;

    // Remove the first element
    numbers.pop_front();

    // Remove the last element
    numbers.pop_back();

    cout << "After removing first and last: ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
