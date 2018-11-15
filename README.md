#C Smart String 



Little function to create string from variables without using **strjoin**.

Currently supported arguments:
* char*
* int
* unsigned int

#### Example
```$xslt
char            *a = "Hello world";
int             b = -1654561;
unsigned int    c = 564186513;

char *smart_l = sstring("%s, %i, %u", a, b, c);

printf("%s\n", smart_l);

--> Hello world, -1654561, 564186513
```

#### Changelog

## 0.0.1 - 15.11.2018
* initial release