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
#include "Member.h"

/*
==================================================
Member Class Definition
==================================================
*/
namespace club
{
    /*
    ==================================================
    Member Constructor
    ==================================================
    */
    club::Member::Member(std::string first_name, std::string last_name, std::string email, club::Date joined): first_name(first_name), last_name(last_name), email(email), joined(joined){};
    
    /*
    ==================================================
    Member::get_name() Function
    ==================================================
    */
    std::string club::Member::get_name() const
    {
        return this->first_name + " " + this->last_name;
    };

    /*
    ==================================================
    Member::get_first() Function
    ==================================================
    */
    std::string club::Member::get_first() const
    {
        return this->first_name;
    };

    /*
    ==================================================
    Member::get_last() Function
    ==================================================
    */
    std::string club::Member::get_last() const
    {
        return this->last_name;
    };

    /*
    ==================================================
    Member::get_email() Function
    ==================================================
    */
    std::string club::Member::get_email() const
    {
        return this->email;
    };

    /*
    ==================================================
    Member::get_joined() Function
    ==================================================
    */
    club::Date club::Member::get_joined() const
    {
        return this->joined;
    };
};