#include <iostream>
#include <fstream>

#include "findmotive.h"


void __find_motive(std::string str, int size, int tmp[256])
{
    for ( int i = 0; i < 256; i++)
        tmp[i] = -1;

    for ( int j = 0; j < size; j++)
        tmp[(int) str[j]] = j; 
}

int max(int a, int b)
{
    if (a > b)
		return a;
	else
		return b;
}

int find_motive(std::string txt, std::string motive)
{
	int motive_length = motive.size();
    int texte_length = txt.size();

    int count = 0;
	int val = 0;
   
    int buf[256];
    __find_motive(motive.data(), motive_length, buf);

    while (val <= (texte_length - motive_length))
    {
        int i = motive_length - 1;
        while (i >= 0 && motive[i] == txt[val + i])
        {
            i--;
        }

        if (i < 0)
        {
            count++;
            while (txt[val] != ' ' && val < texte_length)
            {
                val++;
            }
        }
        else
            val += max(1, i - buf[txt[val + i]]);
    }
    return count;
}

