typedef struct SEToken SEToken;
typedef struct SECursor SECursor;

struct SEToken {
  char s[48];
  unsigned long c;
  unsigned long t;
};

struct SECursor {
  unsigned long i;
  unsigned long p;
  unsigned long e;
  char *s;
};

extern SECursor se_init(char *s);
extern SEToken se_next(SECursor *c);

