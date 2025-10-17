#ifndef MAPPINGS_H
#define MAPPINGS_H

#include <inttypes.h>

struct Mapp {
  uint64_t value;
  const char *macro;
};

extern struct Mapp d_ehtypes[];
extern struct Mapp d_class[];
extern struct Mapp ei_data[];
extern struct Mapp d_ehmachines[];
extern struct Mapp d_phtypes[];
extern struct Mapp d_phflags[];
extern struct Mapp d_shtypes[];
extern struct Mapp d_shflags[];
extern struct Mapp d_sttypes[];
extern struct Mapp d_stbinds[];
extern struct Mapp d_stvisible[];
extern struct Mapp rtypes[];

struct DTypes {
  uint64_t value;
  const char* macro;
  const char* d_un;
  const char* interp;
};

extern struct DTypes d_dtypes[];
struct DTypes *find_tag(uint64_t v);

#endif