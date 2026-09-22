# Club Roster Manager 
> [UNA CS455] Assignment #2

## Authorship and Attribution
- Collin Summers 
- Christian Tampus
- Troy Woods

## User Story
- **As a** club officer or club advisor
- **I want** an application to handle events and membership
- **So that** I can quickly add or remove members and events and change officer positions 

## Project Dir/ Structure
```bash
TBC
```

## Tech Stack
- **Standard Libraries:** `<iostream>`, `<vector>`, and `<algoirthms>`
- **Core Data Structures:** STL `std::vector` collections
- **Club Namespace:** Contains club related classes such as Member, Officer, Event, and Club_roster 
- **Textui Namespace:** Contains menu related classes such as Screen, Menu, and Menu_Item
- **Version Control:** Git shared repository
- **Build System** Make Makefile

## Notes
### Implementation Notes:
- Display club should print club name, description, and roster
- Will have a single screen that serves as the main menu
- ```get_position``` should read in an officer name and return their position
### Menu [Selector: Description] Pairs
- A, add member
- B, remove member
- C, add officer
- D, remove officer
- E, add event
- F, remove event
- G, get position
- H, display club
- X, exit
