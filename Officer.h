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
        PRESIDENT = 0,
        VICE_PRESIDENT = 1,
        TREASURER = 2,
        SECRETARY = 3,
        EVENTS_CHAIR = 4,
        INTERNET_CHAIR = 5,
        DEFAULT_ROLE = 6,
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
            bool operator==(const Officer &other) const;
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