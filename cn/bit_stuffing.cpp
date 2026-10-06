#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[100], b[200];
    int i, j, count;

    // Sender Side - Bit Stuffing
    cout << "Enter frame length: ";
    cin >> n;

    cout << "Enter the frame bits (0 and 1): ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout<<"your entered frame is: ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    i = 0;
    j = 0;
    count = 0;

    while (i < n)
    {
        b[j] = a[i];

        if (a[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }

        // Insert 0 after five consecutive 1s
        if (count == 5)
        {
            j++;
            b[j] = 0;
            count = 0;
        }

        i++;
        j++;
    }

    int stuffedLength = j;

    cout << "\nStuffed Frame: "<<endl;
    
    for (i = 0; i < stuffedLength; i++)
    {
        cout << b[i] << " ";
    }

    // Receiver Side - Bit De-stuffing
    int c[200];
    int k = 0;

    i = 0;
    j = 0;
    count = 0;

    while (i < stuffedLength)
    {
        c[j] = b[i];

        if (b[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }

        // Skip stuffed 0 after five consecutive 1s
        if (count == 5)
        {
            i++;
            count = 0;
        }

        i++;
        j++;
    }

    cout << "\nOriginal Frame after De-stuffing: "<<endl;

    for (i = 0; i < j; i++)
    {
        cout << c[i] << " ";
    }
 cout<<endl;
    return 0;
}