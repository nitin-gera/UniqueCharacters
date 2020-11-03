#include <iostream>
#include <string.h>

using namespace std;

bool RepeatedChar1(char *arr)
{
    int len = strlen(arr);

    for(int i(0); i < len; i++)
    {
        for(int j = i+1; j < len; j++)
        {
            if(arr[i] == arr[j])
            {
                return true;
            }
        }
    }

    return false;
}

bool RepeatedChar2(char *arr)
{
    int len = strlen(arr);

    int checker = 0;

    for(int i(0); i < len; i++)
    {
        int val = arr[i] - 'a';

        if( (checker & (1 << val) ) != 0)
            return true;

        checker |= 1 << val;
    }

    return false;
}

int main(int argc, char *argv[])
{
    char arr[] = {"ThisArrayContainsRepeatedCharacters"};

    if(RepeatedChar1(arr))
    {
        cout << "RepeatedChar1 :: String has repeated Characters" << endl;
    }
    else
    {
        cout << "RepeatedChar1 :: String has no repeated Characters" << endl;
    }

    if(RepeatedChar2(arr))
    {
        cout << "RepeatedChar2 :: String has repeated Characters" << endl;
    }
    else
    {
        cout << "RepeatedChar2 :: String has no repeated Characters" << endl;
    }
    return 0;
}
