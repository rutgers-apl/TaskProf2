#ifndef CALL_SITE_DATA_H
#define CALL_SITE_DATA_H

struct CallSiteData {
  //size_t ss_id;
  const char* cs_filename;
  int cs_line_number;
  bool par_for;
};

#endif
