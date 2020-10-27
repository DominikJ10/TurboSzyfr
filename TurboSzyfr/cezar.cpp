
#include <QString>
#include <cezar.h>
#include <QChar>
#include "stdlib.h"


QString cezar(QString text, int s)
{
    QString result = "";
    QChar tempqchar;
    int tempint;

    //QChar alfabet[36] = {'a', 'ą', 'b', 'c', 'ć', 'd', 'e', 'ę', 'f', 'g', 'h', 'i', 'j', 'k',
    //                     'l', 'ł', 'm', 'n', 'ń', 'o', 'ó', 'p', 'q', 'r', 's', 'ś', 't', 'u',
    //                     'v', 'w', 'x', 'y', 'z', 'ź', 'ż'};


    for (int i=0;i<text.length();i++)
    {

        tempqchar = text[i];
        tempint = tempqchar.QChar::unicode();

        if (tempint == 9 || tempint == 10 || tempint == 13 || tempint == 32) //obsłużyć polskie znaki
            result += QChar(tempint);

        else if (text[i].isUpper())
            result += QChar(((tempint+s-65)%32) +65);

        else
            result += QChar(((tempint+s-97)%32) +97);
    }

    return result;
}
