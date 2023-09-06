#include <iostream>
using namespace std;
int lower[100];
int upper[100];
void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << "\t";
    }
}
int partition(int s[], int n, int beg, int end)
{
    int left = beg;
    int right = end;
    int loc = beg;
    int temp;
jump:
    while (s[loc] <= s[right] && loc != right)
    {
        right = right - 1;
    }
    if (loc == right)
    {
        return loc;
    }
    if (s[loc] >= s[right])
    {
        temp = s[loc];
        s[loc] = s[right];
        s[right] = temp;
        loc = right;
    }
    while (s[loc] > s[left] && loc != left)
    {
        left = left + 1;
    }
    if (loc == left)
    {
        return loc;
    }
    if (s[loc] < s[left])
    {
        temp = s[loc];
        s[loc] = s[left];
        s[left] = temp;
        loc = left;
        goto jump;
    }
    return loc;
}
void quick_sort(int s[], int n)
{
    int top = -1, beg, end, loc;

    if (n >= 2)
    {
        top = top + 1;
        lower[0] = 0;
        upper[0] = n - 1;
    }
    while (top != -1)
    {
        beg = lower[top];
        end = upper[top];
        top = top - 1;
        loc = partition(s, n, beg, end);
        if (beg <= loc - 2) // maybe error can occur
        {
            top = top + 1;
            lower[top] = beg;
            upper[top] = loc - 1;
        }
        if (loc + 2 <= end)
        {
            top = top + 1;
            lower[top] = loc + 1;
            upper[top] = end;
        }
    }
}

int main()
{
    int size;
    cout<<"Enter the Size of an array:"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the Elements:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    quick_sort(arr, size);
    printArray(arr, size);
    return 0;
}