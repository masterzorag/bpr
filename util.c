#include "typedef.h"

void __err(const char *msg,int ret)
{
  if (!ret) {
    ret=1;
  }
  if (!!msg) {
    fprintf(stderr,"__err(%d): %s\n",ret);
    exit(ret);
  }
}

void __mav_end(const double v,const double t)
{
  if (!v || !t) {
    __err("invalid params given",1);
  }
  if (v<=0.0 || t<=0.0) {
    __err("params must be >0",2);
  }
  while (!__is_time(t)) {
    mav(v);
  }
}  