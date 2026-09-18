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
#include "Club_app.h"

/*
==================================================
Test Dependencies
==================================================
*/
#include "Member.h" //REMOVE THIS LATER!
#include "Officer.h" //REMOVE THIS LATER!
#include "Event.h" //REMOVE THIS LATER!
#include "Club_roster.h" //REMOVE THIS LATER!
#include "Time.h" //REMOVE THIS LATER!


/*
==================================================
Club_app Class Definition
==================================================
*/
namespace club
{
    /*
    ==================================================
    Club_app Constructor
    ==================================================
    */
    club::Club_app::Club_app(): roster("Club Name", "Club Description") {};

    /*
    ==================================================
    Club_app::run() Function
    ==================================================
    */
    void club::Club_app::run()
    {
        std::cout << "[SYSTEM MESSAGE] Add run() Function Implementation Here!" << std::endl;
        /*
        ==================================================
        PLACE YOUR UNIT TESTS HERE! (REMOVE THIS LATER!)
        ==================================================
        */
        std::cout << "[SYSTEM MESSAGE] UNIT TEST HERE!" << std::endl;
        std::string officer_role_string_array[7] = {"President", "Vice President", "Treasurer", "Secretary", "Events Chair", "Internet Chair", "Default Role"};
        club::Member member1("Member_1_FN", "Member_1_LN", "Member_1@email.com", club::Date(2026, 9, 18));
        std::cout << "[SYSTEM MESSAGE] Member 1 get_name():" << member1.get_name() << std::endl;
        std::cout << "[SYSTEM MESSAGE] Member 1 get_first():" << member1.get_first() << std::endl;
        std::cout << "[SYSTEM MESSAGE] Member 1 get_last():" << member1.get_last() << std::endl;
        std::cout << "[SYSTEM MESSAGE] Member 1 get_email():" << member1.get_email() << std::endl;
        std::cout << "[SYSTEM MESSAGE] Member 1 get_joined():" << member1.get_joined() << std::endl;
        club::Officer officer1("Officer_1_FN", "Officer_1_LN", "Officer_1@email.com", club::Date(2026, 9, 18), club::OFFICER_ROLE::PRESIDENT, club::Date(2026, 12, 31));
        std::cout << "[SYSTEM MESSAGE] Officer 1 get_name():" << officer1.get_name() << std::endl;
        std::cout << "[SYSTEM MESSAGE] Officer 1 get_first():" << officer1.get_first() << std::endl;
        std::cout << "[SYSTEM MESSAGE] Officer 1 get_last():" << officer1.get_last() << std::endl;
        std::cout << "[SYSTEM MESSAGE] Officer 1 get_email():" << officer1.get_email() << std::endl;
        std::cout << "[SYSTEM MESSAGE] Officer 1 get_joined():" << officer1.get_joined() << std::endl;
        std::cout << "[SYSTEM MESSAGE] Officer 1 get_role():" << officer_role_string_array[officer1.get_role()] << std::endl;
        std::cout << "[SYSTEM MESSAGE] Officer 1 get_expiration():" << officer1.get_expiration() << std::endl;
        club::Event event1("Event_1 Name", "Event_1 Description", club::DateTime(club::Date(2026, 9, 18), club::Time(9, 30, 'a')), club::DateTime(club::Date(2026, 9, 18), club::Time(5, 45, 'p')), "Event_1 Location");
        std::cout << "[SYSTEM MESSAGE] Event 1 get_name():" << event1.get_name() << std::endl;
        std::cout << "[SYSTEM MESSAGE] Event 1 get_description():" << event1.get_description() << std::endl;
        std::cout << "[SYSTEM MESSAGE] Event 1 get_start():" << event1.get_start() << std::endl;
        std::cout << "[SYSTEM MESSAGE] Event 1 get_end():" << event1.get_end() << std::endl;
        std::cout << "[SYSTEM MESSAGE] Event 1 get_location():" << event1.get_location() << std::endl;
        club::Club_roster roster1("Club_1 Name", "Club_1 Description");
        std::cout << "[SYSTEM MESSAGE] Club_roster 1. insert_member():" << (roster1.insert_member(member1) == true ? "SUCCESS INSERT!" : "FAILED INSERT!") << std::endl;
        std::cout << "[SYSTEM MESSAGE] Club_roster 2. insert_member():" << (roster1.insert_member(member1) == true ? "SUCCESS INSERT!" : "FAILED INSERT!") << std::endl;
        std::cout << "[SYSTEM MESSAGE] Club_roster 1. remove_member():" << (roster1.remove_member(member1.get_email()) == true ? "SUCCESS REMOVE!" : "FAILED REMOVE!") << std::endl;
        std::cout << "[SYSTEM MESSAGE] Club_roster 2. remove_member():" << (roster1.remove_member(member1.get_email()) == true ? "SUCCESS REMOVE!" : "FAILED REMOVE!") << std::endl;
        std::cout << "[SYSTEM MESSAGE] Club_roster 1. insert_officer():" << (roster1.insert_officer(officer1) == true ? "SUCCESS INSERT!" : "FAILED INSERT!") << std::endl;
        std::cout << "[SYSTEM MESSAGE] Club_roster 2. insert_officer():" << (roster1.insert_officer(officer1) == true ? "SUCCESS INSERT!" : "FAILED INSERT!") << std::endl;
        std::cout << "[SYSTEM MESSAGE] Club_roster 1. remove_officer():" << (roster1.remove_officer(officer1.get_email()) == true ? "SUCCESS REMOVE!" : "FAILED REMOVE!") << std::endl;
        std::cout << "[SYSTEM MESSAGE] Club_roster 2. remove_officer():" << (roster1.remove_officer(officer1.get_email()) == true ? "SUCCESS REMOVE!" : "FAILED REMOVE!") << std::endl;
        std::cout << "[SYSTEM MESSAGE] Club_roster 1. insert_event():" << (roster1.insert_event(event1) == true ? "SUCCESS INSERT!" : "FAILED INSERT!") << std::endl;
        std::cout << "[SYSTEM MESSAGE] Club_roster 2. insert_event():" << (roster1.insert_event(event1) == true ? "SUCCESS INSERT!" : "FAILED INSERT!") << std::endl;
        std::cout << "[SYSTEM MESSAGE] Club_roster 1. remove_event():" << (roster1.remove_event(event1.get_name(), event1.get_start().getDate()) == true ? "SUCCESS REMOVE!" : "FAILED REMOVE!") << std::endl;
        std::cout << "[SYSTEM MESSAGE] Club_roster 2. remove_event():" << (roster1.remove_event(event1.get_name(), event1.get_start().getDate()) == true ? "SUCCESS REMOVE!" : "FAILED REMOVE!") << std::endl;
        roster1.insert_member(member1);
        roster1.insert_officer(officer1);
        std::cout << "[SYSTEM MESSAGE] Display Club Roster Here (Should Not Be Empty)!" << std::endl;
        roster1.display_roster();
        roster1.remove_member(member1.get_email());
        roster1.remove_officer(officer1.get_email());
        std::cout << "[SYSTEM MESSAGE] Display Club Roster Here (Should Be Empty)!" << std::endl;
        roster1.display_roster();
        return;
    };

