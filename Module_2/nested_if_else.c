#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk>=5000)
    {
        printf("Cox's Bazar jabo.\n");
        if (tk>=10000)
        {
            printf("Saintmartin Jabo.\n");
        }
        else
        {
            printf("Cox eii last gontobbo.\n");
        }
    }
    else
    {
        printf("Kothao jabo na.\n");
    }
    
    return 0;
}