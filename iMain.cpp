# include "iGraphics.h"
# include <windows.h>
# include <iostream>
# include <stdlib.h>
# include <string.h>


int screenwidth = 1000, screenheight=690;

//Magician animations
char leftrun[8][50] = {"Protagonist\\leftrun\\1.bmp", "Protagonist\\leftrun\\2.bmp", "Protagonist\\leftrun\\3.bmp", "Protagonist\\leftrun\\4.bmp", "Protagonist\\leftrun\\5.bmp", "Protagonist\\leftrun\\6.bmp", "Protagonist\\leftrun\\7.bmp", "Protagonist\\leftrun\\8.bmp"};
char rightrun[8][50] = {"Protagonist\\rightrun\\1.bmp", "Protagonist\\rightrun\\2.bmp", "Protagonist\\rightrun\\3.bmp", "Protagonist\\rightrun\\4.bmp", "Protagonist\\rightrun\\5.bmp", "Protagonist\\rightrun\\6.bmp", "Protagonist\\rightrun\\7.bmp", "Protagonist\\rightrun\\8.bmp"};
char idle[8][50] = {"Protagonist\\idle\\1.bmp", "Protagonist\\idle\\2.bmp", "Protagonist\\idle\\3.bmp", "Protagonist\\idle\\4.bmp", "Protagonist\\idle\\5.bmp", "Protagonist\\idle\\6.bmp", "Protagonist\\idle\\7.bmp", "Protagonist\\idle\\8.bmp"};
char leftidle[8][50] = {"Protagonist\\leftidle\\1.bmp", "Protagonist\\leftidle\\2.bmp", "Protagonist\\leftidle\\3.bmp", "Protagonist\\leftidle\\4.bmp", "Protagonist\\leftidle\\5.bmp", "Protagonist\\leftidle\\6.bmp", "Protagonist\\leftidle\\7.bmp", "Protagonist\\leftidle\\8.bmp"};
char attack[7][50] = {"Protagonist\\attack\\1.bmp", "Protagonist\\attack\\2.bmp", "Protagonist\\attack\\3.bmp", "Protagonist\\attack\\4.bmp", "Protagonist\\attack\\5.bmp", "Protagonist\\attack\\6.bmp", "Protagonist\\attack\\7.bmp"};
char leftattack[7][50] = {"Protagonist\\leftattack\\1.bmp", "Protagonist\\leftattack\\2.bmp", "Protagonist\\leftattack\\3.bmp", "Protagonist\\leftattack\\4.bmp", "Protagonist\\leftattack\\5.bmp", "Protagonist\\leftattack\\6.bmp", "Protagonist\\leftattack\\7.bmp"};
char charge[7][50] = {"Protagonist\\charge\\1.bmp", "Protagonist\\charge\\2.bmp", "Protagonist\\charge\\3.bmp", "Protagonist\\charge\\4.bmp", "Protagonist\\charge\\5.bmp", "Protagonist\\charge\\6.bmp", "Protagonist\\charge\\7.bmp"};
char leftcharge[7][50] = {"Protagonist\\leftcharge\\1.bmp", "Protagonist\\leftcharge\\2.bmp", "Protagonist\\leftcharge\\3.bmp", "Protagonist\\leftcharge\\4.bmp", "Protagonist\\leftcharge\\5.bmp", "Protagonist\\leftcharge\\6.bmp", "Protagonist\\leftcharge\\7.bmp"};
char up[2][50] = {"Protagonist\\up\\leftup.bmp", "Protagonist\\up\\rightup.bmp"};
char down[2][50] = {"Protagonist\\down\\leftdown.bmp", "Protagonist\\down\\rightdown.bmp"};
char jump[8][50] = {"Protagonist\\jump\\1.bmp", "Protagonist\\jump\\2.bmp", "Protagonist\\jump\\3.bmp", "Protagonist\\jump\\4.bmp", "Protagonist\\jump\\5.bmp", "Protagonist\\jump\\6.bmp", "Protagonist\\jump\\7.bmp", "Protagonist\\jump\\8.bmp"};
char hurt[4][50] = {"Protagonist\\hurt\\1.bmp", "Protagonist\\hurt\\2.bmp", "Protagonist\\hurt\\3.bmp", "Protagonist\\hurt\\4.bmp"};
char lefthurt[4][50] = {"Protagonist\\lefthurt\\1.bmp", "Protagonist\\lefthurt\\2.bmp", "Protagonist\\lefthurt\\3.bmp", "Protagonist\\lefthurt\\4.bmp"};

//coin collection
char coincollection[5][50] = {"coins\\1.bmp", "coins\\2.bmp", "coins\\3.bmp", "coins\\4.bmp", "coins\\5.bmp"};

//enemies
char en1idle[6][50] = {"enemies\\enemy1\\idle\\1.bmp", "enemies\\enemy1\\idle\\2.bmp", "enemies\\enemy1\\idle\\3.bmp", "enemies\\enemy1\\idle\\4.bmp", "enemies\\enemy1\\idle\\5.bmp", "enemies\\enemy1\\idle\\6.bmp"};
char en2idle[6][50] = {"enemies\\enemy2\\idle\\1.bmp", "enemies\\enemy2\\idle\\2.bmp", "enemies\\enemy2\\idle\\3.bmp", "enemies\\enemy2\\idle\\4.bmp", "enemies\\enemy2\\idle\\5.bmp", "enemies\\enemy2\\idle\\6.bmp"};
char en1walk[6][50] = {"enemies\\enemy1\\walk\\1.bmp", "enemies\\enemy1\\walk\\2.bmp", "enemies\\enemy1\\walk\\3.bmp", "enemies\\enemy1\\walk\\4.bmp", "enemies\\enemy1\\walk\\5.bmp", "enemies\\enemy1\\walk\\6.bmp"};
char en2walk[6][50] = {"enemies\\enemy2\\walk\\1.bmp", "enemies\\enemy2\\walk\\2.bmp", "enemies\\enemy2\\walk\\3.bmp", "enemies\\enemy2\\walk\\4.bmp", "enemies\\enemy2\\walk\\5.bmp", "enemies\\enemy2\\walk\\6.bmp"};

//miscellaneous
char backarrow[20][50] = {"backarrow\\tile000.bmp", "backarrow\\tile001.bmp", "backarrow\\tile002.bmp", "backarrow\\tile003.bmp", "backarrow\\tile004.bmp", "backarrow\\tile005.bmp", "backarrow\\tile006.bmp", "backarrow\\tile007.bmp", "backarrow\\tile008.bmp", "backarrow\\tile009.bmp", "backarrow\\tile010.bmp", "backarrow\\tile011.bmp", "backarrow\\tile012.bmp", "backarrow\\tile013.bmp", "backarrow\\tile014.bmp", "backarrow\\tile015.bmp", "backarrow\\tile016.bmp", "backarrow\\tile017.bmp", "backarrow\\tile018.bmp", "backarrow\\tile019.bmp"};
char blade[8][50] = {"blade\\1.bmp", "blade\\2.bmp", "blade\\3.bmp", "blade\\4.bmp", "blade\\5.bmp", "blade\\6.bmp", "blade\\7.bmp", "blade\\8.bmp"};
char portal[8][50] = {"portal\\1.bmp", "portal\\2.bmp", "portal\\3.bmp", "portal\\4.bmp", "portal\\5.bmp", "portal\\6.bmp", "portal\\7.bmp", "portal\\8.bmp"};
char keys[12][50] = {"key\\1.bmp", "key\\2.bmp", "key\\3.bmp", "key\\4.bmp", "key\\5.bmp", "key\\6.bmp", "key\\7.bmp", "key\\8.bmp", "key\\9.bmp" ,"key\\10.bmp", "key\\11.bmp", "key\\12.bmp"};
char smoke[6][50] = {"smoke\\1.bmp", "smoke\\2.bmp", "smoke\\3.bmp", "smoke\\4.bmp", "smoke\\5.bmp", "smoke\\6.bmp"};
char helper[6][50] = {"helper\\1.bmp", "helper\\2.bmp", "helper\\3.bmp", "helper\\4.bmp", "helper\\5.bmp", "helper\\6.bmp"};

int lidx = 0, ridx=0, iidx =0, aidx=0, cidx=0, jidx=0, e11idx=0, e22idx=0, hidx = 0, bidx = 0, pidx = 0, kidx = 0, sidx = 0; // left, right, idle, attack, charge, jump, e1idle, e2idle, hurt, backarrow index
int playerposx = 20;
int playerposy = 525;
int chargey = playerposy+30;
int chargex = playerposx+50;

int il = 1;
int left = 0;
int right = 0;
int attck = 0;
int jmp = 0;
int upmove = 0;
int downmove = 0;
int hrt = 0;
int cointaken = 0;
int previouslyclicked = 0;
int menu = 1;
int ask = 0;
int lvl1 = 0;
int lvl2 = 0;
int instructions = 0;
int leaderboard = 0;
int settings = 0;
int gameover = 0;
int cmx = 365;
int music = 1;
int attacksound = 1, hurtsound = 1, coincollectsound = 1, clicksound = 1;
int upl = 0;
int h1 = 1, h2 = 1, h3 = 1;
int foundkey = 0;
int musiccounter = 0;
int aboutme = 0;

int idlecounter =0;
int t1, t2, t3;

int highscore;

int score = 0;

char str[100];
int si = 0;
int nametake = 0;

struct coin{
	int cx;
	int cy;
	int cix;
	int show;
};
coin point[15];

struct type1enemies{
	int e1x;
	int e1y;
	int e1idx;
	int eshow;
	int ewalk;
	int health;
};
type1enemies enemy1[4];

struct type2enemies{
	int e2x;
	int e2y;
	int e2idx;
	int eshow;
	int ewalk;
};
type2enemies enemy2[3];

struct blades{
	int x1;
	int x2;
	int x;
	int y;
	int idx;
	int sl;
	int sr;
	int show;
};
blades saw[3];

typedef struct {
	char name[100];
	int sc;
	int sc2;
	int tssc;
} Player;

//level2
char idle2[8][50] = {"lvl2\\idle\\1.bmp", "lvl2\\idle\\2.bmp", "lvl2\\idle\\3.bmp", "lvl2\\idle\\4.bmp", "lvl2\\idle\\5.bmp", "lvl2\\idle\\6.bmp", "lvl2\\idle\\7.bmp", "lvl2\\idle\\8.bmp"};
char leftidle2[8][50] = {"lvl2\\leftidle\\1.bmp", "lvl2\\leftidle\\2.bmp", "lvl2\\leftidle\\3.bmp", "lvl2\\leftidle\\4.bmp", "lvl2\\leftidle\\5.bmp", "lvl2\\leftidle\\6.bmp", "lvl2\\leftidle\\7.bmp", "lvl2\\leftidle\\8.bmp"};
char attack2[7][50] = {"lvl2\\attack\\1.bmp", "lvl2\\attack\\2.bmp", "lvl2\\attack\\3.bmp", "lvl2\\attack\\4.bmp", "lvl2\\attack\\5.bmp", "lvl2\\attack\\6.bmp", "lvl2\\attack\\7.bmp"};
char leftattack2[7][50] = {"lvl2\\leftattack\\1.bmp", "lvl2\\leftattack\\2.bmp", "lvl2\\leftattack\\3.bmp", "lvl2\\leftattack\\4.bmp", "lvl2\\leftattack\\5.bmp", "lvl2\\leftattack\\6.bmp", "lvl2\\leftattack\\7.bmp"};

