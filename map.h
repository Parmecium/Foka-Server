#ifndef _MAP_H_
#define _MAP_H_

class Map
{
    private:
        float width;
        float height;

        std::vector<Player *> player;
        std::vector<Tile *> tile;
        std::vector<Enemy *> enemy;
        SDL_Rect bgCoords;
        unsigned int bgImg;

    public:
        Map(float width, float height);
        Map(ifstream file);
        ~Map(void);

        void load(ifstream file);
        void save(ifstream file);
};

#endif  // _MAP_H_
