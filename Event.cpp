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
#include "Event.h"

/*
==================================================
Event Class Definition
==================================================
*/
namespace club
{
    /*
    ==================================================
    Event Constructor
    ==================================================
    */
    club::Event::Event(std::string name, std::string description, club::DateTime start, club::DateTime end, std::string location): name(name), description(description), start(start), end(end), location(location){};

    /*
    ==================================================
    Event::get_name() Function
    ==================================================
    */
    std::string club::Event::get_name() const
    {
        return this->name;
    };

    /*
    ==================================================
    Event::get_description() Function
    ==================================================
    */
    std::string club::Event::get_description() const
    {
        return this->description;
    };

    /*
    ==================================================
    Event::get_start() Function
    ==================================================
    */
    club::DateTime club::Event::get_start() const
    {
        return this->start;
    };

    /*
    ==================================================
    Event::get_end() Function
    ==================================================
    */
    club::DateTime club::Event::get_end() const
    {
        return this->end;
    };

    /*
    ==================================================
    Event::get_location() Function
    ==================================================
    */
    std::string club::Event::get_location() const
    {
        return this->location;
    };
};