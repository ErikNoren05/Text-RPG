#include "Game.h"
#include <dos.h>
#include <thread>
#include <algorithm>


std::string input_string = "one";
int input_int = 1;
int rNummer = 0;
float rollerNumber = 0.0;
int roller = 0.0;
std::string chapter = "";
std::string enemyType = "enemy1";

//får inte in värdet i player från tools

//characters
classPlayer player;
basicEnemy enemy1;


//weapons
classStick stick;
classFist fist;

int stall = 2;
//protection
classTshirt Tshirt;
classBareChest bareChest;


//heal
classApple apple;
classWholePig wholePig;


/*Hur attackconstuc ordning
namn	Skada*/
//classWeapon weapon("Sword"/*Name*/, 1/*weapondamage*/);
//classStick stick("stick"/*Name*/, 2/*weapondamage*/);


/*Hur försvarconstructor ordning
namn	minskaskada*/
//classProtection bareChest("bare chest", 0);
//classTshirt tshirt("T-shirt", 1);


void game::tutorial()
{
	//enemyType = "debug";
	//setEnemy();
	

	player.setHealth(150);
	player.setWeapon(fist.getDamageIncrease());
	player.setWeaponName(fist.getName());
	player.setProtection(Tshirt.getDamageDecrease());
	player.setProtectionName(Tshirt.getName());

	goto tutorial_begins;
	
	//combat();

	/*std::cout << fist.getDamageIncrease();
	std::cout << fist.getName() << "\nplayer\n";
	std::cout << "broken "<< player.getWeaponName();
	std::cout << "hej";
	std::cout << player.getWeapon();


	std::cout << player.getDamage();
	std::cout << "\nenemy\n" << player.getHealth();
	std::cout << "\n" << enemy1.getDamage();
	std::cout << "\n" << enemy1.getHealth();
	std::cout << "\nstick\n" << stick.getDamageIncrease();
	std::cout << "\n" << stick.getName();
	std::cout << "\Tshirt\n" << Tshirt.getName();
	std::cout << "\n" << Tshirt.getDamageDecrease();*/

	chapter = "TUTORIAL";

	std::cout << "enter your name and the story will begin (you can not change this once enter has been pressed)\n";
	std::cin >> input_string;
	player.setName(input_string);
	std::cout << "\nlet's begin(press enter to continue)";
	std::this_thread::sleep_for(std::chrono::microseconds(200000));

	std::cin.get();
	std::cin.get();

	system("cls");
	std::cout << "DEMO\n";

	std::this_thread::sleep_for(std::chrono::microseconds(500000));
	//cool write out stile
	for (int i = 0; i < chapter.length(); i++)
	{
		std::cout << chapter[i];
		std::this_thread::sleep_for(std::chrono::microseconds(350000));
	}
	std::this_thread::sleep_for(std::chrono::microseconds(3000000 - 400000));
	system("cls");
	std::cout << "DEMO\n";

	std::this_thread::sleep_for(std::chrono::microseconds(200000));

	tutorial_begins:
	std::cout << "Oh, finally, your awake";
	std::cin.get();
	std::cout << "\nyou've got a letter from the army, ordering you to travel to the capital, this shouldn't be a problem for an ex-knight\nlike you";
	std::cin.get();
	std::cout << "\nbut first, we shall eat, here";

	heal();
	

	std::cout << "\nGreat";
	std::cin.get();
	std::cout << "before you go, I think we should warm up in a figt";
	std::cin.get();
	//training dummy segment
	combatTutorial();

	std::cout << "\nyou're a litle rusty, but it probebly fine";
	std::cin.get();
	std::cout << "time for you to leave, I guess";
	std::cin.get();
	std::this_thread::sleep_for(std::chrono::microseconds(200000));
	system("cls");
	std::cout << "bye";
	std::this_thread::sleep_for(std::chrono::microseconds(2000000));
	system("cls");
	//lämnar, tutorial slutar
	
}


