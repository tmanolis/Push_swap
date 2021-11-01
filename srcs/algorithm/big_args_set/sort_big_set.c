#include "../../../push_swap.h"

void    display_stack(t_data *data);

void	sort_big_set(t_data *data)
{
	split_and_push(data);
    display_stack(data);
    split_and_push(data);
}