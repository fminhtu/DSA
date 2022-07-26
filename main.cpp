#include<Library.h>
#include<deque>
#include<forward_list>
#include<map>
#include<unordered_map>
using namespace std;

int main() {
    // int arr[] = { 6, 4, 5, 8, 11, 11, 26, 99, 32, -1, -5 };
    // int size = sizeof(arr) / sizeof(arr[0]);
    // quickSort(arr, 0, size - 1);
    // show(arr, size);

    // cout << kthSmallest(arr, 0, size - 1, 3) << endl;

    string txt= "aa";
    string pat = "ab";
    KMPSearch(txt, pat);

    // cout << GCD(270, 192) << endl;
    // LinkedList l = LinkedList();
    // l.addHead(6);
    // l.addHead(5);
    // l.addHead(4);
    // l.addHead(3);
    // l.addHead(2);
    // l.addHead(1);
    // l.addHead(0);
    // l.show();
    // l.connectTailWithHead();
    // detectLoop(l);

//     std::unordered_map<std::string,std::string> mymap = {
//             {"house","maison"},
//             {"apple","pomme"},
//             {"tree","arbre"},
//             {"book","livre"},
//             {"door","porte"},
//             {"grapefruit","pamplemousse"}
//   };
//     mymap.insert({"house","kakaka"});
//   unsigned n = mymap.bucket_count();

//   std::cout << "mymap has " << n << " buckets.\n";

//   for (unsigned i=0; i<n; ++i) {
//     std::cout << "bucket #" << i << " contains: ";
//     for (auto it = mymap.begin(i); it!=mymap.end(i); ++it)
//       std::cout << "[" << it->first << ":" << it->second << "] ";
//     std::cout << "\n";
//   }

//     std::cout << "||" << mymap["hihi"] << "||" << endl;
    // int b = 121;

    // for (int i = 0; i < 10; i++) {
    //     cout << (b & i) << endl;
    // }
    // int x = 123;
    // int number = 0;
    // int k = 0;

    // while (x > 0) {
    //     k = x % 10;
    //     x /= 10;

    //     number = number * 10 + k;
    // }

//    std::set<int> myset;
//   std::set<int>::iterator it;
//      myset.insert(90);
//   // set some initial values:
//   for (int i=1; i<=5; i++)
//    myset.insert(i*10);    // set: 10 20 30 40 50


//   it=myset.find(30);
//   myset.erase (it);
//   myset.erase (myset.find(40));

//   std::cout << "myset contains:";
//   for (it=myset.begin(); it!=myset.end(); ++it)
//     std::cout << ' ' << *it;
//   std::cout << '\n';

return 0;
}