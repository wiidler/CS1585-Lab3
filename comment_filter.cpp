#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::string buffer;
    char match = '#';
    while (getline(cin, buffer))
    {
        if (buffer[0] != match)
        {
            cout << buffer << endl;
        }
    }
    return 0;
}
