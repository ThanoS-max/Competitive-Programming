/*
 *
 * Problem- Anton and Danik
 * Platform- Codeforces
 * Problem Link- https://codeforces.com/contest/734/problem/A
 * Langugae- C++
 * 
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;//Number of games won
    cin >> s;
    int a = 0, d = 0;
    
    for (auto i = 0; i < n; i++)
    {
        if (s[i] == 'A')//if Anton is winning the game
            a++;
        else
            d++;//If Anton is not winning the game, Danik is.
    }
    
    if (a > d)//Number of games won by Anton is more than that of Danik.
        cout << "Anton";
    
    else if (d > a)//Number of games won by Danik is more than that of Anton.
        cout << "Danik";
    
    else
        cout << "Friendship";

    return 0;
}
