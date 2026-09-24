/*
==================================================
Developer: Christian Tampus
Last Update: 9/16/2026
Version: 1
==================================================
*/

/*
==================================================
Include Guards
==================================================
*/
#ifndef CLUB_ROSTER_H
#define CLUB_ROSTER_H

/*
==================================================
Dependencies
==================================================
*/
#include "Officer.h"
#include "Member.h"
#include "Event.h"
#include <vector>

namespace club
{
    /*
    ==================================================
    Club_roster Class Declaration
    ==================================================
    */
    class Club_roster
    {
        private:
            std::string club_name;
            std::string club_description;
            std::vector<club::Officer> officer_list;
            std::vector<club::Member> member_list;
            std::vector<club::Event> event_list;
        public:
            Club_roster(std::string club_name, std::string club_description);
            bool insert_member(club::Member member);
            bool remove_member(std::string email);
            bool insert_officer(club::Officer officer);
            bool remove_officer(std::string email);
            bool insert_event(club::Event event);
            bool remove_event(std::string name, club::Date start);
            void display_roster() const;
    };
};

/*
==================================================
End
==================================================
*/
#endif
