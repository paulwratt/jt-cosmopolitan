#ifndef COSMOPOLITAN_LIBC_STDIO_STRLIST_H_
#define COSMOPOLITAN_LIBC_STDIO_STRLIST_H_
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

struct StrList {
  int i, n;
  char **p;
};

void FreeStrList(struct StrList *) hidden;
int AppendStrList(struct StrList *) hidden;
void SortStrList(struct StrList *) hidden;
int JoinStrList(struct StrList *, char **, uint64_t) hidden;

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_STDIO_STRLIST_H_ */
