/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyRuntimeError.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spapyan <spapyan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 00:35:39 by spapyan           #+#    #+#             */
/*   Updated: 2025/08/11 00:35:39 by spapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_RUNTIME_ERROR_HPP
# define MY_RUNTIME_ERROR_HPP

#include <stdexcept>
#include <string>

class MyRuntimeError : public std::exception
{
private:
    std::string str;

public:
    MyRuntimeError(const std::string& err);

    virtual ~MyRuntimeError() throw() {};

    const char* what() const throw();
};

#endif