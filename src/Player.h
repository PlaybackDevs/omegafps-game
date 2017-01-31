#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        Player(unsigned int id, std::string name);
        virtual ~Player();

        unsigned int Getplayerid() { return m_playerid; }
        void Setplayerid(unsigned int val) { m_playerid = val; }
        std::string Getplayer_name() { return player_name; }
        void Setplayer_name(std::string val) { player_name = val; }

        std::string player_name;

    private:
        unsigned int m_playerid;
};

#endif // PLAYER_H
