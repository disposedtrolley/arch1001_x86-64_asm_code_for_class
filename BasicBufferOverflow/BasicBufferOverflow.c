// This Source Code Form is subject to the terms of 
// the Mozilla Public License, v. 2.0. If a copy of 
// the MPL was not distributed with this file, You can 
// obtain one at https://mozilla.org/MPL/2.0/.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lame(__int64 value){
	__int64 array1[4];
	__int64 array2[4];
	array2[0] = array2[1] = array2[2] = array2[3] = value;
	memcpy(&array1, &array2, 4 * sizeof(__int64));
	return 1;
}

int lame2(__int64 size, __int64 value){
	__int64 array1[4];
	__int64 array2[4];
	array2[0] = array2[1] = array2[2] = array2[3] = value;
	memcpy(&array1, &array2, size * sizeof(__int64));
	return 1;
}

void AwesomeSauce(){
	printf("Awwwwwww yeaaahhhhh! All awesome, all the time!\n");
}

int main(unsigned int argc, char ** argv){
	__int64 size, value;
	size = _strtoi64(argv[1], "", 10);
	value = _strtoi64(argv[2], "", 16);

	if(!lame(value) || !lame2(size,value)){
		AwesomeSauce();
	}
	else{
		printf("I am soooo lame :(\n");
	}

	return 0xdeadbeef;
}