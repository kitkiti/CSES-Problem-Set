cmake_minimum_required(VERSION 3.27)
project(CSES_Problem_Set)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CSES_Problem_Set
        "Weird Algorithm.cpp")

add_executable(Missing_Number "Missing Number.cpp")
add_executable(Weird_Algorithm "Weird Algorithm.cpp")
add_executable(Counting__Rooms Counting_Rooms.cpp)
add_executable(Minimizing_Coins Minimizing_Coins.cpp)
add_executable(Coin_Combinations_I Coin_Combinations_I.cpp)
add_executable(Coin_Combinations_II Coin_Combinations_II.cpp)
add_executable(Stick_Length Stick_Length.cpp)
add_executable(Dice_Combinations Dice_Combinations.cpp)
add_executable(Removing_Digits Removing_Digits.cpp)