    /*
    ==================================================
    Club_app::execute() Function
    ==================================================
    */
    void club::Club_app::execute()
    {
        std::cout << "[SYSTEM MESSAGE] Add execute() Function Implementation Here!" << std::endl;
        return;
    };

    /*
    ==================================================
    Club_app::get_string() Function
    ==================================================
    */
    std::string club::Club_app::get_string()
    {
        std::cout << "[SYSTEM MESSAGE] Add get_string() Function Implementation Here!" << std::endl;
        return "";
    };

    /*
    ==================================================
    Club_app::get_position() Function
    ==================================================
    */
    club::OFFICER_ROLE club::Club_app::get_position()
    {
        std::cout << "[SYSTEM MESSAGE] Add get_position() Function Implementation Here!" << std::endl;
        return club::OFFICER_ROLE::DEFAULT_ROLE;
    };

    /*
    ==================================================
    Club_app::add_member() Function
    ==================================================
    */
    void club::Club_app::add_member()
    {
        std::cout << "[SYSTEM MESSAGE] Add add_member() Function Implementation Here!" << std::endl;
        return;
    };

    /*
    ==================================================
    Club_app::delete_member() Function
    ==================================================
    */
    void club::Club_app::delete_member()
    {
        std::cout << "[SYSTEM MESSAGE] Add delete_member() Function Implementation Here!" << std::endl;
        return;
    };

    /*
    ==================================================
    Club_app::add_officer() Function
    ==================================================
    */
    void club::Club_app::add_officer()
    {
        std::cout << "[SYSTEM MESSAGE] Add add_officer() Function Implementation Here!" << std::endl;
        return;
    };

    /*
    ==================================================
    Club_app::delete_officer() Function
    ==================================================
    */
    void club::Club_app::delete_officer()
    {
        std::cout << "[SYSTEM MESSAGE] Add delete_officer() Function Implementation Here!" << std::endl;
        return;
    };

    /*
    ==================================================
    Club_app::add_event() Function
    ==================================================
    */
    void club::Club_app::add_event()
    {
        std::cout << "[SYSTEM MESSAGE] Add add_event() Function Implementation Here!" << std::endl;
        return;
    };

    /*
    ==================================================
    Club_app::delete_event() Function
    ==================================================
    */
    void club::Club_app::delete_event()
    {
        std::cout << "[SYSTEM MESSAGE] Add delete_event() Function Implementation Here!" << std::endl;
        return;
    };

    /*
    ==================================================
    Club_app::display_club() Function
    ==================================================
    */
    void club::Club_app::display_club()
    {
        std::cout << "[SYSTEM MESSAGE] Add display_club() Function Implementation Here!" << std::endl;
        return;
    };
};