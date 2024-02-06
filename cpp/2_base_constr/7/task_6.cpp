#include <iostream>
#include <vector>
using namespace std;

const int icon = -1;

struct Shift
{
    int x = 0;
    int y = 0;
};

const vector<Shift> SHIFTS = {
    {-1, -1},
    {-1, 0},
    {-1, 1},
    {0, 1},
    {1, 1},
    {1, 0},
    {1, -1},
    {0, -1},
};

struct coordinate
{
    int x, y;
};

int main()
{
    size_t size_y;
    size_t size_x;
    size_t mines;
    cin >> size_y >> size_x >> mines;

    vector<vector<int>> field(size_y + 2, vector<int>(size_x + 2));
    for (size_t index = 0; index != mines; ++index)
    {
        coordinate mine_coord;
        cin >> mine_coord.y >> mine_coord.x;

        field[mine_coord.y][mine_coord.x] = icon;

        for (Shift shift : SHIFTS)
        {
            auto &cell = field[mine_coord.y + shift.x][mine_coord.x + shift.y];
            if (cell != icon)
            {
                ++cell;
            }
        }
    }

    for (size_t row = 1; row <= size_y; ++row)
    {
        for (size_t column = 1; column <= size_x; ++column)
        {
            if (column > 1)
            {
                cout << " ";
            }
            if (field[row][column] == icon)
            {
                cout << "*";
            }
            else
            {
                cout << field[row][column];
            }
        }
        cout << endl;
    }
}