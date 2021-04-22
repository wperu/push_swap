# include "../../includes/push_swap.h"

int pos_for_b(t_stack **a, t_stack **b)
{
    int i;
    t_stack *tmp;
    int pos;
    i = 0;
    pos = 0;
    tmp =*b;
    if(a)
    {
        while(tmp)
        {
            pos++;
            if(tmp->next != NULL)
            {
                if((*a)->elem > tmp->elem && (*a)->elem <tmp->next->elem)
                    return(pos);
            }
            tmp = tmp->next;
        }
    }
    return(pos);
}


int rb_repeat(t_stack **b, int pos)
{
	int i;

	i = 0;
	puts("ok");
	while(pos != 0)
	{
		ft_rotate(b);
		ft_putstr_fd("rb\n",1);
		pos--;
		i++;
	}
	return(i);
}

int rrb_repeat(t_stack **b, int pos)
{
	int i;
	
	i = 0;
	pos = ft_lststack(*b) - pos;
	i = pos;
	while(pos != 0)
	{
		ft_reverse_rotate(b);
		ft_putstr_fd("rrb\n",1);
		pos--;
	}
	return(i);
}

int ft_range_top_b(t_stack **b, int pos)
{
	int i;
	int t;

	i = 0;
	t = ft_lststack(*b);
//	printf("t = %d\n",t/2);
//	printf("pos = %d\n",pos);
	if(pos < t / 2)
		i += rb_repeat(b,pos);
	if(pos >= t / 2)
		i += rrb_repeat(b,pos);
	return (i);
}