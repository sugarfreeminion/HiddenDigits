/*************************************************************************
 * Author:          sugarfreeoh
 * Date:            18 March 2016
 * Description:     For each test case print out all visible and hidden
 *                  digits in order of appearance. Print out NONE if 
 *                  there is no digits in the string.
 *************************************************************************/

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream inputFile;

    inputFile.open(argv[1]);

    if(inputFile.is_open())
    {
        string data;

        while(getline(inputFile,data))
        {
            unsigned int index = 0;

            char temp;

            bool hiddenDigitFound = false;

            //cout << data << endl;

            while(index < data.size())
            {
                if(data[index] >= 97 && data[index] <=106)
                {
                    temp = data[index]-49;
                    cout << temp;
                    hiddenDigitFound = true;
                }
                else if(data[index] >=48 && data[index] <= 57)
                {
                    cout << data[index];
                    hiddenDigitFound = true;
                }

                ++index;
            }

            if(hiddenDigitFound == false)
            {
                cout << "NONE";
            }

            cout << endl;
        }
    }
    else
    {
        cout << "Error opening input file" << endl;
    }

    return 0;
}
