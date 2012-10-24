#ifndef _CPP_ANALYZER_BASE_H_
#define _CPP_ANALYZER_BASE_H_

#include "analyzer_base.h"
#include "cpp_analyzer_if.h"

namespace osm_diff_analyzer_cpp_if
{
  class cpp_analyzer_base: public osm_diff_analyzer_if::analyzer_base, public cpp_analyzer_if
  {
  public:
    inline cpp_analyzer_base(const std::string & p_type,
			     const std::string & p_name,
			     const std::string & p_output_type);
    inline const std::string & get_name(void)const;
  private:
  };
  //----------------------------------------------------------------------------
  cpp_analyzer_base::cpp_analyzer_base(const std::string & p_type,
				       const std::string & p_name,
				       const std::string & p_output_type):
    osm_diff_analyzer_if::analyzer_base(p_type,p_name,"cpp",p_output_type)
    {
    }
    //----------------------------------------------------------------------------
    const std::string & cpp_analyzer_base::get_name(void)const
      {
        return osm_diff_analyzer_if::analyzer_base::get_name();
      }
}
#endif // _CPP_ANALYZER_BASE_H_
//EOF
