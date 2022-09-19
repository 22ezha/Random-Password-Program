// Eric Zhang
//Comp Sci 6
//May 8, 2020
//Random password program


#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
        char password[11][7];
        int randnum;
        int count;
        int passnum;
        bool low = false; 
        bool cap = false; 
        bool num = false;
        srand((unsigned)time(NULL));


        while ((cap == false) || (low == false) || (num == false))
        {
                for (passnum = 1; passnum <= 10; passnum++)
                {
                        for (count = 1; count <= 6; count++)
                        {
                                randnum = (rand() % 75 + 1) + 47;


                                while (((randnum >= 58) && (randnum <= 64)) || ((randnum >= 91) && (randnum <= 96)))
                                {
                                        randnum = (rand() % 75 + 1) + 47;
                                }


                                password[passnum][count] = randnum;


                                if ((password[passnum][count] >= 48) && (password[passnum][count] <= 57))
                                {
                                        num = true;
                                }


                                if (((password[passnum][count] >= 65) && (password[passnum][count] <= 90)))
                                {
                                        cap = true;
                                }


                                if (((password[passnum][count] >= 97) && (password[passnum][count] <= 122)))
                                {
                                        low = true;
                                }
                        }
                }
        
                for (passnum = 1; passnum <= 10; passnum++)
                {
                        for (count = 1; count <= 6; count++)
                        {


                                cout << password[passnum][count];
                        }


                        cout << "\n\n";
                }


                
        }


        
        
        system("pause");
        return 0;
}