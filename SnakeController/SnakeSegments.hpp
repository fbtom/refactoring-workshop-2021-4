#pragma once
#include <list>
#include <sstream>
#include <memory>
#include "SnakeInterface.hpp"
class Controller;
class SnakeSegments {
public:
    struct Segment {
        int x;
        int y;
    };
    SnakeSegments() = default;
    SnakeSegments(Snake::Direction Direction, int length, std::istringstream istr);
private:
    Snake::Direction m_Direction;
    std::list<Segment> m_segments;
};