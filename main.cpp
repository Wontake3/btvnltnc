 /* #include <bits/stdc++.h>

using namespace std;

 int arithmetic(int num1, int num2, char op);
  int main(int argc, char* argv[]){
   int num1, num2;
   char op;
   cin >> num1 >> op >> num2;

   num1 = atoi(argv[1]);
   op = argv[2][0];
   num2 = atoi(argv[3]);
    cout << num1 << op << num2;
   cout << arithmetic(num1, num2, op) << endl;
   return 0;

  }
  int arithmetic(int num1, int num2, char op)
  {
      switch(op){
  case '+':
    return num1 + num2;
  case '-':
    return num1 - num2;
  case 'x':
    return num1 * num2;
  case '/':
    if (num2==0){
        cout << "INVALID DIVISOR" << endl;
        exit(1);
    }
    else
        return num1 / num2;
  case '%':
    if (num2==0) {
        cout << "INVALID DIVISOR" << endl;
        exit(1);
    }
    else
        return num1 % num2;
  default:
    cout << "Invalid operator" << endl;
    exit(1);
      }
  }  */

  #include <bits/stdc++.h>
  using namespace std;
   double calculate(double num1, char op, double num2) {
    double result;
     switch (op) {
  case '+':
     return  num1 + num2;
     break;
  case '-':
    return  num1 - num2;
    break;
  case '*':
    return  num1 * num2;
    break;
  case '/':
    if (num2 != 0) {
        result = num1/ num2;
    } else { return 0;}
      break;

   } cout << fixed << setprecision(2);
   return result; }

   int main(){
    double num1, num2;
    char op;
    cin >> num1 >> op >> num2;

    cout << calculate(num1,op,num2) << endl;
   }
























