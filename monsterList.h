
#ifndef MONSTERLIST_H
#define MONSTERLIST_H

#include "common.h"
#include <string.h>

class Monster{
private:
	char monsterName[20];
	int level;
	int rewards;
	int damage;
	int chanceToHit;
	int evade;
	int speed;
	int maxHealth;
	int armor;
	int exp;
	int offense;
	int defence;
public:
	void setMonsterName(char monsterName[]){
		strcpy(this->monsterName,monsterName);
	}
	void setLevel(int level){
		this->level=level;
	}
	void setRewards(int rewards){
		this->rewards=rewards;
	}
	void setDamage(int damage){
		this->damage=damage;
	}
	void setChanceToHit(int chanceToHit){
		this->chanceToHit=chanceToHit;
	}
	void setEvade(int evade){
		this->evade=evade;
	}
	void setSpeed(int speed){
		this->speed=speed;
	}
	void setMaxHealth(int maxHealth){
		this->maxHealth=maxHealth;
	}
	void setArmor(int armor){
		this->armor=armor;
	}
	void setExp(int exp){
		this->exp=exp;
	}
	void setOffense(int offense){
		this->offense=offense;
	}
	void setDefence(int defence){
		this->defence=defence;
	}
	char* getMonsterName(){
		return monsterName;
	}
	int getLevel(){
		return level;
	}
	int getRewards(){
		return rewards;
	}
	int getChanceToHit(){
		return chanceToHit;
	}
	int getDamage(){
		return damage;
	}
	int getEvade(){
		return evade;
	}
	int getSpeed(){
		return speed;
	}
	int getMaxHealth(){
		return maxHealth;
	}
	int getArmor(){
		return armor;
	}
	int getExp(){
		return exp;
	}
	int getOffense(){
		return offense;
	}
	int getDefence(){
		return defence;
	}
};
//
//class MonsterList{
//private:
//	char monsterName[20];
//	int level;
//	int rewards;
//	int damage;
//	int chanceToHit;
//	int evade;
//	int speed;
//	int maxHealth;
//	int armor;
//	int exp;
//	int offense;
//	int defence;
//	
//public:
//	MonsterArrList(){
//		FILE *monster;
//		monster = ("monster.txt","r");
//	}
//}

//sscanf(string,"%s,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",this->level,this->rewards,this->damage,this->chanceToHit,this->evade,this->speed,this->maxHealth,this->armor,this->exp,this->offense,this->defence);
		


#endif