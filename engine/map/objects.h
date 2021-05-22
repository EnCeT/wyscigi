#ifndef OBJECTS_H
#define OBJECTS_H

#include "object.h"

class Objects {
private:
    Settings *settings;
    sf::RenderWindow *window;
    Object objects[100];
    int begin, end;

public:
    Objects();
    void display();
    void update();
    void init(Settings *);
    void addRandomObject();
};

#endif //OBJECTS_H
