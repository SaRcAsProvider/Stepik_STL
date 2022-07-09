#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
struct student {
  std::string name;
  std::string surname;
  short mark_math;
  short mark_physics;
  short mark_ICT;
  int sum;
};
bool compare (const student& a, const student& b) { // Компаратор для сравнения элеметов вектора
  return a.sum > b.sum;
}
int main() {
  int n = 0;
  std::cin >> n; // Размер вектора
  std::vector <student> people(n); // Вектор структур
  for (int i = 0; i < n; i++) {
    std::cin >> people[i].name >> people[i].surname;
    std::cin >> people[i].mark_math >> people[i].mark_physics >> people[i].mark_ICT;
    people[i].sum = (people[i].mark_math + people[i].mark_physics + people[i].mark_ICT); // Считаем сумму оценок
  }
  std::stable_sort(people.begin(), people.end(), compare); // Сортируем с сохраненипем порядка по правилу compare
  for (auto i : people) {
    std::cout << i.name << " " << i.surname << std::endl;
  }
  return 0;
}
