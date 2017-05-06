#include "common.h"
#include "battle.h"
#include "heroPlayer.h"
#include "monsterList.h"

void main() {
	
	int menu2;
	Console::initialize();
	char hero[15];
	char name[50];

	printf("Input player character name: ");
	gets(name);fflush(stdin);

	//do{
	//	char confirm[2];
	//	do{
	//		Console::clear();
	//		printf("---- Choose your class ---- ");
	//		printf("\n1. Assassin\n2. Paladin\n3. Barbarian\nChoose Hero: ");
	//		gets(hero);fflush(stdin);
	//	}while(strcmpi(hero,"assassin")!=0 && strcmpi(hero,"paladin")!=0 && strcmpi(hero,"barbarian")!=0);
	//	
	//	Console::clear();
	//	if(strcmpi(hero,"assassin")==0){
	//		printf("Class : Assassin");
	//		printf("\n\n===============================\n");
	//		Console::delay(25);
	//		char *text = "Fast moving and high agility make Assassin hard to hit and likely to land several small damages to enemy before enemy can move. Assassin suffers for weak protective gear and will easily go down by several devastating hits, assuming if the enemy is capable of hitting the Assassin. Because Assassin favors evading enemy hit entirely, it is hard for enemy to hit a Assassin. Assassin is likely to land critical hit, thanks to its high dexterity. Assassin will often encounter difficulty when facing enemies with heavy armor because of Assassin low damage output. This is why Assassin relies heavily on critical hits, bypassing enemy armor.";
	//		for(int i=0;i<strlen(text);i++){
	//			Console::printf("%c",text[i]);
	//			Console::delay(30);
	//		}
	//		printf("\n\n===============================\n");
	//		printf("Strength	: 7\n");
	//		printf("Endurance	: 7\n");
	//		printf("Agility		: 13\n");
	//		printf("Dexterity	: 12\n");
	//	}
	//	else if(strcmpi(hero,"paladin")==0){
	//		printf("Class : Paladin");
	//		printf("\n\n===============================\n");
	//		Console::delay(25);
	//		char *text = "Paladin is a balanced class that is good at both offensive and defensive. It can use one-handed weapon and wear heavy armor. Its main drawback is its lack of stamina due to heavy armor penalty. Paladin often cannot survive prolonged battle unless its stamina restored. Its faith in God makes paladin has the highest strength of all classes. While relatively slower than Assassin, paladin packs both high damage and ample chance of critical hit. Its heavy armor makes enemy attack feels like gentle touch.";
	//		for(int i=0;i<strlen(text);i++){
	//			Console::printf("%c",text[i]);
	//			Console::delay(30);
	//		}
	//		printf("\n\n===============================\n");
	//		printf("Strength	: 14\n");
	//		printf("Endurance	: 12\n");
	//		printf("Agility		: 6\n");
	//		printf("Dexterity	: 8\n");
	//	}
	//	else{
	//		printf("Class : Barbarian");
	//		printf("\n\n===============================\n");
	//		Console::delay(25);
	//		char *text = "Very brutal at offensive while sacrificing its protection, barbarian has slow but deadly attack. It is likely to endure the longest battle, thanks to its high stamina. Barbarian has the highest endurance and hit point and can withstand devastating hits from enemy. Barbarian is able to use all kind of weapons including two-handed weapon but what a disappointment, barbarian cannot wear heavy armor.";
	//		for(int i=0;i<strlen(text);i++){
	//			Console::printf("%c",text[i]);
	//			Console::delay(30);
	//		}
	//		printf("\n\n===============================\n");
	//		printf("Strength	: 13\n");
	//		printf("Endurance	: 15\n");
	//		printf("Agility		: 5\n");
	//		printf("Dexterity	: 6\n");
	//	}
	//}while(Console::confirm("Are you sure about that ? ")==false);
	Heroes userHero("assassin");
do{
	system("cls");
	printf("=============== Player Status ===============\n");
	printf("Character: '%s' Level %d %s\n",name,userHero.getLevel(),hero);

	printf("Strength :  %-10d \t Base Damage  :   %d\n",userHero.getStrength(),userHero.getDamage());
	printf("Endurance:  %-10d \t Chance to Hit: %d%%\n",userHero.getEndurance(),userHero.getChanceToHit());
	printf("Agility  : %-10d \t Evade        :  %d%%\n",userHero.getAgility(),userHero.getEvade());
	printf("Dexterity: %-12d  Speed        : %d\n",userHero.getDexterity(),userHero.getSpeed());
	printf("                        Max Health   : %d\n",userHero.getMaxHealth());
	printf("Gold  :  %d           Max Stamina  : %d\n",userHero.getGold(),userHero.getMaxStamina());
	printf("Exp   :     %d/ 1000     Armor        :   %d\n\n\n",userHero.getExp(),userHero.getArmor());

	printf("============== Tristam Town ==============\n");
	printf(" 1. Go To Battle\n");
	printf(" 2. Visit Tristam Shop\n");
	printf(" 3. View Inventory\n");
	printf(" 4. View Equipment\n");
	printf(" 5. Back to Main Menu\n");
	printf("Enter your choice [1 to 5]: ");
	scanf("%d",&menu2);fflush(stdin);
	if(menu2==1){
		Heroes *opHero = new Heroes("paladin");
		Battle::start(userHero,*opHero);
	}

}while(menu2!=5);


}
