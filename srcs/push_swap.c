#include "../includes/push_swap.h"

/*
int partitionner(int *tableau, int p, int r) {
    int pivot = tableau[p], i = p-1, j = r+1;
    int temp;
    while (1) {
        do
            j--;
        while (tableau[j] > pivot);
        do
            i++;
        while (tableau[i] < pivot);
        if (i < j) {
            temp = tableau[i];
            tableau[i] = tableau[j];
            tableau[j] = temp;
        }
        else
            return j;
    }
}

void quickSort(int *tableau, int p, int r) {
    int q;
    if (p < r) {
        q = partitionner(tableau, p, r);
        quickSort(tableau, p, q);
        quickSort(tableau, q+1, r);
    }
}

int main()
{
    int tab[5] = {5,3,4,1,2};
    int i;
    quickSort(tab,0,4);
    for(i = 0; i < 5; i++)
        printf("%d ",tab[i]);
    puts("");
    return(0);
}*/

void ft_tri(t_stack *stack)
{
    t_stack *tmp;
    t_stack *tmp2;
    unsigned int i;

    tmp2 = stack;
    while(stack)
    {
        i = 0;
        tmp = tmp2;
        while(tmp)
        {
            if(tmp->nbr < stack->nbr)
                i++;
            tmp = tmp->next;
        }
        stack->i = i;
        stack = stack->next;
    }
}

int main(int ac, char **av)
{
    t_stack *a;
    t_stack *b;

    a = NULL;
    b = NULL;
    if(ac > 1)
    {
        ft_getstack(av + 1, ac - 1, &a);
        ft_tri(a);
        if(ft_checker(a,len) != 1)
            start(&a,&b);
        delstack(a);
        delstack(b);
    }
    return(0);
}