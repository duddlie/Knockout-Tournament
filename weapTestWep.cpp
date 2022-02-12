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
	weapon* w1 = new lightweapon("Bow", 3, 1);
	weapon* w4 = new lightweapon();

	cout<<w1.get_name()<<endl
	cout<<w1.get_damage()<<endl
	cout<<w1.get_wepcount()<<endl
	
	cout<<w4.get_name()<<endl
	cout<<w4.get_damage()<<endl
	cout<<w4.get_wepcount()<<endl
	
	
