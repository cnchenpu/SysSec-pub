public class Example {
        public static void main(String[] args) {
                Example example = new Example();
                example.fun1(1);
        }

        private void fun1(int arg) {
                int local_var1 = 1;
                fun2();
        }

        private void fun2() {
                Object o = new Object();
                fun3(o);
        }

        private void fun3(Object obj) {
                int local_var2 = 3;
                String string = "Hello";
                System.out.println(string);
        }
}