char en12idle[6][50] = {"lvl2\\enemy1\\idle\\1.bmp", "lvl2\\enemy1\\idle\\2.bmp", "lvl2\\enemy1\\idle\\3.bmp", "lvl2\\enemy1\\idle\\4.bmp", "lvl2\\enemy1\\idle\\5.bmp", "lvl2\\enemy1\\idle\\6.bmp"};
char en22idle[6][50] = {"lvl2\\enemy2\\idle\\1.bmp", "lvl2\\enemy2\\idle\\2.bmp", "lvl2\\enemy2\\idle\\3.bmp", "lvl2\\enemy2\\idle\\4.bmp", "lvl2\\enemy2\\idle\\5.bmp", "lvl2\\enemy2\\idle\\6.bmp"};

char hurt2[4][50] = {"lvl2\\hurt\\1.bmp", "lvl2\\hurt\\2.bmp", "lvl2\\hurt\\3.bmp", "lvl2\\hurt\\4.bmp"};
char lefthurt2[4][50] = {"lvl2\\lefthurt\\1.bmp", "lvl2\\lefthurt\\2.bmp", "lvl2\\lefthurt\\3.bmp", "lvl2\\lefthurt\\4.bmp"};


struct type1enemies2{
	int e1x;
	int e1y;
	int e1idx;
	int eshow;
	int ewalk;
	int health;
	int r;
	int px;
	int py;
	int mode;
};
type1enemies2 enemy12[3];



struct type2enemies2{
	int e2x;
	int e2y;
	int e2idx;
	int eshow;
	int ewalk;
	int r;
	int px;
	int py;
	int mode;
};
type2enemies2 enemy22[3];

struct coin2{
	int cx;
	int cy;
	int cix;
	int show;
};
coin2 point2[15];

int score2 = 0;
int flg = 0;
int speed = 10, enemyrotatespeed = 1, chargespeed = 15;
int hx=440, hy=290;





void drawMenu();
void drawLevel1();
void drawInstructions();
void drawSettings();
void drawGameOver();
void coinsposinitialize();
void en2init();
void en1init();
void enshow();
void moveUp();
void moveDown();
void moveRight();
void moveLeft();
void drawnametake();
void drawLevel2();
void drawLeaderboard();
void drawfinale();
void drawask();
void talk();
void reveal();
void goin();
void drawaboutme();


void enemyClockwise(int rt, int *tex, int *tey, int ddx, int ddy);
void  enemyCounterClockwise(int rt, int *tex, int *tey, int ddx, int ddy);

int playerposx2 = 505, playerposy2 = 619, rx = 298;
int chargeshow = 1;
int cursorshow = 1;
int totalscore=0;
int hpidx = 0;
int tlk = 0;
int rvl = 0;
int spl = 0;
int fnl = 0;
char tstr[100];
char tstr2[100] = "BUET23";

void iDraw() {
	//place your drawing codes here
	iClear();
	//iShowBMP(0, 0, "bg.bmp");
	if(menu){
		drawMenu();
	}
	else if(instructions){
		drawInstructions();
	}
	else if(leaderboard){
		drawLeaderboard();
	}
	else if(ask){
		drawask();
	}
	else if(nametake){
		drawnametake();
	}
	else if(lvl1){
		drawLevel1();
	}
	else if(lvl2){
		drawLevel2();
	}
	else if(fnl){
		drawfinale();
	}
	else if(settings){
		drawSettings();
	}
	else if(gameover){
		drawGameOver();
	}
	else if(aboutme){
		drawaboutme();
	}
}

void drawaboutme(){
	iSetColor(255,255,255);
	iText(340, 333, "Zarif Mahir", GLUT_BITMAP_TIMES_ROMAN_24);
}
void savegame(){
	FILE *fp;
	fp = fopen("savethegame.txt", "w");
	fprintf(fp, "%d %d %d %d %d %d %d %d %d %d\n", lidx, ridx, iidx, aidx, cidx, jidx, e11idx, e22idx, hidx, bidx);
	fprintf(fp, "%d %d %d %d %d %d %d %d %d %d\n", playerposx, playerposy, chargex, chargey, pidx, kidx, sidx, playerposx2, playerposy2, rx);
	fprintf(fp, "%d %d %d %d %d %d %d %d %d %d\n", il, left, right, attck, jmp, upmove, downmove, hrt, cointaken, previouslyclicked);
	fprintf(fp, "%d %d %d %d %d %d %d %d %d %d\n", menu, lvl1, instructions, settings, gameover, music, attacksound, hurtsound, coincollectsound, clicksound);
	fprintf(fp, "%d %d %d %d %d %d %d %d %d\n", upl, h1, h2, h3, lvl2, leaderboard, foundkey, musiccounter, chargeshow);
	fprintf(fp, "%d %d %d %d %d %d %d %d\n", score, score2, score+score2, nametake, flg, speed, enemyrotatespeed, chargespeed);
	fprintf(fp, "%s\n", str);

	for(int i=0; i<15; i++) fprintf(fp, "%d ", point[i].show);
	fprintf(fp, "\n");
	for(int i=0; i<4; i++) {
		fprintf(fp, "%d %d %d %d %d\n", enemy1[i].e1x, enemy1[i].e1y, enemy1[i].e1idx, enemy1[i].eshow, enemy1[i].ewalk);
	}
	for(int i=0; i<3; i++) {
		fprintf(fp, "%d %d %d %d %d\n", enemy2[i].e2x, enemy2[i].e2y, enemy2[i].e2idx, enemy2[i].eshow, enemy2[i].ewalk);
	}
	for(int i=0; i<3; i++) {
		fprintf(fp, "%d %d %d %d %d %d %d %d %d %d\n", enemy12[i].e1x, enemy12[i].e1y, enemy12[i].e1idx, enemy12[i].eshow, enemy12[i].ewalk, enemy12[i].health, enemy12[i].r, enemy12[i].px, enemy12[i].py, enemy12[i].mode);
	}
	for(int i=0; i<3; i++) {
		fprintf(fp, "%d %d %d %d %d %d %d %d %d\n", enemy22[i].e2x, enemy22[i].e2y, enemy22[i].e2idx, enemy22[i].eshow, enemy22[i].ewalk, enemy22[i].r, enemy22[i].px, enemy22[i].py, enemy22[i].mode);
	}
	for(int i=0; i<12; i++) fprintf(fp, "%d ", point2[i].show);
	fclose(fp);

}

void continuegame(){
	FILE *fp;
	fp = fopen("savethegame.txt", "r");
	char templine[50];
	int currentline = 0;
	while(fgets(templine, 50, fp)){
		currentline++;
		if(currentline>=23) break;
		if(currentline==1) sscanf(templine, "%d %d %d %d %d %d %d %d %d %d", &lidx, &ridx, &iidx, &aidx, &cidx, &jidx, &e11idx, &e22idx, &hidx, &bidx);
		else if(currentline==2) sscanf(templine, "%d %d %d %d %d %d %d %d %d %d", &playerposx, &playerposy, &chargex, &chargey, &pidx, &kidx, &sidx, &playerposx2, &playerposy2, &rx);
		else if(currentline==3) sscanf(templine, "%d %d %d %d %d %d %d %d %d %d", &il, &left, &right, &attck, &jmp, &upmove, &downmove, &hrt, &cointaken, &previouslyclicked);
		else if(currentline==4) sscanf(templine, "%d %d %d %d %d %d %d %d %d %d", &menu, &lvl1, &instructions, &settings, &gameover, &music, &attacksound, &hurtsound, &coincollectsound, &clicksound);
		else if(currentline==5) sscanf(templine, "%d %d %d %d %d %d %d %d %d", &upl, &h1, &h2, &h3, &lvl2, &leaderboard, &foundkey, &musiccounter, &chargeshow);
		else if(currentline==6) sscanf(templine, "%d %d %d %d %d %d %d %d", &score, &score2, &totalscore, &nametake, &flg, &speed, &enemyrotatespeed, &chargespeed);
		else if(currentline==7) sscanf(templine, "%99[^\n]", str);
		else if(currentline==8) sscanf(templine, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &point[0].show, &point[1].show, &point[2].show, &point[3].show, &point[4].show, &point[5].show, &point[6].show, &point[7].show, &point[8].show, &point[9].show, &point[10].show, &point[11].show, &point[12].show, &point[13].show, &point[14].show);
		else if(currentline<13) sscanf(templine, "%d %d %d %d %d", &enemy1[currentline-9].e1x, &enemy1[currentline-9].e1y, &enemy1[currentline-9].e1idx, &enemy1[currentline-9].eshow, &enemy1[currentline-9].ewalk);
		else if(currentline<16) sscanf(templine, "%d %d %d %d %d", &enemy2[currentline-13].e2x, &enemy2[currentline-13].e2y, &enemy2[currentline-13].e2idx, &enemy2[currentline-13].eshow, &enemy2[currentline-13].ewalk);
		else if(currentline<19) sscanf(templine, "%d %d %d %d %d %d %d %d %d %d", &enemy12[currentline-16].e1x, &enemy12[currentline-16].e1y, &enemy12[currentline-16].e1idx, &enemy12[currentline-16].eshow, &enemy12[currentline-16].ewalk, &enemy12[currentline-16].health, &enemy12[currentline-16].r, &enemy12[currentline-16].px, &enemy12[currentline-16].py, &enemy12[currentline-16].mode);
		else if(currentline<22) sscanf(templine, "%d %d %d %d %d %d %d %d %d", &enemy22[currentline-19].e2x, &enemy22[currentline-19].e2y, &enemy22[currentline-19].e2idx, &enemy22[currentline-19].eshow, &enemy22[currentline-19].ewalk, &enemy22[currentline-19].r, &enemy22[currentline-19].px, &enemy22[currentline-19].py, &enemy22[currentline-19].mode);
		else sscanf(templine, "%d %d %d %d %d %d %d %d %d %d %d %d", &point2[0].show, &point2[1].show, &point2[2].show, &point2[3].show, &point2[4].show, &point2[5].show, &point2[6].show, &point2[7].show, &point2[8].show, &point2[9].show, &point2[10].show, &point2[11].show);
		
	}	
	fclose(fp);
	if(attck) iResumeTimer(t1);
	if(hrt) iResumeTimer(t2);
}

void drawnametake(){
	//iShowBMP2(16, 600, backarrow[bidx], 0);
	iSetColor(255,255,255);
	iText(399, 430, "Enter your name :", GLUT_BITMAP_9_BY_15);
	iRectangle(349, 376, 250, 37);
	//iText(475, 345, "Start", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(365, 390, str, GLUT_BITMAP_9_BY_15);
	if(cursorshow) iLine(cmx, 385, cmx, 403);
}

