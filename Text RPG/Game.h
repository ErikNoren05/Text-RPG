#pragma once
#include "Player.h"
#include "Tools.h"
#include "Food.h"

#include <math.h>
#include <string>
#include <iostream>
#include <cctype>
#include <algorithm>
#include <dos.h>
#include <cstdlib>
#include <time.h>
#include <conio.h>
#include <vector>

class game
{
public:
	void tutorial();
	void run();
	void combatTutorial();
	void setEnemy();

	void combat();
	void playerAttack();
	void enemyAttack();
	void dummyAttack();
	void heal();
	
	
	void crossRoad();
	void shop();
	void encounter();
	void mountain();
	
	
};
