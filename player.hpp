/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <dwilliam@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 21:47:33 by dwilliam          #+#    #+#             */
/*   Updated: 2018/06/10 15:35:11 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP

# define PLAYER_HPP

#include <ncurses.h>
#include <iostream>
#include <string>
#include <unistd.h>

#include "bullet.hpp"
#include "enemy.hpp"

class Player
{
	public:
		Player(WINDOW * win, int y, int x, char c);
		~Player(void);

		int xLoc, yLoc, xMax,yMax;

		void moveUP();
		void moveDOWN();
		void moveLEFT();
		void moveRIGHT();
		int getMOVE();
		int getScore();
		void setScore(int score);
		void display();
		void Shoot();
		void bullet();

	private:
		char character;
		int _lives;
		int _score;
		WINDOW * curwin;
};

#endif