//
// Created by Subham Bhattacharya on 2/7/23.
//

#ifndef MAPGENERATION_H
#define MAPGENERATION_H

#endif //MAPGENERATION_H

/**
 * Structs are like objects in C, I will create a struct called world which will be a 2d array of maps
 * The below struct is a single node or a single map in my world
 */

typedef struct World_Node {   // Structure declaration
    int x; // this is the x cordinate
    int y; // this is the y cordinate

    int playerX;
    int playerY;

    /**
     * Below are the cordinates for the 4 exits
     */

    int northExit;
    int southExit;
    int eastExit;
    int westExit;
    char map[21][80];

} World_Node_t;

typedef struct World {
    // current x and y coordinates the map is in
    int x, y;
    World_Node_t *world[401][401];
} World_t;






