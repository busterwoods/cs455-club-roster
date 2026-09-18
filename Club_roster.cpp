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
        if (std::find(this->member_list.begin(), this->member_list.end(), member) != this->member_list.end()) {
            return false;
        };
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
        //This Is Then Set Equal To new_vector_end To Finally Be Removed From The Vector Using erase().
        auto new_vector_end = std::remove_if(this->member_list.begin(), this->member_list.end(),[email, &removed](const club::Member &member)
        {
            if (member.get_email() == email)
            {
                removed = true;
            };
            return member.get_email() == email;
        });
        this->member_list.erase(new_vector_end, this->member_list.end());
        return removed;
    };

    /*
    ==================================================
    Club_roster::insert_officer() Function
    ==================================================
    */
    bool club::Club_roster::insert_officer(club::Officer officer)
    {
        if (std::find(this->officer_list.begin(), this->officer_list.end(), officer) != this->officer_list.end()) {
            return false;
        };
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
        //This Is Then Set Equal To new_vector_end To Finally Be Removed From The Vector Using erase().
        auto new_vector_end = std::remove_if(this->officer_list.begin(), this->officer_list.end(),[email, &removed](const club::Officer &officer)
        {
            if (officer.get_email() == email)
            {
                removed = true;
            };
            return officer.get_email() == email;
        });
        this->officer_list.erase(new_vector_end, this->officer_list.end());
        return removed;
    };

    /*
    ==================================================
    Club_roster::insert_event() Function
    ==================================================
    */
    bool club::Club_roster::insert_event(club::Event event)
    {
        if (std::find(this->event_list.begin(), this->event_list.end(), event) != this->event_list.end()) {
            return false;
        };
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
        bool removed = false;
        //3rd Parameter Is A Predicate Function That Returns True If The Event's Name And Start Date Match The Given Values.
        //name, start, And &removed Are Captured By Value And Reference Respectively So That The Lambda Can Access Them Inside The Predicate Function's Scope.
        //Since &remove Is Captured By Reference, The Lambda Can Modify Its Value To Indicate Whether A Event Was Successfully Removed From The List.
        //This Is Then Set Equal To new_vector_end To Finally Be Removed From The Vector Using erase().
        auto new_vector_end = std::remove_if(this->event_list.begin(), this->event_list.end(),[name, start, &removed](const club::Event &event)
        {
            if (event.get_name() == name && event.get_start().getDate() == start)
            {
                removed = true;
            };
            return (event.get_name() == name) && (event.get_start().getDate() == start);
        });
        this->event_list.erase(new_vector_end, this->event_list.end());
        return removed;
    };

    /*
    ==================================================
    Club_roster::display_roster() Function
    ==================================================
    */
    void club::Club_roster::display_roster() const
    {
        std::string officer_role_string_array[7] = {"President", "Vice President", "Treasurer", "Secretary", "Events Chair", "Internet Chair", "Default Role"};
        for (std::size_t index = 0; index < this->officer_list.size(); index++) {
            std::cout << "[SYSTEM MESSAGE] Officer Name: " << this->officer_list[index].get_name() << " Role: " << officer_role_string_array[this->officer_list[index].get_role()] << std::endl;
        };
        for (std::size_t index = 0; index < this->member_list.size(); index++) {
            std::cout << "[SYSTEM MESSAGE] Member Name: " << this->member_list[index].get_name() << std::endl;
        };
        return;
    };
};