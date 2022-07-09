//
// Created by ilya on 09.07.2022.
//
#include <iostream> // Для ввода/вывода
#include <vector> // Для vector
#include <cmath> // Для sqrt
#include <algorithm> // Для sort
struct Point {
  short x;
  short y;
  float distance;
};
bool compare (const Point& a, const Point& b) {
  return a.distance < b.distance;
}
int main () {
  short n = 0;
  std::cin >> n;
  std::vector <Point> mass(n);
  for (int i = 0; i < n; i++) {
    std::cin >> mass[i].x >> mass[i].y;
    mass[i].distance = std::sqrt(mass[i].x * mass[i].x + mass[i].y * mass[i].y);
  }
  std::sort(mass.begin(), mass.end(), compare);
  for (auto i : mass) {
    std::cout << i.x << " " << i.y << std::endl;
  }
  return 0;
}