//spelar ingen roll
void game::run()
{
	std::cout << "DEMO\n";
	crossRoad();
	std::cout << "out of crossorad";
	/*
	std::cout << " int run";
	srand((unsigned)time(0));
	while (true)
	{

		combat();

		std:: cin.get();
		return;
	}




	
	std::cout << "PRESS ENTER TO START\n";
	std::cin.get();
	combat();
	std::cin.get();
	*/
}

//combatsaker
void game::combatTutorial()
{

	std::cout << "\nYou place youself infront of a tringing dummy\nWhen you face an enemy you will have two options.";
	std::this_thread::sleep_for(std::chrono::microseconds(200000));
	std::cout << "\n1. fight, and 2. flee";
	std::this_thread::sleep_for(std::chrono::microseconds(200000));
	std::cout << "\nTry fighting it";


	//om motståndaren hp är mer än 0
	for (int i = 0; i < 1; i++)
	{
		player_did_wrong:
		std::cout << "\nwhat do you do ? \n" << "1. attack enemy\n2. flee\n";
		std::cin >> input_string;
		if (input_string == "1")
		{
			input_int = std::stoi(input_string);
			switch (input_int)
			{
			case 1:
				roller = (rand() % 3) + 1;
				switch (roller)
				{
				case 1:
					rollerNumber = 0.9;
					break;

				case 2:
					rollerNumber = 1;
					break;

				case 3:
					rollerNumber = 1.1;
					break;

				default:
					return;
				}
				//attack
				playerAttack();
				if (enemy1.getHealth() < 1)
				{

					std::cout << "Your enemy perished \nYou won";
					break;
				}
				std::cout << "You attacked with your " << player.getWeaponName() << " for " << round(player.getDamage() * rollerNumber) << " damage\nThe enemy health is now " << enemy1.getHealth() << "\n";

				std::cout << "great, I can see that you haven't fighted in a while, therefore are a little of\nbut it's probebly fine\nAfter you attack, the enemy will attack you.";



				dummyAttack();
				if (player.getHealth() < 1)
				{
					std::cout << "You got killed in action\nyou lost";
					break;
				}
				break;

				//escape option
			case 2:
			{
				std::cout << "I gusess We'll call it a draw";
				return;
			}


			}

		}
		else
		{
			std::cout << "no";
			goto player_did_wrong;
		}

	}
	std::cout << "Sometimes ofcorse, you will face enemyes that's stronger than you\n";
	std::this_thread::sleep_for(std::chrono::microseconds(200000));
	std::cout << "If this happens, I recomend you flee, try it";

	while (enemy1.getHealth() > 0 && player.getHealth() > 0)
	{
		std::cout << "\nwhat do you do ? \n" << "1. attack enemy\n2. flee\n";
		std::cin >> input_string;
		if (input_string == "2")
		{
			input_int = std::stoi(input_string);
			switch (input_int)
			{
			case 2:
			{
				std::cout << "You saftly escaoed from the battle";
				return;
			}
			}
		}
		else
		{
			std::cout << "wrong try again";
		}
	}
}


void game::combat()
{
	std::cout << "\n an enemy appears " << enemy1.getName() << "\n hp:" << enemy1.getHealth() << "\n Damage:" << enemy1.getDamage();
	std::cout << "\n\n you \n hp: " << player.getHealth() << "\n damage: " << player.getDamage() << "\n\n";

	//om motståndaren hp är mer än 0
	while (enemy1.getHealth() > 0 && player.getHealth() > 0)
	{
		
		std::cout << "\nwhat do you do ? \n" << "1. attack enemy\n2. heal\n3. flee\n";
		std::cin >> input_string;
		if (input_string == "1" || input_string == "2"||input_string == "3")
		{
			input_int = std::stoi(input_string);
			switch (input_int)
			{
			case 1:
				
				//attack
				playerAttack();
				if (enemy1.getHealth() < 1)
				{

					std::cout << "\nThe enemy perished \nYou won";
					break;
				}
				std::cout << "You attacked with your " << player.getWeaponName() << " for " << round(player.getDamage() * rollerNumber) << " damage\nThe enemy health is now " << enemy1.getHealth() << "\n";

				//rollnummer for enemy
				

				enemyAttack();
				break;

			case 2:
			{
				heal();
				enemyAttack();
				break;
			}

			case 3:
			{
				std::cout << "I gusess we'll call it a draw";
				return;
			}


			}

		}
		else 
		{
			std::cout << "no";
		}

		//rollnumber for player


		/*if (input_string == "1")
		{

		}
		else if (input_string == "2")
		{
			//escape

		}
		else if(input_string != 1 || input_string != 2)
		{
			std::cout << "No\n";

		}

		*/
	}
}