void drawMenu(){
	iShowBMP(0,0, "bg2.bmp");
	iShowBMP2(260, 455, "MazeRunner.bmp",0);
	iShowBMP2(425, 310, "buttons\\mainbuttons.bmp", 0);
	iSetColor(0, 0, 0);
	iText(475, 345, "Start", GLUT_BITMAP_TIMES_ROMAN_24);
	iShowBMP2(425, 200, "buttons\\mainbuttons.bmp", 0);
	iText(440, 230, "Instructions", GLUT_BITMAP_TIMES_ROMAN_24);
	iShowBMP2(425, 90, "buttons\\mainbuttons.bmp", 0);
	iText(460, 120, "Settings", GLUT_BITMAP_TIMES_ROMAN_24);
	iShowBMP2(680, 200, "buttons\\mainbuttons.bmp", 0);
	iText(695, 230, "Leaderboard", GLUT_BITMAP_TIMES_ROMAN_24);
	iShowBMP2(168, 200, "buttons\\mainbuttons.bmp", 0);
	iText(209, 230, "About", GLUT_BITMAP_TIMES_ROMAN_24);
	
	iShowBMP2(810, 60, "buttons\\exit.bmp", 0);
	iText(840, 100, "Exit", GLUT_BITMAP_TIMES_ROMAN_24);

	if(previouslyclicked){
		////Sleep(250);
		musiccounter++;
		if(musiccounter>7) {
		if(music) PlaySound(0,0,0), PlaySound("Sound\\bgm.wav", NULL, SND_LOOP | SND_ASYNC);
		musiccounter = 0;
		previouslyclicked = 0;
		}
		
	}

}

