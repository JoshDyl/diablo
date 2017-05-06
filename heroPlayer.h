
#ifndef HEROPLAYER_H
#define HEROPLAYER_H

#include "common.h"
#include <string.h>

class Heroes{
private:
	int strength;
	int endurance;
	int agility;
	int dexterity;
	int damage;
	int chanceToHit;
	int evade;
	int speed;
	int speedCtr;
	int maxHealth;
	int maxStamina;
	int armor;
	int health;
	int stamina;
	int goldcoin;
	int experience;
	int level;
	int gold;
	int exp;
public:
	Heroes(char Hero[15]){
			if(strcmpi(Hero,"assassin")==0){
				this->strength = 7;
				this->endurance = 7;
				this->agility = 13;
				this->dexterity = 12;
				this->damage = 3;
				this->chanceToHit = 104;
				this->evade = 26;
				this->speed = 201;
				this->maxHealth = 105;
				this->maxStamina = 115;
				this->armor = 0;
				this->gold = 2000;
				this->exp = 0;
				this->level =1;
			}
			else if(strcmpi(Hero,"paladin")==0){
				this->strength = 14;
				this->endurance = 12;
				this->agility = 6;
				this->dexterity = 8;
				this->damage = 3;
				this->chanceToHit = 96;
				this->evade = 12;
				this->speed = 154;
				this->maxHealth = 190;
				this->maxStamina = 178;
				this->armor = 0;
				this->gold = 2000;
				this->exp = 0;
				this->level =1;
			}
			else{
				this->strength = 13;
				this->endurance = 15;
				this->agility = 5;
				this->dexterity = 6;
				this->damage = 3;
				this->chanceToHit = 92;
				this->evade = 10;
				this->speed = 143;
				this->maxHealth = 215;
				this->maxStamina = 201;
				this->armor = 0;
				this->gold = 2000;
				this->exp = 0;
				this->level =1;
			}
		}

	int getStrength(){
		return this->strength;
	}

	int getEndurance(){
		return endurance;
	}

	int getAgility(){
		return agility;
	}

	int getDexterity(){
		return dexterity;
	}
	void setDamage(int damage){
		this->damage = damage;
	}
	int getDamage(){
		return damage;
	}
	void setChanceToHit(int chanceToHit){
		this->chanceToHit = chanceToHit;
	}
	int getChanceToHit(){
		return chanceToHit;
	}
	void setEvade(int evade){
		this->evade = evade;
	}
	int getEvade(){
		return evade;
	}
	void setSpeed(int speed){
		this->speed = speed;
	}
	int getSpeed(){
		return speed;
	}
	void setSpeedCtr(int speed){
		this->speedCtr=speed;
	}
	void addSpeedCtr(int speed){
		this->speedCtr=this->speedCtr+speed;
	}
	int getSpeedCtr(){
		return speedCtr;
	}
	void setMaxHealth(int maxHealth){
		this->maxHealth = maxHealth;
	}
	int getMaxHealth(){
		return maxHealth;
	}
	void setMaxStamina(int maxStamina){
		this->maxStamina = maxStamina;
	}
	int getMaxStamina(){
		return maxStamina;
	}
	void setArmor(int armor){
		this->armor = armor;
	}
	int getArmor(){
		return armor;
	}
	void setHealth(int health){
		this->health = health;
	}
	void addHealth(int health){
		this->health += health;
	}
	int getHealth(){
		return health;
	}
	void setStamina(int stamina){
		this->stamina = stamina;
	}
	void addStamina(int stamina){
		this->stamina = this->stamina+ stamina;
	}
	int getStamina(){
		return stamina;
	}
	void setGoldcoin(int goldcoin){
		this->goldcoin = goldcoin;
	}
	int getGoldcoin(){
		return goldcoin;
	}
	void setExperience(int experience){
		this->experience = experience;
	}
	int getExperience(){
		return experience;
	}
	void setLevel(int level){
		this->level = level;
	}
	int getLevel(){
		return level;
	}
	void setGold(int gold){
		this->gold = gold;
	}
	int getGold(){
		return gold;
	}
	void setExp(int exp){
		this->exp = exp;
	}
	int getExp(){
		return exp;
	}
	void rest(){
		this->stamina+=50;
	}
	int attack(Heroes &a){
		this->stamina=this->stamina-(10+this->armor);
		int minDmg=this->damage-a.getArmor();
		int maxDmg=this->damage*(1+this->strength/20)-a.getArmor();
		int diff=maxDmg-minDmg;
		diff=100;
		diff=rand()%diff;
		int dmg;
		if(diff==0)dmg=minDmg;
		else dmg=minDmg+diff;
		a.addHealth(-dmg);
		return dmg;
	}
	int attackCrit(Heroes &a){
		this->stamina=this->stamina-(10+this->armor);
		int dmg = this->damage*(1+this->strength/20);
		a.addHealth(-dmg);
		return dmg;
	}
};



#endif