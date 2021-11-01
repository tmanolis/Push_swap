#include "../../../push_swap.h"

void    display_stack(t_data *data);

void	sort_big_set(t_data *data)
{
    size_t len;

    len = ft_lstsize(data->lst_a);
    while (len > 3)
    {
        split_and_push(data);
        display_stack(data);
        len = ft_lstsize(data->lst_a);
    }
}
