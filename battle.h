#ifndef BATTLE_H
#define BATTLE_H

#include "common.h"
#include "heroPlayer.h"

class Battle{
public:
	/** Initialize the battle, receives 2 parameters:
	 @param a the player 
	 @param b the enemy
	 */
	static void initialize(Heroes &a,Heroes &b){
		a.setHealth(a.getMaxHealth());
		b.setHealth(b.getMaxHealth());
		a.setStamina(a.getMaxStamina());
		b.setStamina(b.getMaxStamina());
	}
	static void start(Heroes &a,Heroes &b){
		int ctrA=0,ctrB=0; 
		Battle::initialize(a,b);
		Console::printf("Health:\nYou: %d \t Op: %d\n",a.getHealth(),b.getHealth());
		Console::printf("Stamina:\nYou: %d \t Op: %d\n\n",a.getStamina(),b.getStamina());
		do{
			ctrA+=a.getSpeed();
			ctrB+=b.getSpeed();
			if(ctrA>=1000){
				ctrA-=1000;
				Battle::action(a,b);
				Console::printf("Health:\nYou: %d \t Op: %d\n",a.getHealth(),b.getHealth());
				Console::printf("Stamina:\nYou: %d \t Op: %d\n\n",a.getStamina(),b.getStamina());
				Console::delay(50);
			}
			else if(ctrB>=1000){
				ctrB-=1000;
				Battle::action(b,a);
				Console::printf("Health:\nYou: %d \t Op: %d\n",a.getHealth(),b.getHealth());
				Console::printf("Stamina:\nYou: %d \t Op: %d\n\n",a.getStamina(),b.getStamina());
				Console::delay(50);
			}
		}while(b.getHealth()>0&&a.getHealth()>0);
		if(a.getHealth()<=0){
			Console::println("You lose");
		}
		else{
			Console::println("You win");
		}
		Console::println("Done");
		getchar();
	}
	static void action(Heroes &attacker,Heroes &target){
		int CH;
		if(attacker.getStamina()<=0){
					Console::printf("Hero rested\n");
					attacker.rest();
				}
				else{
					CH=attacker.getChanceToHit()-target.getEvade();
					if(CH<10)CH=10;
					if(CH<100){
						int x=rand()%100;
						if(x<CH){
							int dmg =attacker.attack(target);
							Console::printf("Hero attacked %d damage\n",dmg);
						}
						else{
							Console::printf("Hero missed\n");
						}
					}
					else{
						int x=rand()%CH+1;
						if(x < 100){
							int dmg =attacker.attack(target);
							Console::printf("Hero attacked %d damage\n",dmg);
						}
						else{
							int dmg = attacker.attackCrit(target);
							Console::printf("Hero crit %d damage\n",dmg);
						}
					}
				}
	}
};

#endif