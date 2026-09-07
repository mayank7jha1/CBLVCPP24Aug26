#include <iostream>
using namespace std;

// Single Line Comment
// /**/ : Multiline Comment

/*
 *  Hi My name is Mayank.
 *  How are you.
 *  I am fine.
 *
 */

int main() {

  // Variable Definition:
  int x;

  // Variable Definition and Initialisation :

  // 1. Variable Initialisation using copy assignment operator.

  // Advantage :
  // 1. Easy to write
  // 2. We can re-initialise using the copy assignment operator.

  // Disadvantage:
  // 1. This was very slow Earlier now this is fast, in general copy operation
  // is a slow operation.
  // 2. This allows narrowing of the data.

  int a = 10;
  // Re-Initialise :
  a = 100;

  // Variable Definition and Copy List Initialisation.
  // Adantage:
  // 1. Uniform (Meaning In general for any container apart of container adapter
  // (stack,queue,priority queue)) and associative containers
  // (map,unordered_map,set,unordered_set) you can use this method to initialise
  // any container.

  // Disadvantage:
  // 1. Again You are coping the content which is expensive.
  int b = {10};

  // int c[] = {2, 1, 3, 4};

  // Variable Definition and Direct List Initialisation:

  // Advantage:
  // 1. Fastest.
  // 2. Doesn't allow narrowing of data.
  // 3. Uniform
  int d{10};

  // int e[]{3, 2, 1, 2, 34};

  // Variable Definiton and Value/Zero Initialisation
  // We use this to initialise all the values of the bucket with zero.
  // Uniform
  int f{};

  // Narrowing of the Data:

  int m = 100.6787; // Now m will still store 100 as the value.

  // int n{100.6767}; // This will produce error
}
