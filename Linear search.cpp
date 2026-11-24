#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {12, 45, 7, 23, 89, 34, 56, 90, 3, 67};
    int target;
    cout << "enter target: ";
    cin >> target;

    int foundIndex = -1;
    int n = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] == target)
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1)
    {
        cout << target << " was found at index " << foundIndex << endl;
    }
    else
    {
        cout << target << " was not found in the array" << endl;
    }

    return 0;
}
