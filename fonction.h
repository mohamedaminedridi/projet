ifndef PERSO_H_INCLUDED
#define PERSO_H_INCLUDED
#include "header.h"
#include <unistd.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>

//Et1(perso): mouhamed Amine Dridi
typedef struct 
{
	
	
	TTF_Font    * poliscore; 
	SDL_Surface * txtscore;
	SDL_Rect     posscore ; 
	
}score  ; 

typedef struct  
{
	
	SDL_Surface * imvie[4];
	SDL_Rect     posvie ;
	int          nmbr_vie; 
	
}vie  ;



typedef struct 
    {
    
	SDL_Surface * image[3][3],*image1;  
	SDL_Rect    pos_p;           
	
	vie        vie_perso ;
	score      score_perso ; 
	
	int        mvtx,mvty,accelerer,super_jump;  
	int        etat,gravite;       
	int        direction,num,up;  
                                 
        int        stop;
     }personne;
     



void initPerso(personne *p);
void init(personne *p , int numperso);

void afficherPerso(personne p, SDL_Surface * screen);


void deplacer_perso(personne *p);
void accelrer_perso(personne *p);
void attack_perso(personne *p);

void jump_perso(personne *p);
void super_jump_perso(personne *p,SDL_Event * event);

void animer_perso(personne *p);








#endif

