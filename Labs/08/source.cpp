


// includes 
#include <iostream>
#include <algorithm>

using std::string;

template<class T>
T max_numbers(T arr[], int size)
{
    // loop through the array and find the largest item
    T largest = arr[0];
    for(int i = 1; i < size; i++)
    {
        // this works on strings and does length it would seem
        if(arr[i] > largest)
            largest = arr[i];
    }

    return largest;
}



int main()
{
    // declare variables 
    const int SIZE_DOUBLE = 4;
    const int SIZE_INT = 6;
    const int SIZE_STRING = 5;

    // define constant arrays 
    double array_double[SIZE_DOUBLE] = { -3.4, 58.1, -76.4, 34.4};
    int array_int      [SIZE_INT]    = { 2, 3, 81, 1, 9, 22 };
    string array_string[SIZE_STRING] = { "Ontario", "Tech", "University", "Oshawa", "Canada"};

    // ah yes, the required use of lambda where it's easier to not use them, and more readable
    // so here, i give you the lambda you crave <3 

    // main lambda method, contains all the lambda for program to work, each 1 is very important 
    [&](){[&](){[&](){[&](){[&](){[&](){[&](){[&](){[&](){[&](){[&](){[&](){[&](    ){[&](){[&](){[&](){
    [&](){[&]() {[&](){[&](){[&](){[&]( ){[&](){[ &](){[&](){[&](){[&]()   {[&]( ){[&](){[&](){[&](){[&](){
    [&](){[&]() {[&](){   [&] ( ){ [ &]    ()     {[&    ](){[&](  ){[&]  ()  {[    &](){[&](){[&](){[&](){[&](){[&](){[&](){[&](){
    [&](){[&]() {[&]() { [ &] (){ [& ]( ){ [& ]() {[ & ]  (){[&] ( ) {[&    ](){ [&](){[&](){[&](){[&](){[&](){[&](){[&](){
    [&](){[&]()    {[& ]() {[ &](){[ &]    ()     {[ &]() {[&]( ){[&] ()  {[  &]    (){[&](){[&](){[&](){[&](){[&](){[&](){[&](){
    // display output for the double array
    std::cout << "Array of decimals...\n";
    // print the thing 
    // std::for_each(array_double, array_double + SIZE_DOUBLE, [](double x) { std::cout << x << ", "; });
    std::for_each(array_double, array_double + SIZE_DOUBLE, 
        [](double x){[&x](){}();[&x](){}();[&x]  (){}();[&x](){}();[&x](){}();[&x](){ }();[&x](){}(); 
        [](double x){[&x](){      }();[&x](){}();[&    x](){}  ();[&x](){}();[&x](){}( );[&x](){}();[&x](){}(); 
        [](double x){[&x](){  }(  );[      &x](  ){  }(  );[&  x](){}();[&x](){}();[&x] (){}();[&x](){}();[&x](){}(); 
        [](double x){[&x](){      }();[&x]  (){  }(  );[  &x]  (){}();[&x](){}();[&x](){ }();[&x](){}();[&x](){}(); 
        [](double x){[&x](){  }();[&x       ]()  {}  ();[  &x  ](){}();[&x](){}();[&x](){ }();[&x](){}();[&x](){}(); 
        [](double x){[&x](){  }();[&  x]()   {}  ()  ;[&x]  () {}();[&x](){}();[&x](){}(); [&x](){}();[&x](){}(); 
        [](double x){[&x](){  }();[&         x]  ()  {}();[    &x](  ){}();[&x](){}();[&x](){}();[&x](){}();[&x](){}(); 
        [](double x) { std::cout << x << ", "; }(x);}(x);}(x);}(x);}(x);}(x);}(x);}); 
    std::cout << "\nThe largest double: " << max_numbers(array_double, SIZE_DOUBLE) << std::endl;

    // display output for the int array
    std::cout << "\n\nArray of integers...\n";
    // print the thing 
    // std::for_each(array_int, array_int + SIZE_INT, [](int x) {std::cout << x << ", ";});
    std::for_each(array_int, array_int + SIZE_INT, 
        [](int x){[&x](){}();[&x](){}();[&x](){}();[&x](){}();[&x](){}();[&x](){}();[&x](){}(); 
        [](int x){[&x]         ()  {}()  ;[  &x](    ){}();[&x]()  {}()    ;[&x](){}();[&x](){}();[&x](){}();[&x](){}(); 
        [](int x){[&x](){}  ();[&  x]()  {}();[&  x]  (){}();[&x](){}(  );[  &x](){}();[&x](){}();[&x](){}(); 
        [](int x){[&x](){}  ();[&  x]()  {}  ();   [&x](){}();[&x  ]()   {}();[&x](){}();[&x](){}();[&x](){}(); 
        [](int x){[&x](){}  ();[&        x]  (){}(   );[&x](){}()  ;[&x]   (){}();[&x](){}();[&x](){}();[&x](){}(); 
        [](int x){[&x](){}  ();[&  x]()  {}  ()  ;[&  x](){}();[&  x]  (){  }();[&x](){}();[&x](){}();[&x](){}(); 
        [](int x){[&x](){}  ();[&  x]()  {}  ();      [&x](){}();  [&x      ](){}();[&x](){}();[&x](){}();[&x](){}();  
        [](int x){std::cout << x << ", "; }(x);}(x);}(x);}(x);}(x);}(x);}(x);});
    std::cout << "\nThe largest integer: " << max_numbers(array_int, SIZE_INT) << std::endl;
    
    // display output for the string array
    std::cout << "\n\nArray of characters...\n";
    // print the thing 
    // std::for_each(array_string, array_string + SIZE_STRING, [](string x) {std::cout << x << ", ";});
    std::for_each(array_string, array_string + SIZE_STRING, 
        [](string x){[&x](){}();[&x](){}();[&x](){}();[&x](){}();[&x](){}();[&x](){}();[&x](){}(); 
        [](string x){[&x](){      }();[&x](){}(  );[&  x](){}  ();[&x](){}();[&x](){}();[&x](){}();[&x](){}(); 
        [](string x){[&x](){  }(  );[      &x](){}(  ); [&x](  ){}();[&x](){}();[&x](){}();[&x](){}();[&x](){}(); 
        [](string x){[&x](){      }();[&x]  (){  }(  );  [&x]  (){}();[&x](){}();[&x](){}();[&x](){}();[&x](){}(); 
        [](string x){[&x](){  }();[&x       ]()  {}  ();[  &x  ](){}();[&x](){}();[&x](){}();[&x](){}();[&x](){}(); 
        [](string x){[&x](){  }();[&  x]()   {}  ()  ;[&x  ](  ){}();[&x](){}();[&x](){}();[&x](){}();[&x](){}(); 
        [](string x){[&x](){  }();[&         x]  ()  {}();    [&x  ](){}();[&x](){}();[&x](){}();[&x](){}();[&x](){}(); 
        [](string x){std::cout << x << ", "; }(x);}(x);}(x);}(x);}(x);}(x);}(x);});
    std::cout << "\nThe largest character sequence: " << max_numbers(array_string, SIZE_STRING) << std::endl;
    }();}();}();}();}();}();}();}( );}();}() ;}();}() ;}();}();} ();}();
    }();}();}() ;}();}();}();}()  ;}();} () ; }  ();}( );}( );}() ;}() ;}();}();
    }();}();}(); }();  } ( );}();}( );} (  );} ();}( ); }( ) ;} () ;} ( )  ;   }();}();}();
    }();}();}();}( );}();}()  ; }();  }();}();}() ; }();  }()  ;}() ;}() ;} ();}();
    }();}();}();}();}();}();}();}();}();}();}();}( );}();}();}();}() ;
    return 0;
}

