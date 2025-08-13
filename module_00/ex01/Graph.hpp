/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Graph.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spapyan <spapyan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 00:35:30 by spapyan           #+#    #+#             */
/*   Updated: 2025/08/11 00:35:30 by spapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPH_HPP
# define GRAPH_HPP

// #include "./pngWriter/uncomPngWriter.hpp"
#include "MyRuntimeError.hpp"
#include "Vector2.hpp"
#include <iostream>
#include <vector>
#include <utility>
#include <cmath>

class Graph
{
private:
    Vector2                                     size;
    std::vector<Vector2>                        points;
    std::vector<std::pair<Vector2, Vector2> >   lines;

    bool    point_occupied(const Vector2& p) const;
    int     digit_count(int nbr) const;

public:
    Graph(Vector2 s);
    Graph(const Graph& graph);
    Graph& operator=(const Graph& rhs);
    ~Graph();

    void    add_point(const Vector2& v);

    friend  std::ostream&   operator<<(std::ostream& os, const Graph& g);
};

#endif