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
	lightweapon* rw1 = new lightweapon("Bow", 3, 1);
	lightweapon* rw4 = new lightweapon();

	cout<<rw1.get_name()<<endl
	cout<<rw1.get_damage()<<endl
	cout<<rw1.get_wepcount()<<endl
	
	cout<<rw4.get_name()<<endl
	cout<<rw4.get_damage()<<endl
	cout<<rw4.get_wepcount()<<endl
	
	
