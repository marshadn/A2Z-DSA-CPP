// // #include <stdio.h>
// // int MAX = 10, top = -1;
// // int a[10];

// // void push()
// // {
// //     int val;

// //     if (top == MAX - 1)
// //         printf("\n STACK OVERFLOW!!!");
// //     else
// //     {
// //         printf("\n Enter value to be inserted: ");
// //         scanf("%d", &val);
// //         top++;
// //         a[top] = val;
// //         printf("\n %d inserted to the stack", val);
// //     }
// // }

// // int pop()
// // {
// //     if (top == -1)
// //         printf("\n STACK UNDERFLOW!!!");
// //     else
// //     {
// //         int v = a[top];
// //         top--;
// //         printf("\n Removed Element: %d", v);
// //     }
// // }

// // int peek()
// // {
// //     if (top == -1)
// //         printf("\n STACK EMPTY!!!!");
// //     printf("\n Element in top of stack: = %d ", a[top]);
// // }

// // void display()
// // {
// //     if (top == -1)
// //         printf("\n STACK EMPTY!!!!");
// //     else
// //     {
// //         printf("\n STACK ELEMENTS: ");
// //         for (int i = 0; i <= top; i++)
// //             printf("%d ", a[i]);
// //     }
// // }

// // void main()
// // {
// //     printf("Enter max size of stack: ");
// //     scanf("%d", &MAX);
// //     int ch = 4;
// //     do
// //     {
// //         printf("\n\n 1: Push\n 2: Pop\n 3: Stack Display\n 4: Peek\n 5: Exit\n Enter your choice: ");

// //         scanf("%d", &ch);
// //         switch (ch)
// //         {
// //         case 1:
// //             push();
// //             break;
// //         case 2:
// //             pop();
// //             break;
// //         case 3:
// //             display();
// //             break;
// //         case 4:
// //             peek();
// //             break;
// //         }
// //     } while (ch < 5);
// // }
// #include <stdio.h>
// #include <stdlib.h>

// int MAX = 10;
// int a[10];
// top = -1;

// void push(){
//     int value;
//     if(top==MAX-1)
//         printf("Stack Overflow");
//         else{
//             printf("Enter the data to be inserted:");
//             scanf("%d", &value);
//             top++;
//             a[top] = value;

//             printf("%d value inserted:", value);
//         }
// }

// void pop()[
    
// ]
// void main(){
//     int choice;
//     do{
//         printf("\nStack Operations By Array:");
//         printf("\n1.push\n2.pop\n3.display\n4.peek\n5.exit");
//         printf("\nEnter Your choice::");
//         scanf("%d", &choice);
//         switch(choice){
//             case 1:
//                 push();
//                 break;
//             case 2:
//                 pop();
//                 break;
//             case 3:
//                 display();
//                 break;
//             case 4:
//                 peek();
//                 break;
//             case 5:
//                 exit(0);
//                 break;
//         }
//     } while (choice != 5);
//     printf("Invalid option");
// }