#ifndef Link_h
#define Link_h

#include <string>
#include <vector>
#include "Node.h"

namespace BasicNetwork
{
	class Link
	{//A link connecting 2 nodes. It can be directed or undirected.
		private:
			int cost;//The cost of the link.
			Node *node1;//One of the nodes if undirected. The beginning node if directed.
			Node *node2;//The other node if undirected. The end node if directed.
			bool directed;//Directed if true, undirected if false.

		public:
			void setCost( int newCost );
			int getCost();
			void setFirstNode( Node *newNode );
			int getFirstNode();
			void setSecondNode( Node *newNode );
			int getSecondNode();
			void setDirected( bool newDirected );//True means directed, false means undirected.
			int getDirected();//True means directed, false means undirected.
	}
}

#endif /* Link_h */