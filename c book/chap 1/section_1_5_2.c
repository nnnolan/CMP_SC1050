#include <stdio.h>

/* count characters , first version */
main ()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);


    // second version
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ; // floating semi-colon because c requires a statement, c is weird
    printf("%.0f\n", nc); // %f is both for float and double, %.0f means no decimal places


    //1.5.3 counting lines
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
}
