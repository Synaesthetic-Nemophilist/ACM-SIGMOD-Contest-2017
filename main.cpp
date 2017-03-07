#include <iostream>


using namespace std;


typedef struct tnode *Tptr;
typedef struct tnode {
    char splitchar;
    Tptr lokid, eqkid, hikid;
} Tnode;


int rsearch(Tptr, char);


int main() {


    return 0;
}



int rsearch(Tptr p, char *s) {
    if ( !p ) return 0;

    if ( *s < p->splitchar )
        return rsearch( p->lokid, s );
    else if ( *s > p->splitchar )
        return rsearch( p->hikid, s );
    else {
        if ( *s == 0 ) return 1;
        return rsearch( p->eqkid, ++s );
    }
}
