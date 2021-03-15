// This Source Code Form is subject to the terms of 
// the Mozilla Public License, v. 2.0. If a copy of 
// the MPL was not distributed with this file, You can 
// obtain one at https://mozilla.org/MPL/2.0/.

#include <stdio.h>
#include <string.h>

class Person {
protected:
    char name[24];
public:
    Person(char *_name) {
		memset(name, 0xCC, 24);
		strcpy(name, _name);
	}
    virtual void work() {
        printf("%s awaits the heat death of the universe\n", name);
    }
};

class Uber1337Haxor : public Person {
public:
    Uber1337Haxor(char *_name) : Person(_name) {}
    virtual void work() {
        printf("%s hax BIOS!\n", name);
    }
};

void main(){
	Person Corey("Corey");
	Person TheDude("TheDude");
	Uber1337Haxor Xeno("Xeno");
	Corey.work();
	Xeno.work();
	TheDude.work():
}