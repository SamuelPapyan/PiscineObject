/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spapyan <spapyan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 21:46:52 by spapyan           #+#    #+#             */
/*   Updated: 2025/08/10 21:46:52 by spapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(int id, int value)
{
    this->id = id;
    this->value = value;
}

const int& Account::get_id() const
{
    return (id);
}

const int& Account::get_value() const
{
    return (value);
}

std::ostream& operator<< (std::ostream& p_os, const Account& p_account)
{
    p_os << "[" << p_account.id << "] - [" << p_account.value << "]";
    return (p_os);
}

