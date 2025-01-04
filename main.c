/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <sjoukni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 09:48:25 by sjoukni           #+#    #+#             */
/*   Updated: 2025/01/04 12:35:51 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void ft_mange_tree(t_list **stack_a)
// {
//     t_list *head;
//     head = *stack_a;

//     if (head->num > head->next->num)
//         sa(stack_a);

//     if (head->next->num > head->next->next->num)
//     {
//         rra(stack_a);
//         if ((*stack_a)->num > (*stack_a)->next->num)
//             sa(stack_a);
//     }
//     else if (head->num > head->next->next->num)
//         ra(stack_a);
// }
// int get_min(t_list **stack_a)
// {
//     int min;
//     t_list *temp;
    
//     min = (*stack_a)->num;
//     temp = (*stack_a)->next;
//     while (temp)
//     {
//         if (min > temp->num)
//             min = temp->num;
//         temp = temp->next;
//     }
//     return min;
// }
// int get_max(t_list **stack_a)
// {
//     int max;
//     t_list *temp;
    
//     max = (*stack_a)->num;
//     temp = (*stack_a)->next;
//     while (temp)
//     {
//         if (max < temp->num)
//             max = temp->num;
//         temp = temp->next;
//     }
//     return max;
// }
// int get_index(t_list **lst , int value)
// {
//     int i;
//     i = 0;
//     t_list *temp;
//     temp = *lst;
//     while (temp)
//     {
//         if(temp->num == value)
//             return (i + 1);
//         temp = temp->next;
//         i++;
//     }
//     return 0;
// }
// int process_chunk(t_list **stack_a)
// {
//     int max;
//     int num_of_element;
//     max = get_max(stack_a);
//     num_of_element = max / 5;
//     return (num_of_element);
// }
// int ft_manage_chunk(int num, int num_of_element)
// {
//     int chunk_id;
//     int i;
//     i = num / num_of_element;
//     chunk_id = 0;
//     if(i == 0)
//         chunk_id = 1;
//     else if(i == 1)
//         chunk_id = 2;
//     else if(i == 2)
//         chunk_id = 3;
//     else if(i == 3)
//         chunk_id = 4;
//     else if(i == 4)
//         chunk_id = 5;
//     return (chunk_id);
// }
// void retate(t_list **lst , int index)
// {
//     int size ;
//     int i;
//     i = 0;
//     size = ft_lstsize(*lst);
//     while (i < (size / 2) && index != 1)
//     {
//         if(index <= (size / 2))
//             ra(lst);
//         if(index > (size / 2))
//             rra(lst);
//         i++;
//     }  
    
// }
// void ft_manage_all(t_list **stack_a, t_list **stack_b)
// {
//     t_list *temp;
//     temp = *stack_a;
//     int num_of_element;
//     int chunk_id;
//     int index;
//     // int i = 0;
//     num_of_element = process_chunk(stack_a);
//     while (temp)
//     {
//         chunk_id = ft_manage_chunk(temp->num, num_of_element);
//         // printf("num of elemenet is %d\n", num_of_element);
//         // printf("chunk id is  %d\n", chunk_id);
//         if (chunk_id == 1)
//         {
//             index = get_index(stack_a, temp->num);
//             // printf("index  is %d\n", index);
//             retate(stack_a, index);
//             pb(stack_a, stack_b);
//         }
//         temp = temp->next;
//     }
    
    
// }

// void ft_mange_five(t_list **stack_a, t_list **stack_b)
// {
//    int i ;
//    int min ;
//    int j;
//    j = 0;
//     while (j < 2)
//     {
//         min = get_min(stack_a);
//         i = get_index(stack_a, min);
//         while (i != 1)
//         {
//             i = get_index(stack_a, min);
//             if (i == 2)
//                 sa(stack_a);
//             if(i == 3)
//                 ra(stack_a);
//             if(i == 4 || i == 5)
//                 rra(stack_a); 
//         }
//         if(i == 1)
//             pb(stack_a , stack_b);
//         j++;
//     }
//     ft_mange_tree(stack_a);
//     pa(stack_a , stack_b);
//     pa(stack_a , stack_b); 
// } 

// int main(int ac , char **av)
// {
//     t_list *stack_a;
//     t_list *stack_b;
//     t_list *temp;
//     stack_a = NULL; 
//     stack_b = NULL;
//     temp = NULL;
//     stack_a = ft_create_list(av, ac);
//     // int i = get_min(&stack_a);
//     // ft_printf("index of min  is %d\n", get_index(&stack_a, i));
//     ft_manage_all(&stack_a, &stack_b);
//     // rra(&stack_a);
//     // ft_printf("num of chunk is %d\n", process_chunk(&stack_a));
//     // ft_printf("max  is %d\n", get_max(&stack_a));
//     while(stack_a)
//     {
//         ft_printf("%d\n", stack_a->num);
//         stack_a = stack_a->next;
//     }
//     ft_printf("\nstack b : \n");
//     while(stack_b)
//     {
//         ft_printf("%d\n", stack_b->num);
//         stack_b = stack_b->next;
//     }
//     return 0;
// }
#include "push_swap.h"


int get_min(t_list **stack) 
{
    int min = (*stack)->num;
    t_list *temp = (*stack)->next;
    while (temp) 
    {
        if (temp->num < min)
            min = temp->num;
        temp = temp->next;
    }
    return min;
}

int get_max(t_list **stack) 
{
    int max = (*stack)->num;
    t_list *temp = (*stack)->next;
    while (temp) 
    {
        if (temp->num > max)
            max = temp->num;
        temp = temp->next;
    }
    return max;
}

int get_index(t_list **stack, int value) 
{
    int index = 0;
    t_list *temp = *stack;
    while (temp) 
    {
        if (temp->num == value)
            return index;
        temp = temp->next;
        index++;
    }
    return -1;
}

void rotate_to_top(t_list **stack, int index) 
{
    int size = ft_lstsize(*stack);
    if (index <= size / 2) 
    {
        while (index-- > 0)
            ra(stack);
    } else
    {
        index = size - index;
        while (index-- > 0)
            rra(stack);
    }
}
void place_in_stack_b(t_list **stack_a, t_list **stack_b, int number)
{
    if (!(*stack_b))
    {
        pb(stack_a, stack_b);
        return;
    }
    int max = get_max(stack_b);
    int min = get_min(stack_b);
    if (number > max || number < min)
    {
        int index = get_index(stack_b, max);
        rotate_to_top(stack_b, index + 1);
    }
    else
    {
        t_list *temp = *stack_b;
        int index = 0;
        while (temp->next)
        {
            if (temp->num < number && temp->next->num > number)
                break;
            temp = temp->next;
            index++;
        }
        rotate_to_top(stack_b, index + 1);
    }
    pb(stack_a, stack_b);
}

int *create_sorted_array(t_list *stack, int size)
{
    int *arr = malloc(sizeof(int) * size);
    t_list *temp = stack;
    int i = 0;

    while (i < size)
    {
        arr[i] = temp->num;
        temp = temp->next;
        i++;
    }

    int j = 0;
    while (j < size - 1)
    {
        i = 0;
        while (i < size - j - 1)
        {
            if (arr[i] > arr[i + 1])
            {
                int tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
            }
            i++;
        }
        j++;
    }

    return arr;
}

void push_chunk_to_b(t_list **stack_a, t_list **stack_b, int *sorted_array, int start, int end)
{
    t_list *temp;
    int index;

    while (1)
    {
        temp = *stack_a;
        index = 0;
        while (temp)
        {
            if (temp->num >= sorted_array[start] && temp->num <= sorted_array[end])
                break;
            temp = temp->next;
            index++;
        }
        if (!temp)
            break;

        rotate_to_top(stack_a, index);
        place_in_stack_b(stack_a, stack_b, (*stack_a)->num);
    }
}

void push_back_to_a(t_list **stack_a, t_list **stack_b)
{
    while (*stack_b)
    {
        int max = get_max(stack_b);
        int index = get_index(stack_b, max);

        rotate_to_top(stack_b, index);
        pa(stack_a, stack_b);
    }
}

void push_swap(t_list **stack_a, t_list **stack_b)
{
    int total_numbers = ft_lstsize(*stack_a);
    int chunk_count = 10; 
    int chunk_size = total_numbers / chunk_count;

    int *sorted_array = create_sorted_array(*stack_a, total_numbers);

    int i = 0;
    while (i < chunk_count)
    {
        int start = i * chunk_size;
        int end = (i + 1) * chunk_size - 1;

        if (i == chunk_count - 1)
            end = total_numbers - 1;

        push_chunk_to_b(stack_a, stack_b, sorted_array, start, end);
        i++;
    }

    push_back_to_a(stack_a, stack_b);

    free(sorted_array);
}

int main(int argc, char **argv)
{
    t_list *stack_a = NULL;
    t_list *stack_b = NULL;

    stack_a = ft_create_list(argv, argc);

    push_swap(&stack_a, &stack_b); 

    ft_printf("Sorted stack:\n");
    // t_list *temp = stack_a;
    // while (temp)
    // {
    //     ft_printf("%d\n", temp->num);
    //     temp = temp->next;
    // }

    return 0;
}
