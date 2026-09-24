/*
==================================================
Developer: Christian Tampus
Last Update: 9/24/2026
Version: 6
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
#include "Screen.h"
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
            inline static const std::string SCREEN_TITLE = "Main Menu";
			inline static const std::vector<std::pair<char, std::string>> MENU_OPTIONS = {
				{'1', "Add Member"},
				{'2', "Remove Member"},
				{'3', "Add Officer"},
				{'4', "Remove Officer"},
				{'5', "Add Event"},
				{'6', "Remove Event"},
				{'7', "Display Club Roster"},
				{'0', "Exit"}
			};
			inline static const std::string CLUB_NAME = "UNA ACM Student Chapter";
			inline static const std::string CLUB_DESCRIPTION = "N/A";
			textui::Screen text_ui;
            club::Club_roster roster;
			 

            /*
            ==================================================
            Private Helper Functions
            ==================================================
            */
            std::string get_string();
			void test();
            void execute(char choice);
            std::string get_string(std::string question);
			club::Date get_date();
			club::Time get_time();
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
