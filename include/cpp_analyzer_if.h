#ifndef _CPP_ANALYZER_IF_H_
#define _CPP_ANALYZER_IF_H_

#include "general_analyzer_if.h"
#include "osm_change.h"
#include <string>
#include <vector>

namespace osm_diff_analyzer_cpp_if
{
  class cpp_analyzer_if: public osm_diff_analyzer_if::general_analyzer_if
  {
  public:
    virtual void analyze(const std::vector<osm_api_data_types::osm_change*> & p_changes)=0;

    inline virtual ~cpp_analyzer_if(void){};
  };
}
#endif
//EOF
