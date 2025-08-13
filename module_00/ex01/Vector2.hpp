/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector2.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spapyan <spapyan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 00:35:44 by spapyan           #+#    #+#             */
/*   Updated: 2025/08/11 00:35:44 by spapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR2_HPP
# define VECTOR2_HPP

class Vector2
{
private:
    float   x;
    float   y;

public:
    Vector2();
    Vector2(float x, float y);
    Vector2(const Vector2&);
    Vector2&    operator=(const Vector2& rhs);
    ~Vector2();

    float   get_x() const;
    float   get_y() const;

    void    set_x(float);
    void    set_y(float);
};

#endif