void game::playerAttack()
{
	roller = (rand() % 3) + 1;
	switch (roller)
	{
	case 1:
		rollerNumber = 0.9;
		break;

	case 2:
		rollerNumber = 1;
		break;

	case 3:
		rollerNumber = 1.1;
		break;

	default:
		return;
	}
	if (player.getDamage() < enemy1.getProtection())
	{
		std::cout << "the enemys protection is to strong to damage them";
	}
	else
	{
		enemy1.setHealth(enemy1.getHealth() - round((player.getDamage() * rollerNumber * player.getWeapon() - enemy1.getProtection())));
	}	
}



void game::enemyAttack()
{
	roller = (rand() % 3) + 1;
	switch (roller)
	{
	case 1:
		rollerNumber = 0.9;
		break;

	case 2:
		rollerNumber = 1;
		break;
	case 3:
		rollerNumber = 1.1;
		break;
	default:
		return;
	}
	/*std::cout << "enemy damage:" << enemy1.getDamage();
	std::cout << "enemy weapon:" << enemy1.getWeapon();
	std::cout << "roller number:" << rollerNumber;
	std::cout << "player protection:"<<player.getProtection();*/
	if (enemy1.getDamage() > player.getProtection())
	{
		player.setHealth(player.getHealth() - round(((enemy1.getDamage() * rollerNumber * enemy1.getWeapon()) - player.getProtection())));
	}
	else if(enemy1.getDamage() < player.getProtection())
	{
		std::cout << "\nYour protection is so strong that the enemy can hurt you";
	}

	if (player.getHealth() < 1)
	{
		std::cout << "You got killed in action\nyou lost";

	}
	else if(player.getProtection() < enemy1.getDamage())
	{
		std::cout << "\n\nThe enemy attacked you with his " << enemy1.getWeaponName() << " and hit you for " << round(enemy1.getDamage() * rollerNumber) << " damage\n your health is now " << player.getHealth() << "\n";
	}
	
}

void game::dummyAttack()
{
	std::cout << "\nit's a dummy, it can't attack you";
}

void game::heal()
{
	std::cout << "\nWhat will you use?\n1." << apple.getName() << "heals:" << apple.getHeal() << ". Amount:" << apple.getAmount() << "\n2." << wholePig.getName() << " Heal: " << wholePig.getHeal() << " Amount: " << wholePig.getAmount() << "\n";
	std::cin >> input_int;
	switch (input_int)
	{
	case 1:
		player.setHealth(player.getHealth() + apple.getHeal());
		if (player.getHealth() > player.getMaxHealth())
		{
			player.setHealth(player.getMaxHealth());
		}
		std::cout << player.getHealth();
		break;


	case 2:

		break;


	default:

		break;
	}
	
}



