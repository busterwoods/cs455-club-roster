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
#ifndef MEMBER_H
#define MEMBER_H

/*
==================================================
Dependencies
==================================================
*/
#include "Date.h"

namespace club
{
    /*
    ==================================================
    Member Class Declaration
    ==================================================
    */
    class Member
    {
        private:
            std::string first_name;
            std::string last_name;
            std::string email;
            club::Date joined;
        public:
            Member(std::string first_name, std::string last_name, std::string email, club::Date joined);
            std::string get_name() const;
            std::string get_first() const;
            std::string get_last() const;
            std::string get_email() const;
            club::Date get_joined() const;
    };
};

/*
==================================================
End
==================================================
*/
#endif