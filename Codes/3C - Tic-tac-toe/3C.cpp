#include <iostream>
#include <map>

using namespace std;

int main()
{

    char T[3][3];
    for (int i = 0; i < 3; i++)
    {
        cin >> T[i][0] >> T[i][1] >> T[i][2];
    }

    map<char, int> count = {{'X', 0}, {'0', 0}, {'.', 0}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            count[T[i][j]] += 1;
        }
    }
    if (abs(count['X'] - count['0']) > 1 or count['0']>count['X'])
    {
        cout << "illegal" << endl;
        return 0;
    }
    if (count['X'] == count['0'] && count['X'] == 0)
    {
        cout << "first" << endl;
        return 0;
    }
    char winner = '.';
    if ((T[0][0] == T[1][1] && T[1][1] == T[2][2]) or (T[0][2] == T[1][1] && T[1][1] == T[2][0]))
    {
        winner = T[1][1];
    }
    bool W = false;
    for (int i = 0; i < 3; i++)
    {
        if ((T[i][0] == T[i][1] && T[i][1] == T[i][2]) && T[i][i]!='.')
        {
            if(W) {
                cout << "illegal" << endl;
                return 0;
            }else {
                winner = T[i][i];
                W=true;
            }
        }
    }
    W =false;
    for (int i = 0; i < 3; i++)
    {
        if ((T[0][i] == T[1][i] && T[1][i] == T[2][i]) && T[i][i]!='.')
        {
            if(W) {
                cout << "illegal" << endl;
                return 0;
            }else {
                winner = T[i][i];
                W=true;
            }
        }
    }
    if((winner=='0' and count['X']>count['0']) or (winner=='X' and count['X']==count['0'])) {
        cout << "illegal" <<endl;
        return 0;
    }

    if (winner != '.')
    {

        cout << "the " << (count['X']==count['0'] ? "second" : "first") << " player won" << endl;
        return 0;
    }
    if (count['.'] == 0 && winner == '.')
    {
        cout << "draw" << endl;
        return 0;
    }
    if (count['X'] == count['0'])
    {
        cout << "first" << endl;
    }
    else
    {
        cout << "second" << endl;
    }

    return 0;
}