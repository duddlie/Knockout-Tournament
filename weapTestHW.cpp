#include <iostream>
#include <string>
#include "players.h"
#include "weapons.h"
#include "heavyweapon.h"
#include "lightweapon.h"
#include "rangeweapon.h"
using namespace std;
int main(){

// creating the light weapon objects
	lightweapon* hw1 = new lightweapon("Axe", 3, 1);
	lightweapon* hw4 = new lightweapon();

	cout<<hw1.get_name()<<endl
	cout<<hw1.get_damage()<<endl
	cout<<hw1.get_wepcount()<<endl
	
	cout<<hw4.get_name()<<endl
	cout<<hw4.get_damage()<<endl
	cout<<hw4.get_wepcount()<<endl
	
	
