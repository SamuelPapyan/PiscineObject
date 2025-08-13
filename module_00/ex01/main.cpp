/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spapyan <spapyan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 00:35:27 by spapyan           #+#    #+#             */
/*   Updated: 2025/08/11 00:35:27 by spapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Graph.hpp"

int main(void)
{
    Vector2 size(10, 10);
    Graph   g(size);

    g.add_point(Vector2(5, 5));
    g.add_point(Vector2(0, 0));
    g.add_point(Vector2(2, 2));
    g.add_point(Vector2(9, 5));
    g.add_point(Vector2(2, 4));
    g.add_point(Vector2(5, 2));

    std::cout << g << "\n";
    return (0);
}