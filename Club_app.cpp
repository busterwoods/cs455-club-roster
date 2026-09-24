/*
==================================================
Developer: Christian Tampus
Last Update: 9/23/2026
Version: 5
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
    club::Club_app::Club_app() : text_ui(SCREEN_TITLE, MENU_OPTIONS), roster(CLUB_NAME, CLUB_DESCRIPTION) {};

    /*
    ==================================================
    Club_app::test() Function
    ==================================================
    */
	void club::Club_app::test() 
	{
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
        roster1.insert_event(event1);
        std::cout << "[SYSTEM MESSAGE] Display Club Roster Here (Should Not Be Empty)!" << std::endl;
        roster1.display_roster();
        roster1.remove_member(member1.get_email());
        roster1.remove_officer(officer1.get_email());
        roster1.remove_event(event1.get_name(), event1.get_start().getDate());
        std::cout << "[SYSTEM MESSAGE] Display Club Roster Here (Should Be Empty)!" << std::endl;
        roster1.display_roster();
	};
    /*
    ==================================================
    Club_app::run() Function
    ==================================================
    */
    void club::Club_app::run()
    {
		//test();
		char choice = 'x';
		while (choice != '0') {
        	text_ui.show();
			choice = text_ui.get_choice();
			execute(choice);
		}
        return;
    };

    /*
    ==================================================
    Club_app::execute() Function
    ==================================================
    */
    void club::Club_app::execute(char choice)
    {
		switch (choice) {
			case '1':
				add_member();
				break;
			case '2':
				delete_member();
				break;
			case '3':
				add_officer();
				break;
			case '4':
				delete_officer();
				break;
			case '5':
				add_event();
				break;
			case '6':
				delete_event();
				break;
			case '7':
				display_club();
				break;
			case '0':
				//do nothing
				break;
			default:
				std::cout << "[SYSTEM MESSAGE] Error has Occured! (check Screen.get_choice())" << std::endl;
			
		}
    };

    /*
    ==================================================
    Club_app::get_string() Function
    ==================================================
    */
    std::string club::Club_app::get_string(std::string question)
    {
		std::string response = "";
        
		do
		{
			std::cout << question;
			getline(std::cin, response);
		} while (response.length() == 0);

        return response;
    };

    /*
    ==================================================
    Club_app::get_position() Function
    ==================================================
    */
    club::OFFICER_ROLE club::Club_app::get_position()
    {
		char choice;
		std::string screen_title = "Officer Positions";
		std::vector<std::pair<char, std::string>> officer_positions = {
			{'1', "President"},
			{'2', "Vice President"},
			{'3', "Treasurer"},
			{'4', "Secretary"},
			{'5', "Events Chair"},
			{'6', "Internet Chair"}
		};
        textui::Screen officer_screen(screen_title, officer_positions);
		officer_screen.show();
		choice = officer_screen.get_choice();

		switch (choice) {
			case '1':
				return club::OFFICER_ROLE::PRESIDENT;
				break;
			case '2':
				return club::OFFICER_ROLE::VICE_PRESIDENT;
				break;
			case '3':
				return club::OFFICER_ROLE::TREASURER;
				break;
			case '4':
				return club::OFFICER_ROLE::SECRETARY;
				break;
			case '5':
				return club::OFFICER_ROLE::EVENTS_CHAIR;
				break;
			case '6':
				return club::OFFICER_ROLE::INTERNET_CHAIR;
				break;
			default:
				return club::OFFICER_ROLE::DEFAULT_ROLE;
		};
    };

    /*
    ==================================================
    Club_app::get_date() Function
    ==================================================
    */
	club::Date club::Club_app::get_date() {
		unsigned short month, day, year;
		try {
			month = std::stoul(get_string("Enter the month: "));
			day = std::stoul(get_string("Enter the day: "));
			year = std::stoul(get_string("Enter the year: "));
		} catch (const std::exception e) {
			throw std::out_of_range("Poor Input");
		}

		if (month > 12 || day > 31) {
			throw std::out_of_range("Poor Input");
		}

		club::Date date(year, month, day);
		return date;
	}

    /*
    ==================================================
    Club_app::get_time() Function
    ==================================================
    */
	club::Time club::Club_app::get_time() {
		unsigned short hour, minute;
		try {
			hour = std::stoul(get_string("Enter the event's start hour (please use 24 hour time): "));
			minute = std::stoul(get_string("Enter the event's start minute: "));
		} catch (const std::out_of_range e) {
			throw std::out_of_range("Poor Input");
		}

		if (hour > 24 || minute > 60) {
			throw std::out_of_range("Poor Input");
		}

		club::Time time(hour, minute, 'a');
		return time;
	}

    /*
    ==================================================
    Club_app::add_member() Function
    ==================================================
    */
    void club::Club_app::add_member()
    {
     	std::string first, last, email;
		bool add_member = true;
		club::Date date(1,1,1); //default values

		first = get_string("Enter the member's first name: ");
		last = get_string("Enter the member's last name: ");
		email = get_string("Enter the member's primary email address: ");
		
		try {
			std::cout << "Please enter the join date of the member below" << std::endl;
			date = get_date();
		} catch (const std::out_of_range e) {
			std::cout << "[ERROR] Impossible Date inputted" << std::endl;
			add_member = false;
		}

		if (add_member) {
			club::Member member(first, last, email, date);
			roster.insert_member(member);
		}
		return;
    };

    /*
    ==================================================
    Club_app::delete_member() Function
    ==================================================
    */
    void club::Club_app::delete_member()
    {
		std::string email;
		email = get_string("Enter the member's primary email address: ");
		roster.remove_member(email);
        return;
    };

    /*
    ==================================================
    Club_app::add_officer() Function
    ==================================================
    */
    void club::Club_app::add_officer()
   	{	
     	std::string first, last, email;
		bool add_officer = true;
		club::Date join_date(1,1,1); //default values
		club::Date exp_date(1,1,1); //default values

		first = get_string("Enter the officer's first name: ");
		last = get_string("Enter the officer's last name: ");
		email = get_string("Enter the officer's primary email address: ");
		
		try {
			std::cout << "Please enter the join date of the officer below" << std::endl;
			join_date = get_date();
		} catch (const std::exception e) {
			std::cout << "[ERROR] Impossible Date inputted" << std::endl;
			add_officer = false;
		}

		try {
			std::cout << "Please enter the expiration date of the officer below" << std::endl;
			exp_date = get_date();
		} catch (const std::exception e) {
			std::cout << "[ERROR] Impossible Date inputted" << std::endl;
			add_officer = false;
		}

		if (add_officer) {
			std::cout << "Please enter the officer's position from the menu below: ";
			club::Officer officer(first, last, email, join_date, get_position(), exp_date);
			roster.insert_officer(officer);
		}
        return;
    };

    /*
    ==================================================
    Club_app::delete_officer() Function
    ==================================================
    */
    void club::Club_app::delete_officer()
    {
		std::string email;
		email = get_string("Enter the member's primary email address: ");
		roster.remove_officer(email);
        return;
    };

    /*
    ==================================================
    Club_app::add_event() Function
    ==================================================
    */
    void club::Club_app::add_event()
    {
     	std::string name, desc, loc;
		club::Date start_date(1,1,1); //default values
		club::Date end_date(1,1,1);
		club::Time start_time(1,1,'a');
		club::Time end_time(1,1,'a');

		name = get_string("Enter the name of the event: ");
		desc = get_string("Enter the description of the event: ");
		loc = get_string("Enter the location of the event: ");

		try {
			std::cout << "Please enter the start date of the event below" << std::endl;
			start_date = get_date();
		} catch (const std::out_of_range e) {
			std::cout << "[ERROR] Impossible Date inputted" << std::endl;
			return;
		}
		
		try {
			std::cout << "Please enter the start time of the event below" << std::endl;
			start_time = get_time();
		} catch (const std::out_of_range e) {
			std::cout << "[ERROR] Impossible time inputted" << std::endl;
			return;
		}

		try {
			std::cout << "Please enter the end date of the event below" << std::endl;
			end_date = get_date();
		} catch (const std::out_of_range e) {
			std::cout << "[ERROR] Impossible Date inputted" << std::endl;
			return;
		}
       
		try {
			std::cout << "Please enter the end time of the event below" << std::endl;
			end_time = get_time();
		} catch (const std::out_of_range e) {
			std::cout << "[ERROR] Impossible time inputted" << std::endl;
			return;
		}

		club::DateTime start_date_time(start_date, start_time);
		club::DateTime end_date_time(end_date, end_time);
		club::Event event(name, desc, start_date_time, end_date_time, loc);
		roster.insert_event(event);

		return;
    };

    /*
    ==================================================
    Club_app::delete_event() Function
    ==================================================
    */
    void club::Club_app::delete_event()
	{
		bool del_event = true;
        std::string name;
		club::Date date(1,1,1); //default values

		name = get_string("Enter the events's first name: ");
		try {
			date = get_date();
		} catch (const std::out_of_range e) {
			std::cout << "[ERROR] Impossible Date inputted" << std::endl;
			del_event = false;
		}
		
		if (del_event)
		{
			roster.remove_event(name, date);
		}
		return;
    };

    /*
    ==================================================
    Club_app::display_club() Function
    ==================================================
    */
    void club::Club_app::display_club()
    {
		roster.display_roster();
        return;
    };
};
