#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void insertElement(vector<int> &arr, int x)
    {
        // Insert element at the end of the array
        arr.push_back(x);
    }

    void deleteElement(vector<int> &arr, int x)
    {
        // Delete first occurrence of x if it exists
        for (auto it = arr.begin(); it != arr.end(); ++it)
        {
            if (*it == x)
            {
                arr.erase(it);
                break;
            }
        }
    }

    void reverseArray(vector<int> &arr)
    {
        // Reverse the array
        reverse(arr.begin(), arr.end());
    }

    void sizeOfArray(vector<int> &arr)
    {
        // Print the size of the array
        cout << arr.size() << endl;
    }

    void displayArray(vector<int> &arr)
    {
        // Print all elements space-separated, then newline
        for (int i = 0; i < (int)arr.size(); i++)
        {
            cout << arr[i];
            if (i< (int)arr.size())
            {
                cout << " ";
            }
        }
        cout << endl;
    }
};
