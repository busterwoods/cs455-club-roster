/*
==================================================
Developer: Christian Tampus
Last Update: 9/18/2026
Version: 2
==================================================
*/

/*
==================================================
Include Guards
==================================================
*/
#ifndef CLUB_APP_H
#define CLUB_APP_H

/*
==================================================
Dependencies
==================================================
*/
//#include "Screen.h" <- STILL NEEDS TO BE IMPLEMENTED
#include "Club_roster.h"

namespace club
{
    /*
    ==================================================
    Club_app Class Declaration
    ==================================================
    */
    class Club_app
    {
        private:
            //textui::Screen text_ui; <- DEPENDS ON #include "Screen.h"
            club::Club_roster roster;

            /*
            ==================================================
            Private Helper Functions
            ==================================================
            */
            void execute();
            std::string get_string();
            club::OFFICER_ROLE get_position();
            void add_member();
            void delete_member();
            void add_officer();
            void delete_officer();
            void add_event();
            void delete_event();
            void display_club();
        public:
            Club_app();
            void run();
    };
};

/*
==================================================
End
==================================================
*/
#endif