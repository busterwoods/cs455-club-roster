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
#ifndef OFFICER_H
#define OFFICER_H

/*
==================================================
Dependencies
==================================================
*/
#include "Member.h"

namespace club
{
    /*
    ==================================================
    OFFICER_ROLE Enumeration
    ==================================================
    */
    enum OFFICER_ROLE
    {
        PRESIDENT = 1,
        VICE_PRESIDENT = 2,
        TREASURER = 3,
        SECRETARY = 4,
        EVENTS_CHAIR = 5,
        INTERNET_CHAIR = 6,
    };

    /*
    ==================================================
    Officer Class Declaration
    ==================================================
    */
    class Officer : public club::Member
    {
        private:
            club::OFFICER_ROLE role;
            club::Date expiration;
        public:
            Officer(std::string first_name, std::string last_name, std::string email, club::Date joined, club::OFFICER_ROLE role, club::Date expiration);
            club::OFFICER_ROLE get_role() const;
            club::Date get_expiration() const;
    };
};

/*
==================================================
End
==================================================
*/
#endif