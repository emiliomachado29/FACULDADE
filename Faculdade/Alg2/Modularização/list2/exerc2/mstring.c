#include "mstring.h"

int mstrlen(char s[])
{
    int i = 0;

    while (s[i] != '\0')
    {
        i++;
    }

    return i;
}

void mstrcpy(char dest[], char orig[])
{
    int i = 0;

    while (orig[i] != '\0')
    {
        dest[i] = orig[i];
        i++;
    }

    dest[i] = '\0';
}

void mstrcat(char dest[], char orig[])
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }

    while (orig[j] != '\0')
    {
        dest[i] = orig[j];
        i++;
        j++;
    }

    dest[i] = '\0';
}

int mstrcmp(char a[], char b[])
{
    int i = 0;

    while (a[i] != '\0' && b[i] != '\0')
    {
        if (a[i] != b[i])
        {
            return a[i] - b[i];
        }

        i++;
    }

    return a[i] - b[i];
}

void mstrupper(char s[])
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }

        i++;
    }
}

void mstrlower(char s[])
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }

        i++;
    }
}

int mcount_vogais(char s[])
{
    int i = 0;
    int cont = 0;

    while (s[i] != '\0')
    {
        char c = s[i];

        if (c >= 'A' && c <= 'Z')
        {
            c = c + 32;
        }

        if (c == 'a' || c == 'e' || c == 'i' ||
            c == 'o' || c == 'u')
        {
            cont++;
        }

        i++;
    }

    return cont;
}

int meh_palindromo(char s[])
{
    int inicio = 0;
    int fim = mstrlen(s) - 1;

    while (inicio < fim)
    {
        if (s[inicio] != s[fim])
        {
            return 0;
        }

        inicio++;
        fim--;
    }

    return 1;
}

void mremove_espacos(char s[])
{
    int i = 0;
    int j = 0;

    while (s[i] != '\0')
    {
        if (s[i] != ' ')
        {
            s[j] = s[i];
            j++;
        }

        i++;
    }

    s[j] = '\0';
}