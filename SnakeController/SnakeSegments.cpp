#include "SnakeSegments.hpp"
#include <algorithm>

SnakeSegments::SnakeSegments(Snake::Direction Direction, int length, std::istringstream istr) : m_Direction{Direction}
    {
    while (length--) {
        Segment seg;
        istr >> seg.x >> seg.y;
        m_segments.push_back(seg);
    }
}
