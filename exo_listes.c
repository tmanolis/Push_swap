typedef struct  s_list
{
    void            *content;
    struct s_list   *next;
}               t_list;

t_list  *ft_lstnew(void *content)
{
    t_list *tmp;

    tmp = (t_list *)malloc(sizeof(t_list));
    if (!tmp)
        return (NULL);
    tmp->content = content;
    tmp->next = NULL;
    return (tmp);
}

void ft_lstadd_front(t_list **alst, t_list *new)
{
    new->next = *alst;
    *alst = new;
}

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    if (lst)
    {
        i++;
        while (lst->next != NULL;)
        {
            lst = lst->next;
            i++;
        }
    }
    return (i);
}