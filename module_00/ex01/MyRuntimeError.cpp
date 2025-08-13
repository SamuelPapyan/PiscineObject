/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyRuntimeError.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spapyan <spapyan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 00:35:36 by spapyan           #+#    #+#             */
/*   Updated: 2025/08/11 00:35:36 by spapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyRuntimeError.hpp"

MyRuntimeError::MyRuntimeError(const std::string& err) : str(err)
{
}

const char* MyRuntimeError::what() const throw()
{
    return (str.c_str());
}