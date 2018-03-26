#include <iostream>
using namespace std;

struct node {
	int value;
	node *leftchild;
	node *rightchild;
};
class bst{
	node *root;
	public:
	bst()
	{
	  root=NULL;
	}
	void insert(int item);
	void disp();



};
void bst::insert(int item){

	node *p=new node;
	node *parent;
	p->value=item;
	p->leftchild=NULL;
	p->rightchild=NULL;
	parent=NULL;
	if (root=NULL)
	{
		root=p;
	}
	else{
		node *ptr;
		ptr=root;
		while(ptr!=NULL)
			{
			parent=ptr;
			if(item>ptr->value)
			{
				ptr=ptr->rightchild;
			}
			else{
				ptr=ptr->leftchild;
				}



		}
}
}
void bst::disp(){
	node* temp=new node;
	if (temp=NULL){
        return;
}
	else{
	disp(temp->leftchild);
	cout<<temp->value;
	disp(temp->rightchild);
}


}
int main()
{
	bst b;
	b.insert(52);
	b.insert(25);
	b.insert(50);
	b.insert(15);
	b.insert(40);
	b.insert(45);
	b.insert(20); 

	b.disp();
	cout<<b.disp();



}
