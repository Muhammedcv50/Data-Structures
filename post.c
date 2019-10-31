
#include <stdio.h>
#include <string.h>


double stack[20];

int top = -1;

void push(double c)
{
    if (top >= 20)
    {
        printf("\nOverflow\n");
        return;
    }
    else
    {
        stack[++top] = c;
    }
}

double pop()
{
    if (top < 0)
    {
        printf("\nUnderflow\n");
        return -1;
    }
    else
    {
        return stack[top--];
    }
}




int power(double a, int b)
{
    int p = 1;
    for (int i = 0; i < b; i++)
    {
        p *= a;
    }
    return p;
}

void main()
{
    int len;
    float a, b;

    char s[20], post[20], temp;

    printf("Postfix expression - ");
    scanf("%s", s);

    len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        switch (s[i])
        {

        case '^':

            b = pop();
            a = pop();
            push(power(a, b));
            break;

        case '*':

            b = pop();
            a = pop();
            push(a * b);
            break;

        case '/':

            b = pop();
            a = pop();
            push(a / b);
            break;

        case '+':
       		    		
            b = pop();
            a = pop();
            push(a + b);
            break;

        case '-':

            b = pop();
            a = pop();
            push(a - b);
            break;

        default:

            printf("%c - ", s[i]);
            scanf("%f", &a);
            push(a);
            break;
        }
    }

    printf("\nResultant value - %f\n", pop());
}

