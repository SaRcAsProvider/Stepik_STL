// Created by ilya on 09.07.2022.
/* Выведите все исходные точки в порядке возрастания их расстояний от начала координат.

    Программа получает на вход набор точек на плоскости. Сначала задано количество точек n,
 затем идет последовательность из n строк, каждая из которых содержит два числа: координаты точки.
 Величина n не превосходит 100, все исходные координаты – целые числа, не превосходящие 1000. */

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
  for (auto &i : mass) {
    std::cin >> i.x >> i.y;
    i.distance = std::sqrt(i.x * i.x + i.y * i.y);
  }
  std::sort(mass.begin(), mass.end(), compare);
  for (auto i : mass) {
    std::cout << i.x << " " << i.y << std::endl;
  }
  return 0;
}