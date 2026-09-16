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
#include "Club_roster.h"
#include <algorithm>

/*
==================================================
Club_roster Class Definition
==================================================
*/
namespace club
{
    /*
    ==================================================
    Club_roster Constructor
    ==================================================
    */
    Club_roster::Club_roster(std::string club_name, std::string club_description): club_name(club_name), club_description(club_description){};

    /*
    ==================================================
    Club_roster::insert_member() Function
    ==================================================
    */
    bool club::Club_roster::insert_member(club::Member member)
    {
        this->member_list.push_back(member);
        return true;
    };

    /*
    ==================================================
    Club_roster::remove_member() Function
    ==================================================
    */
    bool club::Club_roster::remove_member(std::string email)
    {
        bool removed = false;
        //3rd Parameter is A Predicate Function That Returns True If The Member's Email Matches The Given Email.
        //email And &removed Are Captured By Value And Reference Respectively So That The Lambda Can Access Them Inside The Predicate Function's Scope.
        //Since &remove Is Captured By Reference, The Lambda Can Modify Its Value To Indicate Whether A Member Was Successfully Removed From The List.
        std::remove_if(this->member_list.begin(), this->member_list.end(),[email, &removed](const club::Member &member)
        {
            if (member.get_email() == email)
            {
                removed = true;
            }
            return member.get_email() == email;
        });
        return removed;
    };

    /*
    ==================================================
    Club_roster::insert_officer() Function
    ==================================================
    */
    bool club::Club_roster::insert_officer(club::Officer officer)
    {
        this->officer_list.push_back(officer);
        return true;
    };

    /*
    ==================================================
    Club_roster::remove_officer() Function
    ==================================================
    */
    bool club::Club_roster::remove_officer(std::string email)
    {
        bool removed = false;
        //3rd Parameter is A Predicate Function That Returns True If The Officer's Email Matches The Given Email.
        //email And &removed Are Captured By Value And Reference Respectively So That The Lambda Can Access Them Inside The Predicate Function's Scope.
        //Since &remove Is Captured By Reference, The Lambda Can Modify Its Value To Indicate Whether A Officer Was Successfully Removed From The List.
        std::remove_if(this->officer_list.begin(), this->officer_list.end(),[email, &removed](const club::Officer &officer)
        {
            if (officer.get_email() == email)
            {
                removed = true;
            }
            return officer.get_email() == email;
        });
        return removed;
    };

    /*
    ==================================================
    Club_roster::insert_event() Function
    ==================================================
    */
    bool club::Club_roster::insert_event(club::Event event)
    {
        this->event_list.push_back(event);
        return true;
    };

    /*
    ==================================================
    Club_roster::remove_event() Function
    ==================================================
    */
    bool club::Club_roster::remove_event(std::string name, club::Date start)
    {
        /*
        Requirements Unclear Here...
        */
        std::cout << "[SYSTEM MESSAGE] Remove Event Requirements Unclear!" << std::endl;
        return false;
    };

    /*
    ==================================================
    Club_roster::display_roster() Function
    ==================================================
    */
    void club::Club_roster::display_roster() const
    {
        std::cout << "[SYSTEM MESSAGE] Display Club Roster Later Here!" << std::endl;
    };
};