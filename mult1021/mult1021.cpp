#include <iostream>
using namespace std;

static int mult(int x, int y)
{
    return x * y;
}

int main()
{
    int x = 7;
    int y = 3;
    int answer = 0;

    answer = mult(x, y);

    cout << "答えは " << answer << endl;
}

