#pragma once
#include <iostream>

struct  classFood
{
private:
	std::string name = "";
	int heal = 0;
	int amount = 0;

public:
#pragma region get thing

	virtual std::string getName()
	{
		return name;
	}

	virtual int getHeal()
	{
		return heal;
	}
	virtual int getAmount()
	{
		return amount;
	}
#pragma endregion get thing


#pragma region set thing

	virtual void setName(std::string newName)
	{
		name = newName;
	}

	virtual void setHeal(int newHeal)
	{
		heal = newHeal;
	}
#pragma endregion set thing

};

struct classApple : public classFood
{
private:
	std::string name = "apple";
	int heal = 10;
	int amount = 5;

public:
#pragma region get thing

	virtual std::string getName() override
	{
		return name;
	}

	virtual int getHeal() override
	{
		return heal;
	}
	
	virtual int getAmount() override
	{
		return amount;
	}
#pragma endregion get thing


	//kanske behöver override
#pragma region set thing

	virtual void setName(std::string newName)
	{
		name = newName;
	}

	virtual void setHeal(int newHeal)
	{
		heal = newHeal;
	}
	virtual void setAmount(int newAmount)
	{
		amount = newAmount;
	}
#pragma endregion set thing

};

struct classWholePig : public classFood
{
private:
	std::string name = "A Fucking WHole Pig";
	int heal = 300;
	int amount = 1;

public:
#pragma region get things
	virtual std::string getName() override
	{
		return name;
	}

	virtual int getHeal() override
	{
		return heal;
	}

	virtual int getAmount() override
	{
		return amount;
	}
#pragma endregion get things

#pragma region set things
	virtual void setName(std::string newName)
	{
		name = newName;
	}

	virtual void setHeal(int newHeal)
	{
		heal = newHeal;
	}

	virtual void setAmount(int newAmount)
	{
		amount = newAmount;
	}
#pragma endregion set things
};