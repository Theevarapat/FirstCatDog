#include <iostream>
#include"NODE.h"
#include"LL.h"
using namespace std;
LL::LL(){
       hol=NULL;
       size=0;
}

LL::~LL(){
       int i;
	NODE *t;
	for(i=0;i<size;i++){
		t=hol;
		hol=hol->move_next();
		delete t;
	}
	
}

void LL::show_all(){
     NODE* t=hol;
     int i;
  cout<<"=================="<<endl;
     for(i=0;i<size;i++){
       if(t->get_size1()==0)
       {
         t = t->move_next();
       }
       else{
        t->show_node();
	      t=t->move_next();
         }
     }
}
void LL::add_node(NODE *&A){

          hol->insert(A);
          hol=A;

       size++;

 }

void LL::snap_finger(NODE *&A){
 int kill, half, inca=0;
 NODE* S;
  srand(time(NULL));
  half= size/2;
 
  //cout<<"Half is "<<half<<endl;

    //A->show_node();
    //S->show_node();
  while(A->move_next()!=NULL){
    S=A;
    kill=rand()%size;  //สุ่มฆ่า
   //cout<<"Kill is "<<kill<<" Size is "<<size<<endl;
    kill = kill+1;
    while(S->get_size1()!=kill&&S->move_next()!=NULL){
      S=S->move_next();
    }
    if(S->get_size1()==kill){
      if(S->get_size1()!=0){
        S->get_size2();
        S=S->move_next();
        inca=inca+1;
        //cout<<"Inca is "<<inca<<endl;
        }
      }
    if(inca==half)
    {
      break;
    }
    }
}