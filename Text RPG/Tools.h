#pragma once
#include <string>

//Vapenskrit
struct classWeapon
{
private:
	std::string name = "";
	int damageIncrease = 0;


public: //byt ordning på int och string


#pragma region getThings
	virtual std::string getName()
	{
		return name;
	}
	virtual int getDamageIncrease()
	{
		return damageIncrease;
	}
#pragma endregion getThings


#pragma region setThings
	virtual void setName(std::string newName)
	{
		name = newName;
	}

	virtual void setDamageIncreaser(int newDamageIncrease)
	{
		damageIncrease = newDamageIncrease;
	}

#pragma endregion setThings

};

struct classStick : public classWeapon
{
private:
	std::string name = "stick";
	int damageIncrease = 2;


public:
#pragma region getThings
	virtual std::string getName()
	{
		return name;
	}
	virtual int getDamageIncrease()
	{
		return damageIncrease;
	}
#pragma endregion getThings


#pragma region setThings
	virtual void setName(std::string newName) override
	{
		name = newName;
	}

	virtual void setDamageIncreaser(int newDamageIncrease) override
	{
		damageIncrease = newDamageIncrease;
	}

#pragma endregion setThings

	/*#pragma region getThings
		std::string getName() override
		{
			return name;
		}
		int getDamageIncrease() override
		{
			return damageIncrease;
		}
	#pragma endregion getThings


	#pragma region setThings
		virtual void setName(std::string newName) override
		{
			name = newName;
		}
		virtual void setDamageIncreaser(int newDamageIncrease) override
		{
			damageIncrease = newDamageIncrease;
		}

	#pragma endregion setThings
	*/
};



struct classFist : public classWeapon
{
private:
	std::string name = "fist";
	int damageIncrease = 1;


public:
#pragma region getThings
	virtual std::string getName() override
	{
		return name;
	}
	virtual int getDamageIncrease() override
	{
		return damageIncrease;
	}
#pragma endregion getThings


#pragma region setThings
	virtual void setName(std::string newName) override
	{
		name = newName;
	}

	virtual void setDamageIncreaser(int newDamageIncrease) override
	{
		damageIncrease = newDamageIncrease;
	}

#pragma endregion setThings

	/*#pragma region getThings
		std::string getName() override
		{
			return name;
		}
		int getDamageIncrease() override
		{
			return damageIncrease;
		}
	#pragma endregion getThings


	#pragma region setThings
		virtual void setName(std::string newName) override
		{
			name = newName;
		}
		virtual void setDamageIncreaser(int newDamageIncrease) override
		{
			damageIncrease = newDamageIncrease;
		}

	#pragma endregion setThings
	*/
};



//Skyddskript
struct classProtection
{
private:
	std::string name = "";
	int damageDecrease = 0;
	int maxHp = 0;

public:
#pragma region getThings
	virtual std::string getName()
	{
		return name;
	}
	virtual int getDamageDecrease()
	{
		return damageDecrease;
	}
	virtual int getMaxHealth()
	{
		return maxHp;
	}
#pragma endregion getThings


#pragma region setThings
	virtual void setName(std::string newName)
	{
		name = newName;
	}

	virtual void setDamageIncreaser(int newDamageDecrease)
	{
		damageDecrease = newDamageDecrease;
	}

	virtual void setMaxHealth(int newMaxHealth)
	{
		maxHp = newMaxHealth;
	}
#pragma endregion setThings

};


struct classTshirt : public classProtection
{
private:
	std::string name = "Tshirt";
	int damageDecrease = 1;
	int maxHp = 200;

public:
#pragma region getThings
	virtual std::string getName()
	{
		return name;
	}
	virtual int getDamageDecrease()
	{
		return damageDecrease;
	}
	virtual int getMaxHealth()
	{
		return maxHp;
	}
#pragma endregion getThings


#pragma region setThings
	virtual void setName(std::string newName) override
	{
		name = newName;
	}

	virtual void setDamageIncreaser(int newDamageDecrease)override
	{
		damageDecrease = newDamageDecrease;
	}

	virtual void setMaxHealth(int newMaxHealth) override
	{
		maxHp = newMaxHealth;
	}
#pragma endregion setThings

};


struct classBareChest : public classProtection
{
private:
	std::string name = "Bare Chest";
	int damageDecrease = 0;
	int maxHp = 200;

public:
#pragma region getThings
	virtual std::string getName()
	{
		return name;
	}
	virtual int getDamageDecrease()
	{
		return damageDecrease;
	}
	virtual int getMaxHealth()
	{
		return maxHp;
	}
#pragma endregion getThings


#pragma region setThings
	virtual void setName(std::string newName) override
	{
		name = newName;
	}

	virtual void setDamageIncreaser(int newDamageDecrease)override
	{
		damageDecrease = newDamageDecrease;
	}

	virtual void setMaxHealth(int newMaxHeatlh) override
	{
		maxHp = newMaxHeatlh;
	}
#pragma endregion setThings

};

