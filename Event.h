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
#ifndef EVENT_H
#define EVENT_H

/*
==================================================
Dependencies
==================================================
*/
#include "DateTime.h"

namespace club
{
    /*
    ==================================================
    Event Class Declaration
    ==================================================
    */
    class Event
    {
        private:
            std::string name;
            std::string description;
            club::DateTime start;
            club::DateTime end;
            std::string location;
        public:
            Event(std::string name, std::string description, club::DateTime start, club::DateTime end, std::string location);
            bool operator==(const Event &other) const;
            std::string get_name() const;
            std::string get_description() const;
            club::DateTime get_start() const;
            club::DateTime get_end() const;
            std::string get_location() const;
    };
};

/*
==================================================
End
==================================================
*/
#endif