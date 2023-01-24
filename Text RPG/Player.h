#pragma once
#include <string>
#include "Tools.h"



extern classFist fist;

//antagligen bugg
//classWeapon weapon;


struct classPlayer
{
private:
	
	std::string name = "123";
	int weaponDamage = fist.getDamageIncrease();
	int damage = 50;
	int hp = 200;
	int maxHp = 200;
	std::string weaponName = fist.getName();
	int protection = 5;
	std::string protectionName = "T-shirt";
	int money = 0;
	
	/*std::string name = "";
	int damage = 50;
	int hp = 200;
	std::string weaponName = "";
	int protection;
	std::string protectionName = "";
	int money = 0;
	int weaponDamage;

	
	
	enemy.createEnemy(std:: string name)
	{
		if(name == "goblin")
		{
		enemy.setHealth=goblinHealth();
		}

	}

	*/

public:
#pragma region getThings
	virtual std::string getName()
	{
		return name;
	}
	virtual std::string getWeaponName()
	{
		return weaponName;
	}
	virtual std::string getProtectionName()
	{
		return protectionName;
	}
	virtual int getDamage()
	{
		return damage;
	}
	virtual int getHealth()
	{
		return hp;
	}
	virtual int getMaxHealth()
	{
		return  maxHp;
	}
	virtual int getWeapon()
	{
		return weaponDamage;
	}
	virtual int getProtection()
	{
		return protection;
	}
	virtual int getMoney()
	{
		return money;
	}
#pragma endregion getThings


	//set shit
#pragma region setThings

	virtual void setName(std::string newName)
	{
		name = newName;
	}
	virtual void setWeaponName(std::string newWeaponName)
	{
		weaponName = newWeaponName;
	}
	virtual void setProtectionName(std::string newProtectionName)
	{
		protectionName = newProtectionName;
	}
	virtual void setHealth(int newHealth)
	{
		hp = newHealth;
	}
	virtual void setMaxHealth(int newMaxHealth)
	{
		maxHp = newMaxHealth;
	}
	virtual void setDamage(int newDamage)
	{
		damage = newDamage;
	}
	virtual void setWeapon(int newWeaponDamage)
	{

		weaponDamage = newWeaponDamage;

	}
	virtual void setProtection(int newProtection)
	{
		protection = newProtection;
	}
	virtual void setMoney(int newMoney)
	{
		money = newMoney;
	}
#pragma endregion setThing

};

struct basicEnemy : public classPlayer
{
	std::string name = "basic";
	int damage = 20;
	int hp = 100;
	int maxHp = 200;
	std::string weaponName = "";
	int protection = 0;
	std::string protectionName = "";
	int money = 0;
	int weaponDamage =0;
	


public:
#pragma region getThings
	virtual std::string getName()
	{
		return name;
	}
	virtual std::string getWeaponName()
	{
		return weaponName;
	}
	virtual std::string getProtectionName()
	{
		return protectionName;
	}
	virtual int getDamage()
	{
		return damage;
	}
	virtual int getHealth()
	{
		return hp;
	}
	virtual int getMaxHealth()
	{
		return maxHp;
	}
	virtual int getWeapon()
	{
		return weaponDamage;
	}
	virtual int getProtection()
	{
		return protection;
	}
	virtual int getMoney()
	{
		return money;
	}
#pragma endregion getThings


	//set shit
#pragma region setThings

	virtual void setName(std::string newName) override
	{
		name = newName;
	}
	virtual void setWeaponName(std::string newWeaponName) override
	{
		weaponName = newWeaponName;
	}
	virtual void setProtectionName(std::string newProtectionName) override
	{
		protectionName = newProtectionName;
	}
	virtual void setHealth(int newHealth) override
	{
		hp = newHealth;
	}
	virtual void setMaxHealth(int newMaxHealth) override
	{
		maxHp = newMaxHealth;
	}
	virtual void setDamage(int newDamage) override
	{
		damage = newDamage;
	}
	virtual void setWeapon(int newWeaponDamage) override
	{
		weaponDamage = newWeaponDamage;
	}
	virtual void setProtection(int newProtection) override
	{
		protection = newProtection;
	}
	virtual void setMoney(int newMoney) override
	{
		money = newMoney;
	}
#pragma endregion setThing

};


