/*
==================================================
Developer: Christian Tampus
Last Update: 9/16/2026
Version: 1
==================================================
*/

/*
==================================================
Dependencies
==================================================
*/
#include "Officer.h"

/*
==================================================
Officer Class Definition
==================================================
*/
namespace club
{
    /*
    ==================================================
    Officer Constructor
    ==================================================
    */
    club::Officer::Officer(std::string first_name, std::string last_name, std::string email, club::Date joined, club::OFFICER_ROLE role, club::Date expiration): Member(first_name, last_name, email, joined), role(role), expiration(expiration){};

    /*
    ==================================================
    Officer::get_role() Function
    ==================================================
    */
    club::OFFICER_ROLE club::Officer::get_role() const
    {
        return this->role;
    };

    /*
    ==================================================
    Officer::get_expiration() Function
    ==================================================
    */
    club::Date club::Officer::get_expiration() const
    {
        return this->expiration;
    };
};