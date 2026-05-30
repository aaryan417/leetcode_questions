class Foo {
public:
mutex mtx;
condition_variable cv;
int state;

    Foo() {
       state =0; 
    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        unique_lock<mutex> lock(mtx);
        state =1;
        cv.notify_all();

    }

    void second(function<void()> printSecond) {
        
        // printSecond() outputs "second". Do not change or remove this line.
        
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, [this]{
            return state >= 1;
        }
    );
      printSecond();
      state =2;
      cv.notify_all();
    }
    void third(function<void()> printThird) {
        
        // printThird() outputs "third". Do not change or remove this line.
        
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, [this]{
            return state >= 2;
        }
    );
       printThird();
       state =3;
      cv.notify_all();
    }
};