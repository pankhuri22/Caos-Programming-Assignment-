//pankhuri kasliwal
//2016253
void *malloc(size_t size) {
  void *p ;
  *p = sbrk(0);
  void *req
  *req = sbrk(size);
  if (req == (void*) -1) {
    return NULL;//x
  } else {
    assert(p == req);
    return p;
  }
}
