/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bullet.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <dwilliam@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 13:11:00 by wvon-gra          #+#    #+#             */
/*   Updated: 2018/06/10 14:28:08 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bullet.hpp"
#include "player.hpp"

Bullet::Bullet()
{
	is_active = false;
}

Bullet::Bullet(int velocity) : _velocity(velocity)
{
	is_active = false;
}

Bullet::Bullet(Bullet const &src)
{
     *this = src;
}

Bullet::~Bullet()
{

}

void	Bullet::setAttr(int velocity)
{
	this->_velocity = velocity;
	is_active = true;
}

Bullet   &Bullet::operator=(Bullet const &rhs)
{
    this->_velocity = rhs._velocity;
	return *this;
}

// loc Bullet::getLoc( void )
// {
//     return this->_loc;
// }

int Bullet::getVelocity(void)
{
    return this->_velocity;
}

// void	Bullet::update()
// {
//     this->_loc.y += this->_velocity;
// }