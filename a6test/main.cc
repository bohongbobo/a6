// Brock Ferrell
// CS2401
// November 23, 2015
// Project7
/******************************************************************************
 *
 *
 *
 *
 * Copyright (C) 1997-2015 by Dimitri van Heesch.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation under the terms of the GNU General Public License is hereby
 * granted. No representations are made about the suitability of this software
 * for any purpose. It is provided "as is" without express or implied warranty.
 * See the GNU General Public License for more details.
 *
 * Documents produced by Doxygen are derivative works derived from the
 * input used in their production; they are not affected by this license.
 *
 */

#include "game.h"
#include "othello.h"
/*! \file
 *  \brief main entry point for doxygen
 *
 *  This file contains main()
 */
/*! Default main. The idea of build an AI game, you fight with computer
 *  you need write several function to make this game run succesfully with a
 *  theGame.play() function for instance.
 */
using namespace main_savitch_14;


int main()
{
	Othello theGame;
	theGame.restart();
	theGame.play();
}
