#ifndef MAPPINGS_H
#define MAPPINGS_H

#include <inttypes.h>

struct Mapp {
  uint64_t value;
  const char *macro;
};

extern struct Mapp d_ehtypes[];
extern struct Mapp d_ehmachines[];
extern struct Mapp d_phtypes[];
extern struct Mapp d_phflags[];
extern struct Mapp d_shtypes[];
extern struct Mapp d_shflags[];
extern struct Mapp d_sttypes[];
extern struct Mapp d_stbinds[];
extern struct Mapp d_stvisible[];
extern struct Mapp rtypes[];
extern struct Mapp d_dtypes[];

#endif