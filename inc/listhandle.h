#ifndef LISTHANDLE_H
# define LISTHANDLE_H

# include "../inc/defines.h"

t_stack	*ft_stacklstnew(int num);
t_stack	*stack_lstlast(t_stack *lst);
void	stack_lstadd_back(t_stack **lst, t_stack *new);
int		stack_lstsize(t_stack *lst);
void	stack_lstfree(t_stack **lst);
#endif