//JOBBA HÄR
//JOBBA HÄR
//JOBBA HÄR
//JOBBA HÄR
//JOBBA HÄR
//JOBBA HÄR
//JOBBA HÄR
void game::crossRoad()
{
	srand((unsigned)time(0));
	
	while (int i = 1)
	{
		std::cout << "our player enconters a crossroad, where does he goe?(right or left)\n";
		std::cin >> input_string;
		std::transform(input_string.begin(), input_string.end(), input_string.begin(),
			[](unsigned char c) { return std::tolower(c); });
		if (input_string == "right")
		{
			int rNummer = (rand() % 2) + 1;
			switch (rNummer)
			{
			case 1:
				encounter();
				break;

			case 2:
				mountain();
				break;

			default:
				break;
			}
		}
		else if (input_string == "left")
		{
			int rNummer = (rand() % 2) + 1;
			switch (rNummer)
			{
			case 1:
				encounter();
				break;

			case 2:
				mountain();
				break;

			default:
				break;
			}
		}
		else if (input_string != "right" || input_string != "left")
		{
			std::cout << "not an alternative, test again\n";
		}
	} 	
}

void game::shop()
{
	
}

void game::encounter()
{
	std::cout << "While walking down the road, our player where attacked";
	enemyType = "goblin";
	setEnemy();
	combat();
}



void game::mountain()
{
	std::cout << "the hero hears a roar";
	enemyType = "giant";
	setEnemy();
	combat();
}

void game::setEnemy()
{
	if (enemyType == "dummy")
	{
		enemy1.setName("dummy");
		enemy1.setHealth(200);
		enemy1.setDamage(0);
		enemy1.setProtection(bareChest.getDamageDecrease());
		enemy1.setProtectionName(bareChest.getName());
		enemy1.setWeapon(fist.getDamageIncrease());
		enemy1.setWeaponName(fist.getName());
		enemy1.setMoney(0);
	}

	if(enemyType == "goblin")
	{
		enemy1.setName("goblin");
		enemy1.setHealth(200);
		enemy1.setDamage(20);
		enemy1.setProtection(Tshirt.getDamageDecrease());
		enemy1.setProtectionName(Tshirt.getName());
		enemy1.setWeapon(fist.getDamageIncrease());
		enemy1.setWeaponName(fist.getName());
		enemy1.setMoney(0);
	}

	//inget vapen eller skydd
	if (enemyType == "giant")
	{
		enemy1.setName("giant");
		enemy1.setHealth(1000);
		enemy1.setDamage(250);
		// byt/fixa
		enemy1.setProtection(Tshirt.getDamageDecrease());
		enemy1.setProtectionName(Tshirt.getName());
		enemy1.setWeapon(fist.getDamageIncrease());
		enemy1.setWeaponName(fist.getName());
		enemy1.setMoney(0);
	
	
	}
	if (enemyType == "debug")
	{
		enemy1.setName("debug");
		enemy1.setHealth(9999999999999);
		enemy1.setDamage(1);
		// byt/fixa
		enemy1.setProtection(Tshirt.getDamageDecrease());
		enemy1.setProtectionName(Tshirt.getName());
		enemy1.setWeapon(fist.getDamageIncrease());
		enemy1.setWeaponName(fist.getName());
		enemy1.setMoney(0);


	}
};



/*std::string name = "123";
	int weaponDamage = fist.getDamageIncrease();
	int damage = 50;
	int hp = 200;
	std::string weaponName = fist.getName();
	int protection = 5;
	std::string protectionName = "T-shirt";
	int money = 0;*/



//Different good to have things
/*
Lowercase:
std::transform(input_string.begin(), input_string.end(), input_string.begin(),
		[](unsigned char c) { return std::tolower(c); });


		//räknar mängen ord i stringen chapter
		std::count(chapter.cbegin(), chapter.cend(), ' ') + 1


		tranform string to int
		std::stoi(input_string);




		pausar coden i några sekunder

		std::this_thread::sleep_for(std::chrono::seconds(2));



		Ger ett random float värde mellan 0.9 och 1.1

		srand((unsigned)time(0));														här väljer du mellan vilka tal
		float r = 0.9 + static_cast <float> (rand()) / static_cast <float> (RAND_MAX / (1.1-0.9));


		hur man ger randomnummer mellan 1 och 2 med exempel 

		srand((unsigned)time(0));
	while (true)
	{
		
		int rNummer = (rand() % 2) + 1;
		std::cout << rNummer;
		std::cin.get();
	}

		*/

