/*
==================================================
Developer: Christian Tampus
Last Update: 9/18/2026
Version: 2
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
    Overloaded Equality Operator For Officer Class
    ==================================================
    */
    bool club::Officer::operator==(const Officer &other) const
    {
        return (this->get_first() == other.get_first()) && (this->get_last() == other.get_last()) && (this->get_email() == other.get_email()) && (this->get_joined() == other.get_joined()) && (this->get_role() == other.get_role()) && (this->get_expiration() == other.get_expiration());
    };

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