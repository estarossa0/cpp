#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include <unistd.h>


int main()
{
Squad *vlc = new Squad;

	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			vlc->push(new TacticalMarine);
		} else {
			vlc->push(new AssaultTerminator);
		}
	}

	for (int i = 0; i < vlc->getCount(); ++i) {
		ISpaceMarine *cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	delete vlc;
}
