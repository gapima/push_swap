/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_short.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima <glima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:05:37 by glima             #+#    #+#             */
/*   Updated: 2024/08/18 18:05:45 by glima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void ft_insertion_sort(t_push_swap *push_swap) {
    t_stack *A = &(push_swap->A);
    t_stack *B = &(push_swap->B);

    // Mover todos os elementos de A para B
    while (A->size > 0) {
        ft_pb(push_swap);
    }

    // Ordenar os elementos em B e movê-los de volta para A
    while (B->size > 0) {
        int min_value = B->head->content;
        t_stack_node *min_node = B->head;
        t_stack_node *current = B->head->next;

        // Encontrar o menor elemento em B
        while (current != NULL) {
            if (current->content < min_value) {
                min_value = current->content;
                min_node = current;
            }
            current = current->next;
        }

        // Calcular a posição do menor elemento
        int position = 0;
        current = B->head;
        while (current != min_node) {
            current = current->next;
            position++;
        }

        // Decidir se é mais eficiente usar rb ou rrb
        if (position <= B->size / 2) {
            while (B->head != min_node) {
                ft_rb(push_swap);
            }
        } else {
            while (B->head != min_node) {
                ft_rrb(push_swap);
            }
        }
        // Empurrar o menor elemento para A
        ft_pa(push_swap);
    }
}
