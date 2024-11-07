 /*
 operators:
 unary,binary - operators:
 unary - ++,--,+(unaryplus),-(unaryminus) for signed integers
 binary:
 Arithmetic Operations:+,-,*,/(Returns the quotient quotient = dividend / divisor; )
 ,%(Returns the remainder after diving the left operand with the right operand.)
 
 Relational Operators:==,!=,<(lessthan),>(greaterthan),<=,>=
 
 Logical Operators:
 &&(Logical AND Returns true if both the operands are true.)
 ||(Logical OR	Returns true if both or any of the operand is true.)
 !(Logical NOT	Returns true if the operand is false.)
 
 Bitwise Operators:
&
Bitwise AND	Performs bit-by-bit AND operation and returns the result.	a & b

|
Bitwise OR	Performs bit-by-bit OR operation and returns the result.	a | b

^
Bitwise XOR	Performs bit-by-bit XOR operation and returns the result.	a ^ b

~
Bitwise First Complement	Flips all the set and unset bits on the number.	~a

<<
Bitwise Leftshift	Shifts the number in binary form by one place in the operation and returns the result.	a << b

>>
Bitwise Rightshilft	Shifts the number in binary form by one place in the operation and returns the result.	a >> b
 */
 
#include<stdio.h>
int main(){
    //unary 
    int a=10;
    printf("unary\n");
    printf("unary ++=%d\n",a++);
    printf("unary ++=%d\n",++a);
    printf("unary --=%d\n",a--);
    printf("unary +=%d\n",+a);
    printf("unary -=%d\n",-a);
    
    //binary
    //Arithmetic
    a=10;
    int b=20;
    printf("Arithmetic\n");
    printf("+=%d\n",a+b);
    printf("-=%d\n",a-b);
    printf("*=%d\n",a*b);
    printf("/=%d\n",a/b);
    printf("%=%d\n",a%b);
    
    //Relational
    a=10;
    b=20;
    printf("Relational\n");
    printf("==%d\n",a==b);
    printf("!=%d\n",a!=b);
    printf("<%d\n",a<b);
    printf(">%d\n",a>b);
    printf("<=%d\n",a<=b);
    printf(">=%d\n",a>=b);
    
    //Logical
    a=10;
    b=20;
    int c=10;
    printf("Logical\n");
    printf("&&=%d\n",a==b&&b==c);
    printf("||=%d\n",a==b||a==c);
    printf("!=%d\n",!a==c);
    
    //Bitwise
    a=10;
    b=5;
    printf("Bitwise\n");
    printf("&=%d\n",a&b); 
    /*
        1 2 4 8
        0 1 0 1 =10
    &   1 0 1 0 =5
        0 0 0 0
    */
    a=10;
    b=5;
    printf("|=%d\n",a|b);
    /*
      1 2 4 8
      0 1 0 1 =10
    | 1 0 1 0 =5
      1 1 1 1 =15
    */
    return 0;
}

