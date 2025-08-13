/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Graph.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spapyan <spapyan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 00:35:33 by spapyan           #+#    #+#             */
/*   Updated: 2025/08/11 00:35:33 by spapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Graph.hpp"

Graph::Graph(Vector2 s) : size(s)
{
}

Graph::Graph(const Graph& g)
{
    this->size = g.size;
    this->points = g.points;
}

Graph&  Graph::operator=(const Graph& rhs) 
{
    if (this == &rhs)
        return (*this);
    this->size = rhs.size;
    this->points = rhs.points;
    return (*this);
}

Graph::~Graph()
{
}

void    Graph::add_point(const Vector2& v)
{
    if (v.get_x() > size.get_x() ||
        v.get_y() > size.get_y())
        throw MyRuntimeError("x,y out of the graph size");
    points.push_back(v);
}

bool    Graph::point_occupied(const Vector2& p) const
{
    for (std::vector<Vector2>::const_iterator cit = points.begin(); cit != points.end(); ++cit)
        if (cit->get_x() == p.get_x() && cit->get_y() == p.get_y())
            return (true);
    return (false);
}

int Graph::digit_count(int nbr) const
{
    if (nbr == 0)
        return (1);
    return (static_cast<int>(std::log10(nbr)) + 1);
}

std::ostream&   operator<<(std::ostream& os, const Graph& g)
{
    int highest_digit = g.digit_count(g.size.get_y());

    std::cout << highest_digit << "\n";
    for (int row = static_cast<int>(g.size.get_y()); row >= 0; row--)
    {
        std::string spaces(highest_digit - g.digit_count(row) + 1, ' ');
        os << ">& " << row << spaces;
        for (int col = 0; col <= static_cast<int>(g.size.get_x()); col++)
        {
            std::string space = (col == static_cast<int>(g.size.get_x())) ? "" : " ";
            if (g.point_occupied(Vector2(col, row)))
                os << "X" << space;
            else
                os << ". ";
        }
        os << "\n";
    }
    os << ">& " << std::string(highest_digit + 1, ' ');
    for (int i = 0; i <= static_cast<int>(g.size.get_x()); i++)
        os << i << ((i != static_cast<int>(g.size.get_x())) ? " " : "");
    return (os);
}