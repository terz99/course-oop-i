#ifndef _CREATURE_H
#define _CREATURE_H

class Creature {
	public:
		Creature();
		void run() const;
		~Creature();

	protected:
		int distance;
};

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;
		~Wizard();

	private:
		int distFactor;
};

class Warrior : public Creature{

public:
	Warrior();
	void fight();
	~Warrior();

private:
	int strengthFactor;
};

class Druid : public Creature {

public:
	Druid();
	void regenerate();
	~Druid();
private:
	int mana;
};

#endif
