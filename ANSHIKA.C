void f1()
{
printf("this is f1 function");

}
void f2()
{
printf("this is f2 function");
}
#pragma startup f1
#pragma exit f2
void main()
{
printf("this is main");
}
