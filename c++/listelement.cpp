#include <iostream>

#include "CList.cpp"  //con

 

// The main method

void main(int argc, char *argv[])

{

            CList list;                      // creating an object of list

            int i, N=10, M=3;           

            for(i=1; i <= N; i++ ) list.add(i); // initializing the list with values

 

            list.start();                     // pointing the pointers at the start of the list

           

            // counting upto M times and removing the element

            while( list.length() > 1 ) {

                for(i=1; i <= M; i++ ) list.next();

                         cout << "remove: " << list.get() << endl;

                         list.remove();

            }

 

            cout << "leader is: " << list.get() << endl;            //displaying the remaining node

}

 
