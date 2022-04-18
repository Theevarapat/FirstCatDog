//
//  cat_dog.h
//  LLC1
//
//  Created by 6272 on 22/3/2562 BE.
//  Copyright © 2562 6272. All rights reserved.
//
//#ifndef cat_dog_h
//#define cat_dog_h

class cat:public NODE{
    int size;
public:
    cat(int=0, int=0, int=0);
   ~cat();
    void show_node(){
        cout<<"Meaw  "<<size<<" ";
        NODE::show_node();
    }

};

cat::cat(int x, int y, int z):NODE(y,z){
  size = x;
}
cat::~cat(){
  cout<<"destruct meow"<<endl;
}

class dog:public NODE{
    float height;
public:
    dog(float=0.0, int=0, int=1);
    ~dog();
    void show_node(){
        cout<<"Hong Hong  "<<height<<" ";
        NODE::show_node();
    }

};

dog::dog(float x, int y, int z):NODE(y,z){
  height = x;
}

dog::~dog(){
  cout<<"Destruct Hong"<<endl;
}
