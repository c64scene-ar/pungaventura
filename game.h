#ifndef __GAME_H__
#define __GAME_H__

#include "common.h"

// This function must be defined in gen_game.h (autogenerated file)
extern void start(void);

typedef enum { N = 0, NE = 1, E = 2, SE = 3, S = 4, SW = 5, W = 6, NW = 7 }
Exit;

typedef struct {
    char* name;
    char* prefix;
    char* alias;
    char* description;
    void* exits[8];
    void** objects;
} Room;

typedef struct {
    char* name;
    char* prefix;
    char* alias;
    char** other_names;
    char* description;
    void * actions;
    byte numActions;
} Object;

typedef struct {
    char * verb;
    void (*func)(void);
} Action;

typedef struct {
    void** objects;        
} Inventory;


void where_am_I(void);
void look(void);
void move_to(Room* room);
void init_screen(void);
void main_loop(void);



#endif
