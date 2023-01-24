cmake_minimum_required(VERSION 3.17)
project(shittyhangman)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp Hangman.cpp Hangman.h Wordbank.cpp Wordbank.h Word.cpp Word.h States.cpp States.h Visuals.cpp Visuals.h Accuracy.cpp Accuracy.h Logic.cpp Logic.h UserInput.cpp UserInput.h NoWordException.cpp NoWordException.h Tests.h Tests.cpp Player.cpp Player.h Application.cpp Application.h ResourceHolder.cpp ResourceHolder.h Gallows.cpp Gallows.h)
add_executable(shittyhangman ${SOURCE_FILES})
include_directories(/usr/local/include)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(shittyhangman sfml-system sfml-window sfml-graphics sfml-audio sfml-network)