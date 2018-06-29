/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bullet.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <dwilliam@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 13:09:31 by wvon-gra          #+#    #+#             */
/*   Updated: 2018/06/10 14:32:25 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLET_H
#define BULLET_H

#include <string>
#include <iostream>
#include <ncurses.h>

// struct loc {
//     int    x;
//     int    y;
// };

class Bullet {
public:

        int xLoc, yLoc, xMax,yMax;

		bool is_active;
		Bullet();
        Bullet(int velocity);
        Bullet(Bullet const &src);
        virtual ~Bullet();

		void	setAttr(int vel);

        Bullet   &operator=(Bullet const &rhs);
        // virtual loc getLoc( void );
        virtual int getVelocity(void);
	    //virtual void	update();
		void movedown();

protected:
		int _velocity;
		// loc _loc; 
		int x;
		int y;
};

#endif