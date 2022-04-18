#include <iostream>
using namespace std;
#include"NODE.h"

NODE::NODE(int x, int z){
      size=x;
      next=NULL;
      indi = z;
      cout<<"adding "<< x<<endl;
}
  NODE:: ~NODE(){
      cout<<"Node "<<size<<" is being deleted"<<endl;
}
NODE* NODE::move_next(){
      return next;
}
void  NODE:: show_node(){
         cout<<"Node size:"<<size<<endl;
 }
void NODE::insert(NODE*& x){
     x->next=this;
     }

int NODE::get_size1(){
  //cout<<"The size of this node is "<<size<<endl;
  return size;
}

int NODE::get_size2(){
  return size=0;
}

int NODE::get_indi(){
  return indi;
}