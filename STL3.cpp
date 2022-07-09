//
// Created by ilya on 09.07.2022.
/*
 Во время проведения олимпиады каждый из участников получил свой идентификационный номер – натуральное число.
 Необходимо отсортировать список участников олимпиады по количеству набранных ими баллов.

 На первой строке дано число N (1 ≤ N ≤ 1000) – количество участников. На каждой следующей строке даны
 идентификационный номер и набранное число баллов соответствующего участника. Все числа во входном файле
 не превышают 100000.

 В выходной файл выведите исходный список в порядке убывания баллов. Если у некоторых участников одинаковые баллы,
 то их между собой нужно упорядочить в порядке возрастания идентификационного номера.
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
bool compare (const std::pair<int, int> &a, const std::pair<int, int> &b) {
  if (a.first == b.first) return a.second < b.second;
  return a.first > b.first;
}
int main () {
  short n = 0;
  std::cin >> n;
  std::vector <std::pair <int, int>> people(n);
  int count1 = 0, count2 = 0;
  for (auto &i : people) {
    std::cin >> count1 >> count2;
    i = {count2, count1};
  }
  std::sort(people.begin(), people.end(), compare);
  // А можно было передавать в функцию 2 значение со знаком "-" и тогда бы sort работала нормально
  for (auto i : people) {
    std::cout << i.second << " " << i.first << std::endl;
  }
  return 0;
}
