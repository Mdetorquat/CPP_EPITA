// Do not change
#include <iostream>
#include <fstream>


#include <list>
#include <vector>
#include <deque>

#include "my_sort.hpp"

// Change here
// All occurences of XXX need to be replaced with
// something more meaningful


template<class type, class CONT>
void read_file_to_cont(std::ifstream& f, CONT& c) {
  type tmp;

  while (f >> tmp) {
    c.push_back(tmp);
  }
}

template<class type, class CONT>
void read_and_sort(std::ifstream& fi, std::ofstream& fo) {
  CONT list = {};
  read_file_to_cont<type, CONT>(fi, list);
  my_selection_sort(list.begin(), list.end());
  for (type &tmp : list) {
    fo << tmp << std::endl;
  }
}

template<class type>
void read_and_sort_decide_container(std::ifstream& fi, std::ofstream& fo) {
  char nextLine;
  fi >> nextLine;
  fo << nextLine << std::endl;
  switch(nextLine)
  {
    case 'd':
      read_and_sort<type, std::deque<type>>(fi, fo);
      break;
    
    case 'l':
      read_and_sort<type, std::list<type>>(fi, fo);
      break;
    
    case 'v':
      read_and_sort<type, std::vector<type>>(fi, fo);
      break;
  }
}

void read_and_sort_decide_valuetype(std::ifstream& fi, std::ofstream& fo) {
  char first;
  fi >> first;
  fo << first << std::endl;
  switch(first)
  {
    case 'i':
      read_and_sort_decide_container<int>(fi, fo);
      break;
    
    case 'u':
      read_and_sort_decide_container<unsigned>(fi, fo);
      break;

    case 'f':
      read_and_sort_decide_container<float>(fi, fo);
      break;

    case 'd':
      read_and_sort_decide_container<double>(fi, fo);
      break;

    case 'c':
      read_and_sort_decide_container<char>(fi, fo);
      break;

    case 's':
      read_and_sort_decide_container<std::string>(fi, fo);
      break;
  }
}