#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
using namespace std;
class rectangle
{
public:
	double x, y, a, b;
	rectangle(double c = 0, double d = 0, double e = 0, double f = 0);
	double S();/* „P„|„€„‹„p„t„*/
	double P();/* „P„y„‚„y„}„u„„„‚*/
	double R();/* „Q„p„t„y„…„ƒ „€„„y„ƒ„p„~„~„€„z „€„{„‚„…„w„~„€„ƒ„„„y*/
	bool Kvad();/* „P„‚„€„r„u„‚„{„p „~„p „{„r„p„t„‚„p„„*/
	void Mult(double qq);/* „T„}„~„€„w„u„~„y„‘ „~„p „ƒ„„„€„‚„€„~„*/
	bool  Rav(rectangle g);/* „Q„p„r„u„~„ƒ„„„r„€*/
	bool pot(rectangle g);/* „P„€„t„€„q„y„‘*/
	void Center(rectangle);/* „K„€„€„‚„t„y„~„p„„„ „ˆ„u„~„„„‚„p */
	bool persech(rectangle g);/* „P„u„‚„u„ƒ„u„‰„u„~„y„u*/
	void kek(rectangle g,rectangle f);
};
