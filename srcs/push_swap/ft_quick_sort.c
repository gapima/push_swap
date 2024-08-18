/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima <glima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:05:28 by glima             #+#    #+#             */
/*   Updated: 2024/08/18 18:05:29 by glima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void ft_quick_sort(t_push_swap *ps, int start, int end) {
    if (start >= end) {
        return;// Base da recursão: subpilha de tamanho 1 ou menor já está ordenada
    }

    int left_count = 0;
    int right_count = 0;
    int size = end - start + 1;

    // Particionamento
    // for (int i = 0; i < size; i++) {
    //     if (ps->A.head->content < pivot) {
    //         ft_pb(ps); // Move os menores que o pivô para a stack B
    //         left_count++;
    //     } else {
    //         ft_ra(ps); // Mantém os maiores na stack A
    //         right_count++;
    //     }
    // }

    // Ordena recursivamente a subpilha menor (agora em B)
    ft_quick_sort(ps, 0, left_count - 1);

    // Move os menores de volta para A
    while (left_count-- > 0) {
        ft_pa(ps);
    }

    // Ordena recursivamente a subpilha maior (que já está na A)
    ft_quick_sort(ps, 0, right_count - 1);
}
void ft_start_quick_sort(t_push_swap *ps) {
    ps->A.size = 0;
}