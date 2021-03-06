#ifndef ROOM_H
#define ROOM_H

#include <SFML/Graphics.hpp>
#include <stdlib.h>
#include "Encounterable.hpp"


class Room {
public:
    Room(int d, Encounterable t);
    Room(int d);
    Room();
    Room(const Room& orig);
    virtual ~Room();
    
    int getSize() const;
    int getSize();
    int getDistance(); //return distance between player and Encounterable
    
private:
    friend std::ostream& operator<<(std::ostream &strm, const Room&);
    Encounterable thing; //the actual encounterable
    int size;
    bool active;
    bool passed;
};


#endif /* ROOM_H */