CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

TARGET = club_app.exe

SOURCES = main.cpp \
          Club_app.cpp \
          Club_roster.cpp \
          Date.cpp \
          DateTime.cpp \
          Event.cpp \
          Member.cpp \
          Officer.cpp \
          Time.cpp \
          Menu_item.cpp \

OBJECTS = $(SOURCES:.cpp=.o)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -f *.o $(TARGET)