void drawfinale(){
	iShowBMP(0,0,"final.bmp");
	iSetColor(0,0,0);
	iText(340, 330, "YOU FINISHED THE GAME", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(340, 210, "THANK YOU FOR PLAYING", GLUT_BITMAP_TIMES_ROMAN_24);
}
void drawask(){
	iSetColor(255, 255, 255);
	FILE *fp;
	fp = fopen("savethegame.txt", "r");
	char templine[50];
	int currentline = 0;
	char tempstr[100];
	int tsc1, tsc2, tsc;
	int a, b, c, d, le;
	while(fgets(templine, 50, fp)){
		currentline++;
		if(currentline>=8) break;
		if(currentline==6) sscanf(templine, "%d %d %d", &tsc1, &tsc2, &tsc);
		else if(currentline==7) sscanf(templine, "%99[^\n]", tempstr);
		else if(currentline==5) sscanf(templine, "%d %d %d %d %d", &a, &b, &c, &d, &le);
	}	
	fclose(fp);
	char stragain[100];
	sprintf(stragain, "Do you want to resume the game as %s from level-%d ?", tempstr, le+1);
	iText(260, 530, stragain, GLUT_BITMAP_HELVETICA_18);
	iText (260, 490, "Score : ", GLUT_BITMAP_HELVETICA_18);
	sprintf(stragain, "Level-1 = %d  ,  Level-2 = %d  ,  Total = %d", tsc1, tsc2, tsc);\
	iText(260, 450, stragain, GLUT_BITMAP_HELVETICA_18);
	iRectangle(200, 305, 80, 60);
	iRectangle(590, 305, 80, 60);
	iText(220, 330, "YES", GLUT_BITMAP_HELVETICA_18);
	iText(620, 330, "NO", GLUT_BITMAP_HELVETICA_18);
	

}
void drawLeaderboard(){
	iShowBMP(0,0, "lbbg.bmp");
	iShowBMP2(330, 570, "leaderboardfont.bmp", 255);
	iText(185, 500, "NAME", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(410, 530, "SCORE", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(360, 500, "Level-1", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(460, 500, "Level-2", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(570, 500, "TOTAL SCORE", GLUT_BITMAP_TIMES_ROMAN_24);
	
	
	iShowBMP2(16, 600, backarrow[bidx], 0);
	bidx++;
	if(bidx>=20) bidx = 0;
	FILE *fp = fopen("level1leaderboard.txt", "r");
	char templine[150];
	int currentline = 0;
	int ly = 463;
	int tsc, tsc2;
	char nme[150];
	char temsc[50];
	while(fgets(templine, 150, fp)){
		currentline++;
		sscanf(templine, "%[^0-9] %d %d", nme, &tsc, &tsc2);
		sprintf(temsc, "%d", currentline);
		iText(175, ly, temsc, GLUT_BITMAP_HELVETICA_18);
		iText(189, ly, ".", GLUT_BITMAP_HELVETICA_18);
		iText(205, ly, nme, GLUT_BITMAP_HELVETICA_18);
		sprintf(temsc, "%d                  %d                           %d", tsc, tsc2, tsc+tsc2);
		iText (391, ly, temsc, GLUT_BITMAP_HELVETICA_18);
		ly -= 40;
	}
	fclose(fp);

}

void drawInstructions(){
	iShowBMP(0,0, "instructionsbg.bmp");
	iShowBMP2(16, 600, backarrow[bidx], 0);
	bidx++;
	if(bidx>=20) bidx = 0;
	iSetColor(0,0,0);
	iText(56, 630, "Back", GLUT_BITMAP_HELVETICA_18);
	iSetColor(255, 255, 255);
	iText(800, 620, "Characters", GLUT_BITMAP_TIMES_ROMAN_24);
	iShowBMP2(686, 505, idle[iidx], 0);
	iidx++;
	if(iidx>=8) iidx = 0;
	iText(790, 541, "-->   Protagonist", GLUT_BITMAP_HELVETICA_18);
	iShowBMP2(686, 420, en1idle[e11idx], 0);
	e11idx++;
	if(e11idx>=6) e11idx = 0;
	iText(790, 450, "-->   Enemy 1", GLUT_BITMAP_HELVETICA_18);

	iShowBMP2(706, 330, en2idle[e22idx], 0);
	e22idx++;
	if(e22idx>=5) e22idx = 0;
	iText(796, 360, "-->   Enemy 2", GLUT_BITMAP_HELVETICA_18);
	iLine(673, 657, 673, 286);
	iText(236, 620, "INSTRUCTIONS", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(35, 532, "1.  Use W,A,S,D keys or the arrow keys for the 2D movements", GLUT_BITMAP_HELVETICA_18);
	iText(35, 472, "2.  Press 'Z' key to attack the enemies", GLUT_BITMAP_HELVETICA_18);
	iText(35, 412, "3.  Collect as many coins as possible", GLUT_BITMAP_HELVETICA_18);
	iText(35, 352, "4.  In level-2, use the up arrow key for clockwise movement and ", GLUT_BITMAP_HELVETICA_18);
	iText(35, 292, "     down arrow key for counterclockwise movement", GLUT_BITMAP_HELVETICA_18);
	iText(35, 232, "5.  In level-2, use the left arrow key for going inwards in the circular maze and use the right arrow key for", GLUT_BITMAP_HELVETICA_18);
	iText(35, 172, "     going outwards in the circular maze", GLUT_BITMAP_HELVETICA_18);
	iText(35, 112, "6.  BE CAREFUL! Some enemies may not die in a single attack. So keep attacking them", GLUT_BITMAP_HELVETICA_18);
	
	
	if(previouslyclicked){
		//Sleep(250);
		musiccounter++;
		//printf("%d\n", musiccounter);
		if(musiccounter>7){
		if(music) PlaySound(0,0,0), PlaySound("Sound\\bgm.wav", NULL, SND_LOOP | SND_ASYNC);
		musiccounter = 0;
		previouslyclicked = 0;
		}
		
	}
	
}

void drawSettings(){
	iShowBMP(0,0, "settings.bmp");
	iShowBMP2(16, 600, backarrow[bidx], 0);
	bidx++;
	if(bidx>=20) bidx = 0;
	iSetColor(0,0,0);
	iText(56, 630, "Back", GLUT_BITMAP_HELVETICA_18);
	iText(320, 520, "Background Music : ", GLUT_BITMAP_HELVETICA_18);
	iRectangle(520, 505, 40, 40);
	iText(320, 460, "Sound effects : ", GLUT_BITMAP_HELVETICA_18);
	iText(320, 410, "i. Click ---> ", GLUT_BITMAP_HELVETICA_18);
	iRectangle(520, 400, 40, 40);
	iText(320, 350, "ii. Attack ---> ", GLUT_BITMAP_HELVETICA_18);
	iRectangle(520, 340, 40, 40);
	iText(320, 290, "iii. Coin Collect ---> ", GLUT_BITMAP_HELVETICA_18);
	iRectangle(520, 280, 40, 40);
	iText(320, 230, "iv. Hurt ---> ", GLUT_BITMAP_HELVETICA_18);
	iRectangle(520, 220, 40, 40);
	
	if (music) iShowBMP2(525, 510, "buttons\\tick.bmp", 0);
	if (clicksound) iShowBMP2(525, 405, "buttons\\tick.bmp", 0);
	if (attacksound) iShowBMP2(525, 345, "buttons\\tick.bmp", 0);
	if (coincollectsound) iShowBMP2(525, 285, "buttons\\tick.bmp", 0);
	if(hurtsound) iShowBMP2(525, 225, "buttons\\tick.bmp", 0);
	if(!music) PlaySound(0,0,0);
	if(previouslyclicked){
		//Sleep(250);
		musiccounter++;
		if(musiccounter>7){
		if(music) PlaySound(0,0,0), PlaySound("Sound\\bgm.wav", NULL, SND_LOOP | SND_ASYNC);
		musiccounter = 0;
		previouslyclicked = 0;
		}
	}
}

int compareplayerposy2score(const void *a, const void *b) {
    Player *p1 = (Player *)a;
	Player *p2 = (Player *)b;
    return p1->tssc < p2->tssc; // Ascending order
}

void updateLeaderboard(){
	FILE *fp;
		fp = fopen("level1leaderboard.txt", "a");
		fprintf(fp, "%s %d %d %d\n", str, score, score2, score+score2);
		fclose(fp);

	FILE *fle;
	fle = fopen("level1leaderboard.txt", "r");
	Player players[100];
	int i = 0;
	char temp[200];
	while(fgets(temp, 200, fle) != NULL){
		sscanf(temp, "%[^0-9] %d %d %d", players[i].name, &players[i].sc, &players[i].sc2, &players[i].tssc);
		//printf("%s score = %d\n", players[i].name, players[i].sc);
		i++;
	}
	fclose(fle);
	qsort(players, i, sizeof(Player), compareplayerposy2score);

	fle = fopen("level1leaderboard.txt", "w");
	for(int j=0; j<i; j++){
		fprintf(fle, "%s %d %d %d\n", players[j].name, players[j].sc, players[j].sc2, players[j].tssc);
		//printf("%s and %d\n", players[j].name, players[j].sc);
		
	}
	fclose(fle);
}

void drawGameOver(){
	iShowBMP(160,40, "gameover.bmp");
	//iShowBMP2(170, 240, "gmq.bmp", 0);
	//iShowBMP2(230, 80, "buttons\\yn.bmp", 0);
	//iShowBMP2(245, 100, "buttons\\yes.bmp", 0);
	// iSetColor(0, 0, 0);
	// iText(280, 120, "Yes", GLUT_BITMAP_TIMES_ROMAN_24);
	//iShowBMP2(510, 80, "buttons\\yn.bmp", 0);
	//iShowBMP2(545, 100, "buttons\\no.bmp", 0);
	iShowBMP2(810, 60, "buttons\\exit.bmp", 0);
	iText(840, 100, "Exit", GLUT_BITMAP_TIMES_ROMAN_24);
	
	if(!upl){
		updateLeaderboard();
		upl = 1;
	}
	
	if(highscore<score){
	highscore = score;
	FILE *fp;
	fp = fopen("level1highscore.txt", "w");
	fprintf(fp, "%d", highscore);
	fclose(fp);
	}
	//iText(560, 120, "No", GLUT_BITMAP_TIMES_ROMAN_24);
}

void checkblade(){
	for(int i=0 ;i<3; i++){
		iShowBMP2(saw[i].x, saw[i].y, blade[saw[i].idx], 0);
	}
	for(int i=0; i<3; i++){
		iShowBMP2(saw[i].x, saw[i].y, blade[saw[i].idx], 0);
		if(!hrt){
			if(downmove){
				if(playerposy<=saw[i].y+27 && playerposy >= saw[i].y){
					if(left){
						if(playerposx+89>=saw[i].x && playerposx+96<=saw[i].x+27) {
							if(h1) h1 = 0;
							else if(h2) h2 = 0;
							else if(h3) {gameover = 1, lvl1 = 0, h3 = 0; break;}
							if(hurtsound)PlaySound("Sound\\hurt2.wav", NULL, SND_ASYNC);
							playerposy += 10;
							hidx = 0;
							iResumeTimer(t2);
							hrt = 1;
						}
					}
					else{
						if(playerposx+31>=saw[i].x && playerposx+38<=saw[i].x+27) {
							if(h1) h1 = 0;
							else if(h2) h2 = 0;
							else if(h3) {gameover = 1, lvl1 = 0, h3 = 0; break;}
							if(hurtsound)PlaySound("Sound\\hurt2.wav", NULL, SND_ASYNC);
							playerposy += 10;
							hidx = 0;
							iResumeTimer(t2);
							hrt = 1;
						}
					}
				}
			}
			else if(upmove){
				if(playerposy+63<=saw[i].y+27 && playerposy+63>= saw[i].y){
					if(left){
						if(playerposx+63>=saw[i].x && playerposx+76<=saw[i].x+27) {
							if(h1) h1 = 0;
							else if(h2) h2 = 0;
							else if(h3) {gameover = 1, lvl1 = 0, h3 = 0; break;}
							if(hurtsound)PlaySound("Sound\\hurt2.wav", NULL, SND_ASYNC);
							playerposy -= 10;
							hidx = 0;
							iResumeTimer(t2);
							hrt = 1;
						}
					}
					else{
						if(playerposx+50>=saw[i].x && playerposx+63<=saw[i].x+27) {
							if(h1) h1 = 0;
							else if(h2) h2 = 0;
							else if(h3) {gameover = 1, lvl1 = 0, h3 = 0; break;}
							if(hurtsound)PlaySound("Sound\\hurt2.wav", NULL, SND_ASYNC);
							playerposy -= 10;
							hidx = 0;
							iResumeTimer(t2);
							hrt = 1;
						}
					}
				}
			}
		}
		
	}

}
void checkcoin(){
	for(int i=0; i<15; i++){
		if(point[i].show){
			if((point[i].cy>=playerposy && point[i].cy<=playerposy+70) && (point[i].cx>=playerposx + 44 && point[i].cx<=playerposx+79)) {
				point[i].show = 0, score++; 
				if(coincollectsound) PlaySound("Sound\\coin.wav", NULL, SND_ASYNC), musiccounter = 0;
				cointaken = 1;
				continue;
				}
			iShowBMP2(point[i].cx, point[i].cy, coincollection[point[i].cix], 0);
		}
		if(cointaken){
		musiccounter++;
		//printf("%d\n", musiccounter);
		if(musiccounter>120){
		if(music) PlaySound("Sound\\bg.wav", NULL, SND_LOOP | SND_ASYNC);
		musiccounter = 0;
		cointaken = 0;
		}
	
		}
	}

}

void checkenemy1(){
	for(int i=0; i<4; i++){
		if(enemy1[i].eshow){
			if(enemy1[i].ewalk && !hrt){
				iShowBMP2(enemy1[i].e1x, enemy1[i].e1y, en1walk[enemy1[i].e1idx], 255);
				iSetColor(0,0,0);
				iRectangle(enemy1[i].e1x+44, enemy1[i].e1y+70, 38, 10);
				iSetColor(255, 0, 0);
				iFilledRectangle(enemy1[i].e1x+44, enemy1[i].e1y+70, enemy1[i].health, 10);
				if(enemy1[i].e1x > playerposx+35) enemy1[i].e1x-=2;
				else{
					
					if(h1) h1 = 0;
					else if(h2) h2 = 0;
					else if(h3) { gameover = 1, lvl1 = 0, h3 = 0; break;}
					if(hurtsound)PlaySound("Sound\\hurt2.wav", NULL, SND_ASYNC);
					//printf("enemy 1, %d, %d\n", enemy1[i].e1x, enemy1[i].e1y);
					en1init();
					playerposx -= 50;
					hidx = 0;
					iResumeTimer(t2);
					hrt = 1;
				}
			}
			else{
			if(playerposx+150>=enemy1[i].e1x && playerposx < enemy1[i].e1x && playerposy >= enemy1[i].e1y-10 && playerposy+69 <= 80+enemy1[i].e1y) enemy1[i].ewalk = 1;
			iShowBMP2(enemy1[i].e1x, enemy1[i].e1y, en1idle[enemy1[i].e1idx], 0);
			}

		}
		
	}
}

void checkenemy2(){
	for(int i=0; i<3; i++){
		if(enemy2[i].eshow){
			if(enemy2[i].ewalk && !hrt){
				//printf("e2idx = %d\n", enemy2[i].e2idx);
				iShowBMP2(enemy2[i].e2x, enemy2[i].e2y, en2walk[enemy2[i].e2idx], 255);
				if(enemy2[i].e2x < playerposx-25) enemy2[i].e2x+=3;
				else{
					
					if(h1) h1 = 0;
					else if(h2) h2 = 0;
					else if(h3) {gameover = 1, lvl1 = 0, h3 = 0; break;}
					if(hurtsound) PlaySound("Sound\\hurt2.wav", NULL, SND_ASYNC);
					en2init();
					playerposx += 40;
					hidx = 0;
					iResumeTimer(t2);
					hrt = 1;
				}
			}
			else{
			if(playerposx<=enemy2[i].e2x+96+55 && playerposx>enemy2[i].e2x && playerposy >= enemy2[i].e2y-10 && playerposy+69 <= 80+enemy2[i].e2y && left) enemy2[i].ewalk = 1;
			iShowBMP2(enemy2[i].e2x, enemy2[i].e2y, en2idle[enemy2[i].e2idx], 0);
			}

		}
		
	}
}

void showscore(){
	iSetColor(255, 255, 255);
	iText(293, 656, "Score: ", GLUT_BITMAP_TIMES_ROMAN_24);
	char str[10];
	sprintf(str, "%d", score);
	iText(363, 656, str, GLUT_BITMAP_TIMES_ROMAN_24);
}

void playhurt(){
	if (left) 
		iShowBMP2(playerposx, playerposy, lefthurt[hidx], 0);
		else iShowBMP2(playerposx, playerposy, hurt[hidx], 0);

		if(hidx>=4) {
			iPauseTimer(t2);
			hrt = 0;
			PlaySound(0,0,0);
			if(music) PlaySound("Sound\\bg.wav", NULL, SND_LOOP | SND_ASYNC);
		}
}

void enemydeath(int k){
	iShowBMP2(enemy1[k].e1x+57, enemy1[k].e1y, smoke[sidx], 0);
	sidx++;
	if(sidx >= 6) sidx = 0;
}

void playattack(){
	if(left){
		iShowBMP2(playerposx, playerposy, leftattack[aidx], 0);
		if(aidx>2 && chargeshow)iShowBMP2(chargex, chargey, leftcharge[cidx], 0);
		}
		else{
		iShowBMP2(playerposx, playerposy, attack[aidx], 0);
		if(aidx>2 && chargeshow)iShowBMP2(chargex, chargey, charge[cidx], 0);
		}
		for(int i=0; i<4; i++){
			if(enemy1[i].ewalk && enemy1[i].eshow){
				if(chargex>= 57+enemy1[i].e1x && chargey>=enemy1[i].e1y && chargey<=enemy1[i].e1y+70) enemy1[i].health -= 19, chargeshow = 0, chargex = playerposx;
				if(enemy1[i].health == 0)  enemy1[i].eshow = 0, enemydeath(i);
			}
		}
		for(int i=0; i<3; i++){
			if(enemy2[i].ewalk){
				if(chargex<= enemy2[i].e2x+55) enemy2[i].eshow = 0;
			}
		}
		//printf("x %d, y %d, show %d\n", chargex, chargey, chargeshow);
		if(aidx>=6) {
			iPauseTimer(t1);
			attck = 0;
			PlaySound(0,0,0);
			if(music) PlaySound("Sound\\bg.wav", NULL, SND_LOOP | SND_ASYNC);
			chargex = playerposx+10;
		}
}

void playjump(){
	iShowBMP2(playerposx, playerposy, jump[jidx], 0);
		if(jidx>=6){
			iPauseTimer(t3);
			jmp = 0;
		}
}

void playnotidle(){
	if(left){
			if(upmove) iShowBMP2(playerposx, playerposy, up[0], 0);
			else if(downmove) iShowBMP2(playerposx, playerposy, down[0], 0);
			else iShowBMP2(playerposx, playerposy, leftrun[lidx], 0);
		}
		else{
			if(upmove) iShowBMP2(playerposx, playerposy, up[1], 0);
			else if(downmove) iShowBMP2(playerposx, playerposy, down[1], 0);
			else iShowBMP2(playerposx, playerposy, rightrun[ridx], 0);
		}

		idlecounter++;
		if(idlecounter>=5){
			idlecounter = 0;
			il = 1;
			upmove = 0;
			downmove = 0;
		}
}

void playidle(){
	if(left){
		iShowBMP2(playerposx, playerposy, leftidle[iidx], 0);
		iidx++;
		if(iidx>=8) iidx = 0;
		}
		else{
		iShowBMP2(playerposx, playerposy, idle[iidx], 0);
		iidx++;
		if(iidx>=8) iidx = 0;
		}
}

void drawLevel1(){
	
	if(h1)iShowBMP2(863, 641, "heart2.bmp", 0);
	if(h2)iShowBMP2(908, 641, "heart2.bmp", 0);
	if(h3)iShowBMP2(953, 641, "heart2.bmp", 0);
	iShowBMP2(40, 30, "gbg.bmp", 0);
	iShowBMP2(922, 60, portal[pidx], 0);
	
	if(playerposx>=600 && playerposx<=620 && playerposy>=435 && playerposy<=445) foundkey = 1;

	if(!foundkey){
		iShowBMP2(660, 461, keys[kidx],0);
	}
	if(foundkey && playerposx+63>=922 && playerposx<922 && playerposy>=45 && playerposy<=155) lvl1 =0, lvl2 = 1;

	checkblade();
	checkcoin();
	checkenemy1();
	checkenemy2();
	showscore();	

	if(hrt) playhurt();
	else if(attck)	playattack();
	else if(jmp) playjump();
	else if(!il) playnotidle();
	else playidle();

	if(previouslyclicked){
		musiccounter++;
		if(musiccounter>7){
		if(music) PlaySound(0,0,0), PlaySound("Sound\\bg.wav", NULL, SND_LOOP | SND_ASYNC);
		musiccounter = 0;
		previouslyclicked = 0;
		}
	}
}


void playidle2(){
	if(left){
		iShowBMP2(playerposx2, playerposy2, leftidle2[iidx], 0);
		iidx++;
		if(iidx>=8) iidx = 0;
		}
		else{
		iShowBMP2(playerposx2, playerposy2, idle2[iidx], 0);
		iidx++;
		if(iidx>=8) iidx = 0;
		}
}

void playnotidle2(){
	if(left){
			if(upmove || downmove) iShowBMP2(playerposx2, playerposy2, "lvl2\\leftup.bmp", 255);

		}
		else{
			if(upmove || downmove) iShowBMP2(playerposx2, playerposy2, "lvl2\\rightup.bmp", 255);
			
		}

		idlecounter++;
		if(idlecounter>=5){
			idlecounter = 0;
			il = 1;
			upmove = 0;
			downmove = 0;
		}
}

void checkcoin2(){
	for(int i=0; i<12; i++){
		if(point2[i].show){
			if((point2[i].cy>=playerposy2 && point2[i].cy<=playerposy2+48) && (point2[i].cx>=playerposx2 + 19 && point2[i].cx<=playerposx2+40)) {
				point2[i].show = 0, score2++; 
				if(coincollectsound) PlaySound("Sound\\coin.wav", NULL, SND_ASYNC), musiccounter=0;
				cointaken = 1;
				continue;
				}
			iShowBMP2(point2[i].cx, point2[i].cy, coincollection[point2[i].cix], 0);
		}
		if(cointaken){
		musiccounter++;
		if(musiccounter>120) {
			if(music) PlaySound(0,0,0), PlaySound("Sound\\bg.wav", NULL, SND_LOOP | SND_ASYNC);
			cointaken = 0;
			musiccounter =0;

		}
		}
	}

}

void playhurt2(){
	
		if(hidx>=4) {
			iPauseTimer(t2);
			hrt = 0;
			
			PlaySound(0,0,0);
			if(music) PlaySound("Sound\\bg.wav", NULL, SND_LOOP | SND_ASYNC);
		}
		printf("hidx %d\n", hidx);
		if (left) iShowBMP2(playerposx2, playerposy2, lefthurt2[hidx], 0);
		else iShowBMP2(playerposx2, playerposy2, hurt2[hidx], 0);
}

void playattack2(){
	
		if(left){
		iShowBMP2(playerposx2, playerposy2, leftattack2[aidx], 0);
		if(aidx>1 && chargeshow)iShowBMP2(chargex, chargey, leftcharge[cidx], 0);
		}
		else{
		iShowBMP2(playerposx2, playerposy2, attack2[aidx], 0);
		if(aidx>2 && chargeshow)iShowBMP2(chargex, chargey, charge[cidx], 0);
		}
		//printf("chargex = %d, chargey = %d\n", chargex, chargey);
		for(int i=0; i<3; i++){
			if(enemy12[i].eshow && enemy12[i].r == rx){
				if(enemy12[i].e1y>playerposy2+20){
					if(chargeshow && chargey>=enemy12[i].e1y) enemy12[i].health-=8, chargeshow = 0;
					if(enemy12[i].health==0) enemy12[i].eshow = 0;
				}
				else if(enemy12[i].e1y<playerposy2-20){
					if(chargeshow && chargey<=enemy12[i].e1y)  enemy12[i].health-=8, chargeshow = 0;
					if(enemy12[i].health==0) enemy12[i].eshow = 0;
				}
			}
		}
		for(int i=0; i<3; i++){
			if(enemy22[i].eshow && enemy22[i].r == rx){
				if(enemy22[i].e2y>playerposy2+10){
					if(chargey>=enemy22[i].e2y) enemy22[i].eshow=0;
				}
				else if(enemy22[i].e2y<playerposy2-10){
					if(chargey<=enemy22[i].e2y) enemy22[i].eshow=0;
				}
			}
		}
		
		if(aidx>=6) {
			iPauseTimer(t1);
			attck = 0;
			PlaySound(0,0,0);
			if(music) PlaySound("Sound\\bg.wav", NULL, SND_LOOP | SND_ASYNC);
			//chargex = playerposx+10;
		}
}

void checkenemy12(){
	for(int i=0; i<3; i++){
		if(enemy12[i].eshow){
			
				
			
			iShowBMP2(enemy12[i].e1x, enemy12[i].e1y, en12idle[enemy12[i].e1idx], 0);
			if(!hrt && enemy12[i].ewalk){
				iSetColor(0,0,0);
				iRectangle(enemy12[i].e1x+6, enemy12[i].e1y+46, 24, 10);
				iSetColor(255, 0, 0);
				iFilledRectangle(enemy12[i].e1x+6, enemy12[i].e1y+46, enemy12[i].health, 10);
				if(enemy12[i].e1y>playerposy2+20){
					if(enemy12[i].mode==1) enemyClockwise(enemy12[i].r, &enemy12[i].e1x, &enemy12[i].e1y, 19, 23);
					else enemyCounterClockwise(enemy12[i].r, &enemy12[i].e1x, &enemy12[i].e1y, 19, 23);
				}
				else if(enemy12[i].e1y<playerposy2-20){
					if(enemy12[i].mode==1) enemyClockwise(enemy12[i].r, &enemy12[i].e1x, &enemy12[i].e1y, 19, 23);
					else enemyCounterClockwise(enemy12[i].r, &enemy12[i].e1x, &enemy12[i].e1y, 19, 23);
				}
				else{
					if(h1) h1 = 0;
					else if(h2) h2 = 0;
					else if(h3) {gameover = 1, lvl2 = 0, h3 = 0; break;}
					if(hurtsound) PlaySound("Sound\\hurt2.wav", NULL, SND_ASYNC);
					en1init();
					hidx = 0;
					iResumeTimer(t2);
					hrt = 1;
				}
			}
			else{
			if(playerposx2==enemy12[i].px && playerposy2==enemy12[i].py && enemy12[i].eshow) enemy12[i].ewalk = 1;
			}
		}
		
	}
}

void checkenemy22(){
	for(int i=0; i<3; i++){
		if(enemy22[i].eshow){
			iShowBMP2(enemy22[i].e2x, enemy22[i].e2y, en22idle[enemy22[i].e2idx], 0);
			if(!hrt && enemy22[i].ewalk){
				if(enemy22[i].e2y>playerposy2+10){
					enemyClockwise(enemy22[i].r, &enemy22[i].e2x, &enemy22[i].e2y, 19, 23);
				}
				else if(enemy22[i].e2y<playerposy2-10){
					enemyClockwise(enemy22[i].r, &enemy22[i].e2x, &enemy22[i].e2y, 19, 23);
				}
				else{
					if(h1) h1 = 0;
					else if(h2) h2 = 0;
					else if(h3) {gameover = 1, lvl2 = 0, h3 = 0; break;}
					if(hurtsound) PlaySound("Sound\\hurt2.wav", NULL, SND_ASYNC);
					en2init();
					hidx = 0;
					iResumeTimer(t2);
					hrt = 1;
				}
			}
			else{
			if(playerposx2==enemy22[i].px && playerposy2==enemy22[i].py && enemy22[i].eshow) enemy22[i].ewalk = 1;
			}
		}
		
	}
}

void showscore2(){
	iSetColor(255, 255, 255);
	iText(35, 594, "Score: ", GLUT_BITMAP_TIMES_ROMAN_24);
	char str2[10];
	sprintf(str2, "%d", score2);
	iText(111, 593, str2, GLUT_BITMAP_TIMES_ROMAN_24);
}

int g = 1;
void drawLevel2(){
	if(h1)iShowBMP2(863, 641, "heart2.bmp", 0);
	if(h2)iShowBMP2(908, 641, "heart2.bmp", 0);
	if(h3)iShowBMP2(953, 641, "heart2.bmp", 0);
	iShowBMP2(170,10, "level2bg.bmp",0);
	iShowBMP2(184, 299, helper[hpidx], 0);
	hpidx++;
	if(hpidx>=6) hpidx =0;
	iShowBMP2(440, 379, "guard.bmp",255);


	checkcoin2();
	showscore2();
	//iShowBMP2(354, 529, "lvl2\\enemy2\\idle\\1.bmp",0);
	checkenemy12();
	checkenemy22();
	if(hrt) playhurt2();
	else if(attck) playattack2();
	else if(il) playidle2();
	else playnotidle2();
		if(playerposx2==187 && playerposy2==279) 
		{
			if(rvl) reveal();
			else tlk = 1, talk();
		}
		else tlk = 0;
		if(playerposx2==413 &&playerposy2==359) spl = 1, goin();
		else spl = 0;
		//if(playerposx2==187 && playerposy2==279 && rvl) reveal();
		
	//iShowBMP2(playerposx2,playerposy2, "lvl2\\rightup.bmp",255);
}

void goin(){
	iSetColor(0,0,0);
	iFilledRectangle(316, 355, 335, 90);
	iSetColor(255,255,255);
	iText(399, 430, "Enter the spell :", GLUT_BITMAP_9_BY_15);
	iRectangle(349, 376, 250, 37);
	//iText(475, 345, "Start", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(365, 390, tstr, GLUT_BITMAP_9_BY_15);
	if(cursorshow) iLine(cmx, 385, cmx, 403);
}

void talk(){
	iShowBMP2(207, 258, "comment.bmp",255);
	iText(223, 355, "Solve this riddle and I will tell you the spell: ", GLUT_BITMAP_9_BY_15);
	iText(223, 335, "You meet two people (A and B) on an island, one is a knight ", GLUT_BITMAP_8_BY_13);
	iText(223, 315, "who always tells the truth, and the other is a knave who ", GLUT_BITMAP_8_BY_13);
	iText(223, 295, "always lies. A says, 'We are both knaves.'", GLUT_BITMAP_8_BY_13);
	iText(223, 275, "Who is the knight and who is the knave?", GLUT_BITMAP_8_BY_13);
	iSetColor(128, 128, 128);
	iFilledRectangle(209, 225, 500, 30);
	
	iFilledRectangle(209, 190, 500, 30);
	
	iFilledRectangle(209, 155, 500, 30);
	iFilledRectangle(209, 120, 500, 30);

	iSetColor(255,255,255);
	iText(223, 234, "i.    A is knight and B is knave", GLUT_BITMAP_8_BY_13);
	iText(223, 199, "ii.   A is knave and B is knight", GLUT_BITMAP_8_BY_13);
	iText(223, 164, "iii.  Both are knights", GLUT_BITMAP_8_BY_13);
	iText(223, 129, "iv.   Both are knaves", GLUT_BITMAP_8_BY_13);
	
	
}
void reveal(){
	iShowBMP2(207, 258, "comment.bmp",255);
	iText(223, 355, "The spell is : BUET23", GLUT_BITMAP_9_BY_15);
}
/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my) {
	//printf("x = %d, y= %d\n",mx,my);
	
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		printf("x = %d, y= %d\n",mx,my);
		if(clicksound) PlaySound("Sound\\click.wav", NULL, SND_ASYNC), previouslyclicked = 1;
		if(menu){
			if(mx>=429 && mx<=567 && my>=318 && my<=379) menu = 0, ask = 1;
			else if(mx>=168 && mx<=313 && my>=206 && my<=269) menu = 0, aboutme=1;
			else if(mx>=429 && mx<=567 && my>=212 && my<=268) menu = 0, instructions = 1;
			else if(mx>=429 && mx<=567 && my>=98 && my<=157) menu = 0, settings = 1;
			else if(mx>=684 && mx<=826 && my>=210 && my<=269) menu = 0, leaderboard = 1;
			else if(mx>=809 && mx<=907 && my>=67 && my<=158) exit(0);
		}
		else if(ask){
			if(mx>=200 && mx<=200+80 && my>=305 && my<=305+60) ask= 0, continuegame();
			else if(mx>=590 && mx<=590+80 && my>=305 && my<=305+60) ask = 0, nametake = 1;
		}
		else if(nametake){
			if(mx>=19 && mx<=100 && my>=618 && my<=651) menu = 1, nametake = 0, settings = 0, iidx = 0;
		}
		else if(leaderboard){
			if(mx>=19 && mx<=100 && my>=618 && my<=651) menu = 1, leaderboard = 0, settings = 0, iidx = 0;	
		}
		else if(instructions){
			if(mx>=19 && mx<=100 && my>=618 && my<=651) menu = 1, instructions = 0, settings = 0, iidx = 0;
		}
		else if(settings){
			if(mx>=19 && mx<=100 && my>=618 && my<=651) menu = 1, instructions = 0, settings = 0, iidx = 0;
			if(mx>=520 && mx<=560 && my>=505 && my<=545) music = !music;
			if(mx>=520 && mx<=560 && my>=400 && my<=440) clicksound = !clicksound;
			if(mx>=520 && mx<=560 && my>=340 && my<=380) attacksound = !attacksound;
			if(mx>=520 && mx<=560 && my>=280 && my<=320) coincollectsound = !coincollectsound;
			if(mx>=520 && mx<=560 && my>=220 && my<=260) hurtsound = !hurtsound;
				
		}
		else if(lvl2){
			if(tlk==1){
				if(mx>=209 &&  mx<=209+500 && my>=190 && my<=190+30) rvl = 1;
				else if(mx>=209 &&  mx<=209+500){
					if((my>=225 && my<=225+30)|| (my>=155 && my<=155+30) || (my>=120 && my<=120+30)) {
						if(h1) h1 = 0;
						else if(h2) h2 = 0;
						else if(h3){
							gameover = 1, lvl2 = 0, h3 = 0;
						}
					} 
				}

			}
		}
		else if(gameover){
			// if(mx>=233 && mx<=370 && my>=88 && my<=165) {
			// 	//continuegame();
			// 	h1 = 1;
			// 	h2 = 1;
			// 	h3 = 1;
			// 	gameover = 0;
			// 	lvl1 = 1;
			// }
			//if(mx>=515 && mx<=651 && my>=94 && my<=165) exit(0);
			iSetColor(0,0,0);
			 if(mx>=809 && mx<=907 && my>=67 && my<=158) exit(0);
		}
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		
	}
}


/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key) {
	if(nametake){
		if(key == 13 || key == 10) {
			nametake = 0;
			si = 0;
			cmx = 365;
			lvl1 = 1;
		}
		else if(key != '\b'){
			str[si] = key;
			str[si+1] = '\0';
			si++;
			cmx+=9;
		}
		else{
			if(si<=0) si = 0;
			else{
			si--;
			cmx-=9;
			str[si] = '\0';
			}
		}
	}
	else if(spl){
		if(key == 13 || key == 10) {
			int chec = strcmpi(tstr, tstr2);
			if(chec==0) fnl=1, lvl2 = 0;
			else{
				if(h1) h1 =0;
				else if(h2) h2 = 0;
				else if(h3) gameover=1, lvl2 = 0, h3=0;
			}
			
		}
		else if(key != '\b'){
			tstr[si] = key;
			tstr[si+1] = '\0';
			si++;
			cmx+=9;
		}
		else{
			if(si<=0) si = 0;
			else{
			si--;
			cmx-=9;
			tstr[si] = '\0';
			}
		}
	}
	else{
	if (key == 'q') {
		updateLeaderboard();
		savegame();
		exit(0);
	}
	if (key == 'z'){
		if(!hrt && !attck){
		if(attacksound) PlaySound("Sound\\attack.wav", NULL, SND_ASYNC);
		chargeshow = 1;
		aidx = 0;
		cidx = 0;
		if(lvl2) chargex = playerposx2, chargey = playerposy2;
		else{
		chargex = playerposx + 50;
		chargey = playerposy + 20;
		
		}
		iResumeTimer(t1);
		attck = 1;
		}
	}
	if(key == 'j' && !jmp){
		jidx = 0;
		iResumeTimer(t3);
		jmp = 1;
	}
	if(key == 'p'){
		if (!lvl1 && !lvl2) printf("x= %d, y= %d\n", hx, hy);
		else if(lvl2) printf("%d %d\n", playerposx2, playerposy2);
		else printf("x= %d, y= %d\n", playerposx, playerposy);
	}
	if(key=='w'){
		moveUp();
	}
	if(key=='s'){
		moveDown();
	}
	if(key == 'a'){
		moveLeft();
	}
	if(key == 'd'){
		moveRight();
	}
	}
	//place your codes for other keys here
}

int checkdown(void){
	int cd = playerposy-10;
	//printf("cd = %d\n", cd);
	if(playerposy==155){
		if((playerposx>=0 && playerposx<=85) || (playerposx>=130 && playerposx<260) || (playerposx>=400 && playerposx<=600) || (playerposx>=860 && playerposx<=920)) return 0;
	}
	else if(playerposy==255){
		if((playerposx>=50 && playerposx<260) || (playerposx>=310 && playerposx<=420) || (playerposx>=560 && playerposx<=830)) return 0;
	}
	else if(playerposy==345){
		if((playerposx>=720 && playerposx<=850) || (playerposx>460 && playerposx<680) || (playerposx>=220 && playerposx<=420) || (playerposx>=0 && playerposx<=70)) return 0;
	}
	else if(playerposy==435){
		if((playerposx>=90 && playerposx<=330) || (playerposx>=430 && playerposx<=500) || (playerposx>=760 && playerposx<=840)) return 0;
	}
	else if(playerposy==525){
		if((playerposx>=70 && playerposx<=150) || (playerposx>=330 && playerposx<=410) || (playerposx>=570 && playerposx<=750) || (playerposx>=820 && playerposx<=900)) return 0;
	}
	else if(playerposy==45) return 0;
	return 1;
}
int checkup(void){
	int cd = playerposy+10;
	//printf("cd = %d\n", cd);
	if(playerposy==65){
		if((playerposx>=0 && playerposx<=85) || (playerposx>=130 && playerposx<=260) || (playerposx>=400 && playerposx<=600) || (playerposx>=820 && playerposx<=920)) return 0;
	}
	else if(playerposy==175){
		if((playerposx>=50 && playerposx<260) || (playerposx>=310 && playerposx<=445) || (playerposx>=560 && playerposx<=830)) return 0;
	}
	else if(playerposy==255){
		if((playerposx>=720 && playerposx<850) || (playerposx>=470 && playerposx<=680) || (playerposx>=220 && playerposx<=420) || (playerposx>=0 && playerposx<=70)) return 0;
	}
	else if(playerposy==355){
		if((playerposx>=60 && playerposx<=330) || (playerposx>=430 && playerposx<=500) || (playerposx>=730 && playerposx<=840)) return 0;
	}
	else if(playerposy==445){
		if((playerposx>=70 && playerposx<=150) || (playerposx>=330 && playerposx<=410) || (playerposx>=570 && playerposx<=750) || (playerposx>=820 && playerposx<=900)) return 0;
	}
	else if(playerposy==525) return 0;
	return 1;
}
int checkright(void){
	int cd = playerposx+10;
	if(playerposx==900) return 0;
	if(playerposx==40){
		if((playerposy>=365 && playerposy<=515) || (playerposy>=185 && playerposy<=245)) return 0;
	}
	if(playerposx==120){
		if((playerposy>=285 && playerposy<=355) || (playerposy>=75 && playerposy<=145)) return 0;
	}
	if(playerposx==210){
		if((playerposy>=435 && playerposy<=525) || (playerposy>=255 && playerposy<=325) || (playerposy>=45 && playerposy<=65)) return 0;
	}
	if(playerposx==290){
		if((playerposy>=85 && playerposy<=245) || (playerposy>=345 && playerposy<=355)) return 0;
	}
	if(playerposx==310){
		if((playerposy>=455 && playerposy<=515)) return 0;
	}
	if(playerposx==380){
		if((playerposy>=365 && playerposy<=445) || (playerposy==255) || (playerposy>=45 && playerposy<=145)) return 0;
	}
	if(playerposx==460){
		if((playerposy>=155 && playerposy<=355) || (playerposy>=455 && playerposy<=525)) return 0;
	}
	if(playerposx==550){
		if((playerposy>=375 && playerposy<=515) || (playerposy>=185 && playerposy<=245)) return 0;
	}
	if(playerposx==630){
		if((playerposy>=75 && playerposy<=175) || (playerposy>=345 && playerposy<=445)) return 0;
	}
	if(playerposx==710){
		if((playerposy>=365 && playerposy<=445) || (playerposy>=255 && playerposy<=335) || (playerposy>=45 && playerposy<=145)) return 0;
	}
	if(playerposx==800){
		if((playerposy>=75 && playerposy<=175) || (playerposy>=455 && playerposy<=525)) return 0;
	}
	
	return 1;
}
int checkleft(void){
	if(playerposx==0) return 0;
	if(playerposx==850){
		if((playerposy>=365 && playerposy<=425) || (playerposy>=155 && playerposy<=335)) return 0;
	}
	if(playerposx==760){
		if((playerposy>=435 && playerposy<=515) || (playerposy>=45 && playerposy<=145)) return 0;
	}
	if(playerposx==680){
		if((playerposy>=75 && playerposy<=175) || (playerposy>=265 && playerposy<=445)) return 0;
	}
	if(playerposx==600){
		if((playerposy>=45 && playerposy<=145) || (playerposy>=375 && playerposy<=445)) return 0;
	}
	if(playerposx==430){
		if((playerposy>=435 && playerposy<=515) || (playerposy>=185 && playerposy<=325)) return 0;
	}
	if(playerposx==340){
		if((playerposy>=85 && playerposy<=175) || (playerposy>=345 && playerposy<=425)) return 0;
	}
	if(playerposx==170){
		if((playerposy>=285 && playerposy<=355) || (playerposy>=455 && playerposy<=515)) return 0;
	}
	if(playerposx==90){
		if((playerposy>=45 && playerposy<=135) || (playerposy>=435 && playerposy<=445)) return 0;
	}
	if(playerposx==70){
		if((playerposy>265 && playerposy<=335)) return 0;
	}
	if(playerposx==510){
		if((playerposy>=155 && playerposy<=255) || (playerposy>=345 && playerposy<=425) || (playerposy>=455 && playerposy<=525)) return 0;
	}
	if(playerposx==260){
		if((playerposy>=435 && playerposy<=525) || (playerposy>=185 && playerposy<=255) || (playerposy>=45 && playerposy<=145)) return 0;
	}
	
	return 1;	
}
/*
	
	*/
void iSpecialKeyboard(unsigned char key) {

	if (key == GLUT_KEY_END) {
		exit(0);
	}
	if(key == GLUT_KEY_LEFT){
		if(!hrt && !attck) moveLeft();
	}
	if(key == GLUT_KEY_RIGHT){
		if(!hrt && !attck) moveRight();
		
	}
	if(key == GLUT_KEY_UP){
		if(!hrt && !attck) moveUp();
		
	}
	if(key == GLUT_KEY_DOWN){
		if(!hrt && !attck) moveDown();
	}
	//place your codes for other keys here
}

void chargeClockwise(int rt){
	if(chargex+13<500){
		if(chargey+7+chargespeed>345+rt) chargey -= chargespeed, flg =  1;
		else chargey+=chargespeed;
	}
	else if(chargex+13>500){
		if(chargey+7-chargespeed<345-rt) chargey +=chargespeed, flg = 1;
		else chargey -= chargespeed;
	}
	else {
				if(chargey+7<345) chargey+=chargespeed;
				else chargey-=chargespeed;
			}
	int tem = rt*rt - (chargey+7-345)*(chargey+7-345);
	if(tem<0) tem = -tem;
	if(chargex+13<500) {
		if(flg) chargex = 500+(int)(sqrt(tem)), flg = 0;
		else chargex = 500-(int)(sqrt(tem));

	}
	else if(chargex+13>500) {
		if(flg) chargex = 500-(int)(sqrt(tem)), flg = 0;
		else chargex = 500+(int)(sqrt(tem));

	}
	else{
		if(chargey+7<345) chargex = 500-(int)(sqrt(tem));
		else chargex = 500+(int)(sqrt(tem));
	}
	chargex-=13;

}

void  chargeCounterClockwise(int rt){
	if(chargex+13<500){
		if(chargey+7-chargespeed<345-rt) chargey += chargespeed, flg =  1;
		else chargey-=chargespeed;
	}
	else if(chargex+13>500){
		if(chargey+7+chargespeed>345+rt) chargey -=chargespeed, flg = 1;
		else chargey += chargespeed;
	}
	else {
				if(chargey+7<345) chargey+=chargespeed;
				else chargey-=chargespeed;
			}
	int tem = rt*rt - (chargey+7-345)*(chargey+7-345);
	if(tem<0) tem = -tem;
	if(chargex+13<500) {
		if(flg) chargex = 500+(int)(sqrt(tem)), flg = 0;
		else chargex = 500-(int)(sqrt(tem));

	}
	else if(chargex+13>500) {
		if(flg) chargex = 500-(int)(sqrt(tem)), flg = 0;
		else chargex = 500+(int)(sqrt(tem));

	}
	else{
		if(chargey+7<345) chargex = 500+(int)(sqrt(tem));
		else chargex = 500-(int)(sqrt(tem));
	}
	chargex-=13;
}


void enemyClockwise(int rt, int *tex, int *tey, int ddx, int ddy){
	if(*tex+ddx<500){
		if(*tey+ddy + enemyrotatespeed>345+rt) *tey -= enemyrotatespeed, flg =  1;
		else *tey+=(enemyrotatespeed);
	}
	else if(*tex+ddx>500){
		if(*tey-enemyrotatespeed+ddy<345-rt) *tey +=enemyrotatespeed, flg = 1;
		else *tey -= enemyrotatespeed;
	}
	else {
				if(*tey+ddy<345) *tey+=enemyrotatespeed;
				else *tey-=enemyrotatespeed;
			}
	int tem = rt*rt - (*tey+ddy-345)*(*tey+ddy-345);
	if(tem<0) tem = -tem;
	if(*tex+ddx<500) {
		if(flg) *tex = 500+(int)(sqrt(tem)), flg = 0;
		else *tex = 500-(int)(sqrt(tem));

	}
	else if(*tex+ddx>500) {
		if(flg) *tex = 500-(int)(sqrt(tem)), flg = 0;
		else *tex = 500+(int)(sqrt(tem));

	}
	else{
		if(*tey+ddy<345) *tex = 500-(int)(sqrt(tem));
		else *tex = 500+(int)(sqrt(tem));
	}
	*tex -= ddx;

}

void  enemyCounterClockwise(int rt, int *tex, int *tey, int ddx, int ddy){
	if(*tex+ddx<500){
		if(*tey+ddy-enemyrotatespeed<345-rt) *tey += enemyrotatespeed, flg =  1;
		else *tey-=enemyrotatespeed;
	}
	else if(*tex+ddx>500){
		if(*tey+ddy+enemyrotatespeed>345+rt) *tey -=enemyrotatespeed, flg = 1;
		else *tey += enemyrotatespeed;
	}
	else {
				if(*tey+ddy<345) *tey+=enemyrotatespeed;
				else *tey-=enemyrotatespeed;
			}
	int tem = rt*rt - (*tey+ddy-345)*(*tey+ddy-345);
	if(tem<0) tem = -tem;
	if(*tex+ddx<500) {
		if(flg) *tex = 500+(int)(sqrt(tem)), flg = 0;
		else *tex = 500-(int)(sqrt(tem));

	}
	else if(*tex+ddx>500) {
		if(flg) *tex = 500-(int)(sqrt(tem)), flg = 0;
		else *tex = 500+(int)(sqrt(tem));

	}
	else{
		if(*tey+ddy<345) *tex = 500+(int)(sqrt(tem));
		else *tex = 500-(int)(sqrt(tem));
	}
	*tex-=ddx;
}



void attackAnimation(){
	aidx++;
	cidx++;
	if(lvl1 && chargeshow){
	if(left) chargex-=20;
	else chargex+=20;
	}
	else{
		if(left) chargeCounterClockwise(rx);
		else chargeClockwise(rx);
	}
	
}
void hurtAnimation(){
	hidx++; 
}
void jumpAnimation(){
	jidx++;
	
}
void coinandenemyAnimation(){
	pidx++;
	if(pidx>=8) pidx = 0;
	kidx++;
	if(kidx>=12) kidx = 0;
	for(int i=0; i<15; i++){
		point[i].cix++;
		if(point[i].cix >=5){
			point[i].cix = 0;
		}
	}
	for(int i=0; i<12; i++){
		point2[i].cix++;
		if(point2[i].cix >=5){
			point2[i].cix = 0;
		}
	}

	for(int i=0; i<4; i++){
		enemy1[i].e1idx++;
		if(enemy1[i].e1idx>=6) enemy1[i].e1idx = 0;
	}
	
	for(int i=0; i<3; i++){
		enemy2[i].e2idx++;
		if(enemy2[i].e2idx>=6) enemy2[i].e2idx = 0;
	}
	
	for(int i=0; i<3; i++){
		saw[i].idx++;
		if(saw[i].idx>=8) saw[i].idx = 0;
	}
	
	for(int i=0; i<3; i++){
		if(saw[i].sl){
			saw[i].x+=10;
			if(saw[i].x>=saw[i].x2) saw[i].x = saw[i].x2, saw[i].sl = 0, saw[i].sr = 1;
		}
		else{
			saw[i].x-=10;
			if(saw[i].x<=saw[i].x1) saw[i].x = saw[i].x1, saw[i].sl = 1, saw[i].sr = 0;
		}
	}

	for(int i=0; i<3; i++){
		enemy12[i].e1idx++;
		if(enemy12[i].e1idx>=6) enemy12[i].e1idx = 0;
	}
	
	for(int i=0; i<3; i++){
		enemy22[i].e2idx++;
		if(enemy22[i].e2idx>=6) enemy22[i].e2idx = 0;
	}
	


}
void coinsposinitialize(){
	point[0].cx = 168, point[0].cy = 476;
	point[1].cx = 327, point[1].cy = 379;
	point[2].cx = 422, point[2].cy = 293;
	point[3].cx = 419, point[3].cy = 77;
	point[4].cx = 491, point[4].cy = 386;
	point[5].cx = 762, point[5].cy = 464;
	point[6].cx = 590, point[6].cy = 180;
	point[7].cx = 764, point[7].cy = 204;
	point[8].cx = 938, point[8].cy = 192;
	point[9].cx = 879, point[9].cy = 99;
	point[10].cx = 70, point[10].cy = 192;
	point[11].cx = 177, point[11].cy = 367;
	point[12].cx = 502, point[12].cy = 456;
	point[13].cx = 862, point[13].cy = 378;
	point[14].cx = 334, point[14].cy = 550;
	point2[0].cx = 724, point2[0].cy = 547;
	point2[1].cx = 345, point2[1].cy = 534;
	point2[2].cx = 710, point2[2].cy = 452;
	point2[3].cx = 594, point2[3].cy = 182;
	point2[4].cx = 243, point2[4].cy = 195;
	point2[5].cx = 282, point2[5].cy = 246;
	point2[6].cx = 636, point2[6].cy = 148;
	point2[7].cx = 325, point2[7].cy = 412;
	point2[8].cx = 355, point2[8].cy = 79;
	point2[9].cx = 556, point2[9].cy = 230;
	point2[10].cx = 413, point2[10].cy = 424;
	point2[11].cx = 551, point2[11].cy = 522;
	//point2[12].cx = 636, point2[6].cy = 148;
	


}
void en1init(){
	enemy1[0].e1x = 250, enemy1[0].e1y = 165;
	enemy1[1].e1x = 446, enemy1[1].e1y = 525;
	enemy1[2].e1x = 755, enemy1[2].e1y = 525;
	enemy1[3].e1x = 630, enemy1[3].e1y = 346;

	enemy12[0].e1x = 559, enemy12[0].e1y = 429, enemy12[0].r = 133, enemy12[0].px = 613, enemy12[0].py = 329, enemy12[0].mode = 1;
	enemy12[1].e1x = 661, enemy12[1].e1y = 159, enemy12[1].r = 243, enemy12[1].px = 721, enemy12[1].py = 289, enemy12[1].mode = 2;
	enemy12[2].e1x = 202, enemy12[2].e1y = 219, enemy12[2].r = 298, enemy12[2].px = 296, enemy12[2].py = 89, enemy12[2].mode = 2;
	

}

void en2init(){
	enemy2[0].e2x = 541, enemy2[0].e2y = 260;
	enemy2[1].e2x = 293, enemy2[1].e2y = 446;
	enemy2[2].e2x = 31, enemy2[2].e2y = 263;

	enemy22[0].e2x = 534, enemy22[0].e2y = 559, enemy22[0].r = 243, enemy22[0].px = 657, enemy22[0].py = 489;
	enemy22[1].e2x = 295, enemy22[1].e2y = 299, enemy22[1].r = 188, enemy22[1].px = 364, enemy22[1].py = 469;
	enemy22[2].e2x = 431, enemy22[2].e2y = 199, enemy22[2].r = 133, enemy22[2].px = 351, enemy22[2].py = 299;
}
void enshow(){
	for(int i=0; i<15; i++){
		point[i].cix = rand()%5;
		point[i].show = 1;
	}
	for(int i=0; i<12; i++){
		point2[i].cix = rand()%5;
		point2[i].show = 1;
	}
	for(int i=0; i<4; i++){
		enemy1[i].e1idx = rand()%6;
		enemy1[i].eshow = 1;
		enemy1[i].ewalk = 0;
		enemy1[i].health = 38;
		
	}
	for(int i=0; i<3; i++){
		enemy2[i].e2idx = rand()%6;
		enemy2[i].eshow = 1;
		enemy2[i].ewalk = 0;
		
	}
	for(int i=0; i<3; i++){
		saw[i].x = saw[i].x1;
		saw[i].idx = rand()%8;
		saw[i].show = 1;
		saw[i].sl = 1;
		saw[i].sr = 0;
	}

	for(int i=0; i<3; i++){
		enemy12[i].e1idx = rand()%6;
		enemy12[i].eshow = 1;
		enemy12[i].ewalk = 0;
		enemy12[i].health = 24;
		
	}
	for(int i=0; i<3; i++){
		enemy22[i].e2idx = rand()%6;
		enemy22[i].eshow = 1;
		enemy22[i].ewalk = 0;
		
	}
}
void bladeinit(){
	saw[0].x1 = 120, saw[0].x2 = 260, saw[0].y = 324;
	saw[1].x1 = 304, saw[1].x2 = 434, saw[1].y = 136;
	saw[2].x1 = 556, saw[2].x2 = 685, saw[2].y = 410;
		
}
void cursorshowtime(){
	cursorshow = !cursorshow;
}


int main() {
	//place your own initialization codes here.
	if(music) PlaySound("Sound\\bgm.wav", NULL, SND_LOOP | SND_ASYNC);
	
	bladeinit();
	coinsposinitialize();
	enshow();
	en1init();
	en2init();
	//si = strlen(str) -1 ;
	iSetTimer(500, cursorshowtime);
	iSetTimer(100, coinandenemyAnimation);
	t1 = iSetTimer(190, attackAnimation);
	iPauseTimer(t1);
	t2 = iSetTimer(500, hurtAnimation);
	iPauseTimer(t2);
	t3 = iSetTimer (200, jumpAnimation);
	iPauseTimer(t3);


	FILE *fp;
	fp = fopen("level1highscore.txt", "r");
	fscanf(fp, "%d", &highscore);
	fclose(fp);
	
	iInitialize(screenwidth, screenheight, "Maze Runner");
	return 0;
}



int checkUp2(int rt){
	if(rt==298){
		if((playerposx2 == 704 && playerposy2 == 519) || (playerposx2 == 535 && playerposy2 == 29) || (playerposx2 == 187 && playerposy2 == 279) || (playerposx2 == 401 && playerposy2==609)) return 0;
	}
	else if(rt == 243){
		if((playerposx2 == 721 && playerposy2 == 359) || (playerposx2 == 348 && playerposy2 == 119) || (playerposx2 == 274 && playerposy2 == 449)) return 0;
	}
	else if(rt == 188){
		if((playerposx2 == 667 && playerposy2 == 299) || (playerposx2 == 418 && playerposy2 == 499)) return 0;
	}
	else if(rt == 133){
		if((playerposx2 == 481 && playerposy2 == 189) || (playerposx2 == 349 && playerposy2 == 309)) return 0;
	}
	else if(rt ==78){
		if(playerposx2==413 && playerposy2 ==359) return 0;
	}
	return 1;
}
int checkDown2(int rt){
	if(rt == 298){
		if((playerposx2 == 734 && playerposy2 == 479) || (playerposx2 == 187 && playerposy2 == 369) || (playerposx2 == 505 && playerposy2 == 619) || (playerposx2 == 427 && playerposy2==29)) return 0;
	}
	else if(rt == 243){
		if((playerposx2 == 301 && playerposy2 == 159) || (playerposx2 == 721 && playerposy2 == 289) || (playerposx2 == 326 && playerposy2 == 509)) return 0;
	}
	else if(rt == 188){
		if((playerposx2 == 500 && playerposy2 == 509) || (playerposx2 == 654 && playerposy2==249)) return 0;
	}
	else if(rt == 133){
		if((playerposx2 == 357 && playerposy2 == 369) || (playerposx2 == 431 && playerposy2 == 199)) return 0;
	} 
	else if(rt ==78){
		if(playerposx2==493 && playerposy2 ==399) return 0;
	}
	return 1;
}


void checkLeft2(int rt){
	if(rt==298){
		if((playerposx2 ==704 && playerposy2==519)) playerposx2 = 657, playerposy2 = 489, rx -=55;
		if((playerposx2 ==296 && playerposy2==89) || (playerposx2 ==309 && playerposy2==79)) playerposx2 = 348, playerposy2 = 119, rx -=55;
	}
	else if(rt == 243){
		if((playerposx2 ==721 && playerposy2==289) || (playerposx2 ==722 && playerposy2==299)) playerposx2 = 667, playerposy2 = 299, rx -=55;
		if((playerposx2 ==326 && playerposy2==509)) playerposx2 = 364, playerposy2 = 469, rx -=55;
		if((playerposx2 ==301 && playerposy2==159)) playerposx2 = 349, playerposy2 = 189, rx -=55;
		
	}
	else if(rt == 188){
		if((playerposx2 ==295 && playerposy2==299)) playerposx2 = 351, playerposy2 = 299, rx -=55;
		if((playerposx2 ==598 && playerposy2==469)) playerposx2 = 559, playerposy2 = 429, rx -=55;
	}
	else if(rt == 133){
		if((playerposx2 == 613 && playerposy2==319)) playerposx2 = 558, playerposy2 = 319, rx -=55;
		if((playerposx2 ==431 && playerposy2==199)) playerposx2 = 454, playerposy2 = 249, rx -=55;
	}

	
}
void checkRight2(int rt){
	if(rt == 243){
		if(playerposx2 == 657 && playerposy2 == 489) playerposx2 = 704, playerposy2 = 519, rx += 55;
		if(playerposx2 == 348 && playerposy2 == 119) playerposx2 = 296, playerposy2 = 89, rx += 55;

	}
	else if(rt == 188){
		if(playerposx2 == 667 && playerposy2 == 299) playerposx2 = 721, playerposy2 = 289, rx += 55;
		if(playerposx2 == 364 && playerposy2 == 469) playerposx2 = 326, playerposy2 = 509, rx += 55;
		if(playerposx2 == 349 && playerposy2 == 189) playerposx2 = 301, playerposy2 = 159, rx += 55;
	}
	else if(rt == 133){
		if((playerposx2 ==351 && playerposy2==299)) playerposx2 = 295, playerposy2 = 299, rx +=55;
		if((playerposx2 ==559 && playerposy2==429)) playerposx2 = 598, playerposy2 = 469, rx +=55;
	}
	else if(rt == 78){
		if((playerposx2 == 558 && playerposy2==319)) playerposx2 = 613, playerposy2 = 319, rx +=55;
		if((playerposx2 ==454 && playerposy2==249)) playerposx2 = 431, playerposy2 = 199, rx +=55;
	}
	
}



void moveClockwise(int rt){
	if(playerposx2+19<500){
		if(playerposy2+23+speed>345+rt) playerposy2 -= speed, flg =  1;
		else playerposy2+=speed;
	}
	else if(playerposx2+19>500){
		if(playerposy2+23-speed<345-rt) playerposy2 +=speed, flg = 1;
		else playerposy2 -= speed;
	}
	else {
				if(playerposy2+23<345) playerposy2+=speed;
				else playerposy2-=speed;
			}
	int tem = rt*rt - (playerposy2+23-345)*(playerposy2+23-345);
	if(tem<0) tem = -tem;
	if(playerposx2+19<500) {
		if(flg) playerposx2 = 500+(int)(sqrt(tem)), flg = 0;
		else playerposx2 = 500-(int)(sqrt(tem));

	}
	else if(playerposx2+19>500) {
		if(flg) playerposx2 = 500-(int)(sqrt(tem)), flg = 0;
		else playerposx2 = 500+(int)(sqrt(tem));

	}
	else{
		if(playerposy2+23<345) playerposx2 = 500-(int)(sqrt(tem));
		else playerposx2 = 500+(int)(sqrt(tem));
	}
	playerposx2-=19;

}

void  moveCounterClockwise(int rt){
	if(playerposx2+19<500){
		if(playerposy2+23-speed<345-rt) playerposy2 += speed, flg =  1;
		else playerposy2-=speed;
	}
	else if(playerposx2+19>500){
		if(playerposy2+23+speed>345+rt) playerposy2 -=speed, flg = 1;
		else playerposy2 += speed;
	}
	else {
				if(playerposy2+23<345) playerposy2+=speed;
				else playerposy2-=speed;
			}
	int tem = rt*rt - (playerposy2+23-345)*(playerposy2+23-345);
	if(tem<0) tem = -tem;
	if(playerposx2+19<500) {
		if(flg) playerposx2 = 500+(int)(sqrt(tem)), flg = 0;
		else playerposx2 = 500-(int)(sqrt(tem));

	}
	else if(playerposx2+19>500) {
		if(flg) playerposx2 = 500-(int)(sqrt(tem)), flg = 0;
		else playerposx2 = 500+(int)(sqrt(tem));

	}
	else{
		if(playerposy2+23<345) playerposx2 = 500+(int)(sqrt(tem));
		else playerposx2 = 500-(int)(sqrt(tem));
	}
	playerposx2-=19;
}

void moveUp(){
	if(!lvl1 && !lvl2){
			hy+=10;
		}
		else if(lvl2){
			int n = checkUp2(rx);
			if(n==1){
			//hy+=10;
			downmove = 0;
			upmove = 1;
			il = 0;
			moveClockwise(rx);
			}
		}
		else{
		int n = checkup();
		if(n==1 && !hrt){
		upmove = 1;
		downmove = 0;
		playerposy += 20;
		il = 0;
		}
		}
}

void moveDown(){
	if(!lvl1 && !lvl2){
			hy-=10;
		}
		else if(lvl2){
			
			int n = checkDown2(rx);
			if(n==1){
			downmove = 1;
			upmove = 0;
			il = 0;
			moveCounterClockwise(rx);
			}
		}
		else{
		int n = checkdown();
		if(n==1 && !hrt){
		downmove = 1;
		upmove = 0;
		playerposy -= 20;
		il = 0;
		}
		}
		//printf("%d\n", n);
	}

void moveLeft(){
	if(!lvl1 && !lvl2){
			hx-=10;
		}
		else if(lvl2){
			left = 1;
			right = 0;
			//rx += 55;
			//moveCounterClockwise(rx);
			checkLeft2(rx);

		}
		else{
		int n = checkleft();
		if(n==1 && !hrt){
		playerposx-=20;
		left = 1;
		right = 0;
		lidx++;
		if(lidx >=8) lidx =0;
		il = 0;
		}
		}
}

void moveRight(){
	if(!lvl1 && !lvl2){
			hx+=10;
		}
		else if(lvl2){
			left = 0;
			right = 1;
			//rx-=55;
			//moveCounterClockwise(rx);
			checkRight2(rx);
		}
		else{
		int n = checkright();
		if(n==1 && !hrt){
		playerposx+=20;
		right = 1;
		left = 0;
		ridx++;
		if(ridx>=8) ridx = 0;
		il = 0;
		}
		}
}