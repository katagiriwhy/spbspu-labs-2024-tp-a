#ifndef FRAME_RECTANGLE_HPP
#define FRAME_RECTANGLE_HPP

#include <functional>
#include "datastruct.hpp"

namespace kuznetsov
{
  bool comparisonPointsByX(const Point& first, const Point& second);
  bool comparisonPointsByY(const Point& first, const Point& second);
  int getPointsFrameX(const Polygon& polygon, std::function< bool() > func);
  int getPointsFrameY(const Polygon& polygon, std::function< bool() > func);
  std::pair< Point, Point > getFrameRectangle(std::vector< Polygon >& polygon);
  bool isPointBetwen(const Point& min, const Point& point, const Point& max);
  bool ifInFrameRectangle(const Polygon& polygon, std::pair< Point, Point > frameRectangle);
}

#endif
