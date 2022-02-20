#include <iostream>

using namespace std;

class Weapon abstract
{
public:
	virtual void ShowWeapon() = 0;
	virtual void Action1() = 0;
	virtual void Action2() = 0;	
};
class Knife : public Weapon
{
public:
	virtual void ShowWeapon() override
	{
		cout << "You choose - Knife" << endl;
	}
	virtual void Action1() override
	{
		cout << "Aiming" << endl;
	}
	virtual void Action2() override
	{
		cout << "Hit by knife" << endl;
	}	
};
class Pistol : public Weapon
{
public:
	virtual void ShowWeapon() override
	{
		cout << "You choose - Pistol" << endl;
	}
	virtual void Action1() override
	{
		cout << "Aiming by Pistol" << endl;
	}
	virtual void Action2() override
	{
		cout << "Shot by pistol - " << "Bah!" << endl;
	}
};
class Shortgun : public Weapon
{
public:
	virtual void ShowWeapon() override
	{
		cout << "You choose - Shotgun" << endl;
	}
	virtual void Action1() override
	{
		cout << "Aiming by Shortgun" << endl;
	}
	virtual void Action2() override
	{
		cout << "Shot by Shortgun - " << "Babah!" << endl;
	}
};
class SniperRifle : public Weapon
{
public:
	virtual void ShowWeapon() override
	{
		cout << "You choose - SniperRifle" << endl;
	}
	virtual void Action1() override
	{
		cout << "Aiming by SniperRifle" << endl;
	}
	virtual void Action2() override
	{
		cout << "Shot by SniperRifle -" << "Booh" << endl;
	}
};
class Carbine : public Weapon
{
public:
	virtual void ShowWeapon() override
	{
		cout << "You choose - Carbine" << endl;
	}
	virtual void Action1() override
	{
		cout << "Aiming by Carbine" << endl;
	}
	virtual void Action2() override
	{
		cout << "Shot by Carbine - " << "Boobooh!" << endl;
	}
};
class MachineGun : public Weapon
{
public:
	virtual void ShowWeapon() override
	{
		cout << "You choose - MacnineGun" << endl;
	}
	virtual void Action1() override
	{
		cout << "Aiming by MachineCun" << endl;
	}
	virtual void Action2() override
	{
		cout << "Shot by MachineGun - " << "Bah!Bah!Bah!...." << endl;
	}
};
class Crossbow : public Weapon
{
public:
	virtual void ShowWeapon() override
	{
		cout << "You choose - Crossbow" << endl;
	}
	virtual void Action1() override
	{
		cout << "Aiming by Crossbow" << endl;
	}
	virtual void Action2() override
	{
		cout << "Shot by Crossbow" << "Shuh!" << endl;
	}
};

class ChangeWeapon
{
	unsigned int x;
public:
	void Change()
	{
		cout << "For changing weapon put number: ";
		cin >> x;
		if (x < 7)
		{
			switch (x)
			{
			case 0:
				cout << "Your choose Knife.";
				break;
			case 1:
				cout << "Your choose Pistol.";
				break;
			case 2:
				cout << "Your choose ShorgGun.";
				break;
			case 3:
				cout << "Your choose SniperRifle.";
				break;
			case 4:
				cout << "Your choose Carbine.";
				break;
			case 5:
				cout << "Your choose MachineGun.";
				break;
			case 6:
				cout << "Your choose Crossbow.";
				break;
			}
		}
		else
			cout << "You can't change the weapon!!!" << endl;
	}
};
int main()
{
	Carbine c;
	c.ShowWeapon();
	c.Action1();
	c.Action2();
}