#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdint.h>
#include "odb.h"
#include "bptree.h"

#include "xxhash.h"
typedef uint64_t u64; // use unsigned for hash values
// // example of how to efficiently compute multiple hash value for bloom filters
// // A similar approach is also used by LevelDB:
// //    https://github.com/google/leveldb/blob/master/util/bloom.cc
// const u64 hash0 = XXH64(buffer, length, 0);
// const u64 hash1 = (hash0 >> 17) | (hash0 << 47);
// const u64 hash2 = (hash1 >> 17) | (hash1 << 47);
// // hash3 ... hash6

// TODO: add helper functions when necessary

struct odb {
  // TODO: Your code here:
};

  struct odb *
odb_create(void)
{
  // TODO: Your code here:
  return NULL;
}

  bool
odb_insert(struct odb * const tree, const long key, const long value)
{
  // TODO: Your code here:
  return false;
}

  bool
odb_lookup(struct odb * const tree, const long key, long * const value_out)
{
  // TODO: Your code here:
  return false;
}

  void
odb_destroy(struct odb * const tree)
{
  // TODO: Your code here:
}
