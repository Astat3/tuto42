#include <unistd.h>
#include <stdio.h>

void    swap (int *a, int *b)
{
    int temp;

    temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}


void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j; 
    
    i = 0;

    while (i < size)
    {
        while (j < size - 1)
        {
            if (tab[j] > tab[j+1])
            {
                swap(&tab[j], &tab[j + 1]);
                j = 0;
            }
            else
                j++;

            
        }
        
        i++;
    }
    
}

int main(void)
{
    int tab[6]={2,3,1,19,12,4};
    ft_sort_int_tab(tab, 6);
    int i = 0;
    while (i < 6)
    {
        printf("%d, ", tab[i]);
        i++;
    }
    
}