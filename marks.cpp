// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Michael Clermont
// Created on: June 2022
// This program program uses a list

#include <iostream>
#include <random>
#include <list>


int averageOfNumbers(std::list<int> allmarks) {
    // this function adds up all the elements in  a 2D array

    int numbersAverage = 0;

    for (int singlemark : allmarks) {
        numbersAverage = singlemark + numbersAverage;
    }
    numbersAverage = numbersAverage / allmarks.size();
    return numbersAverage;
}

main() {
    // this function uses a list

    std::list<int> marks;
    int mark;
    int average;

    // input
    std::cout << "What is your mark? (as %): ";
    std::cin >> mark;
    marks.push_back(mark);
    while (mark != -1) {
        while (mark > 100 || mark < -1) {
            marks.pop_back();
            std::cout <<
            "That is not a valid mark, enter another mark! (as %): ";
            std::cin >> mark;
            marks.push_back(mark);
        }
        std::cout << "What is your mark? (as %): ";
        std::cin >> mark;
        marks.push_back(mark);
    }
    marks.pop_back();
    std::cout << "" << std::endl;

    average = averageOfNumbers(marks);
    std::cout << "The average is: " << average << "%." << std::endl;
}
