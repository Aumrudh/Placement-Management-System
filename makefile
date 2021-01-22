PlacementMarkSystem : application.o implementation.o
                c++ application.o implementation.o -o PlacementMarkSystem
application.o : application.cpp
                c++ -c application.cpp
implementation.o:implementation.cpp
                c++ -c implementation.cpp
