/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spapyan <spapyan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 21:35:58 by spapyan           #+#    #+#             */
/*   Updated: 2025/08/10 21:35:58 by spapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIVIDEANDRULE_HPP
# define DIVIDEANDRULE_HPP

# include "MyRuntimeError.hpp"
# include <iostream>

class Bank;

class Account
{
private:
    int id;
    int value;

    Account(int id, int value);

    friend class Bank;

public:
    const int& get_id() const;
    const int& get_value() const;
    friend std::ostream& operator << (std::ostream& p_os, const Account& p_account);
};

#endif