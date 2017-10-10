// Create two teams with 5 players
#include <stdio.h>
#include <malloc.h>
#include <string.h>

char *** allocateMem(char *** t){
	t = (char***)malloc(sizeof(char**)* 2);
	for (int i = 0; i < 2; i++){
		t[i] = (char**)malloc(sizeof(char*)* 3);
		for (int j = 0; j < 3; j++){
			t[i][j] = (char*)malloc(sizeof(char)* 15);
		}
	}
	return t;
}

void allocPlayerName(char *** t){
	t[0][0] = "p1";
	t[0][1] = "p2";
	t[0][2] = "p3";
	t[1][0] = "q1";
	t[1][1] = "q2";
	t[1][2] = "q3";
	// to read string
	//gets_s(name[i], 15);
	return;
}

void displayPlayerNames(char *** t){
	//printf("%d", sizeof(t));
	for (int i = 0; i < 2; i++){
		printf("\nTeam : %d", i + 1);
		for (int j = 0; j < 3; j++){
			printf("\n%s", t[i][j]);
			
		}
	}
}

int main(){
	char *** teams = NULL;
	teams = allocateMem(teams);
	allocPlayerName(teams);
	displayPlayerNames(teams);
	return 0;
}
