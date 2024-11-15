// Tell the rank of the entered new mark. Ex: Marks List: {39, 38, 38, 36, 34, 31, 28}, for mark 38 answer is Rank 2, for mark 36 rank is 3 , repeated digits should not be counted

#include <iostream>
using namespace std;
// If i is 0, marks[i - 1] would attempt to access an element before the beginning of the array, which would be out of bounds and cause an error.
int getRank(int marks[], int size, int newMark)
{
    int rank = 1;
    for (int i = 0; i < size; ++i)
    {
        if (i > 0 && marks[i] == marks[i - 1])
        {
            continue; // Skip duplicate marks
        }
        if (marks[i] == newMark)
        {
            return rank;
        }
        rank++;
    }
    return -1; // If the mark is not found in the list
}

int main()
{
    int marks[] = {39, 38, 38, 36, 34, 31, 28}; // Already sorted in descending order
    int size = sizeof(marks) / sizeof(marks[0]);
    int newMark = 36;

    int rank = getRank(marks, size, newMark);

    if (rank != -1)
    {
        cout << "Rank of the mark " << newMark << " is: " << rank << endl;
    }
    else
    {
        cout << "Mark " << newMark << " is not in the list." << endl;
    }

    return 0;
}
