 
/* tst-loopque.cpp
 test program for <LoopQue> class
 Author: ZhangTao
 Date: July 27, 2009
*/
 
# include       <iostream>
# include       <cstdlib>       // for <atol> function
# include       "xtl/LoopQue.h"
 
int
main(int argc, char **argv)
{
  int  qsize = 0;
 
  if ( argc > 1 )
    qsize = atol(argv[1]);
 
  if ( qsize < 1 )
    qsize = 5;
 
  xtl::LoopQue<int>  queue(qsize);
  for ( int i = 0; i < (qsize - 1); i++ )       {
     queue.push(i);
     std::cout << "Loop push:" << i << "\n";
  }
 
  queue.check_push(1000);
  std::cout << "Full:" << queue.full() << " Size:"
        << queue.size() << "\n\n";
 
  for ( int i = 0; i < qsize; i++ )   {
    int val = queue.front();
    std::cout << "Loop pop:" << val << "\n";
    queue.pop();
  }
 
  std::cout << "\nEmpty:" << queue.empty() << " Size:"
        << queue.size() << "\n";
  return 0;
 
} 