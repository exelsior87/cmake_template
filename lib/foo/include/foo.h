#ifndef __foo_h
#define __foo_h

#ifdef __cplusplus
extern "C" {
#endif __cplusplus

class foo {
public:
    foo();
    ~foo();

    void print(void);
};

#ifdef __cplusplus
}
#endif  // __cplusplus
#endif  // __foo_h