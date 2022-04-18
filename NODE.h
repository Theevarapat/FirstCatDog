class NODE{
      int size, indi;
      NODE* next;
public:
        NODE(int, int);
        virtual void show_node();
        void insert(NODE*&);
        NODE* move_next();
        ~NODE();
        int get_size1();
        int get_size2();
        int get_indi();
      };
