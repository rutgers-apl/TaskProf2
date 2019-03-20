#ifndef REGIONINFO_H
#define REGIONINFO_H

#include <string>

//#define FILE_NAME_SIZE 64

struct Location {
  //char filename[FILE_NAME_SIZE];
  std::string filename;
  int line;
};

struct RegionInfo {
  struct Location region_begin;
  struct Location region_end;
  size_t region_work;
};

#endif
