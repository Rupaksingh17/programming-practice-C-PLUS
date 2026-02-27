 #include <iostream>
using namespace std;

int main()
{
    int row, col;
    for(row = 1; row <= 5; row++)  // outer loop runs 5 times
    {
        for(col = 5; col >= row; col--)  // inner loop prints decreasing numbers
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}
