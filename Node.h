#ifndef Node_h
#define Node_h

#include <string>
#include <vector>
#include "Link.h"

namespace BasicNetwork
{
	class Node
	{//A node of a basic network with directed links.
		private:
			std::string name;//The name of the 
			std::vector<Link *> neighbors;//A list of links connected to this node.

		public:
			void setName( std::string newName );
			std::string getName();
			void addLink( Link *newLink );//Add a link to this node.
			Link *getLink( int index );//Get link at the specified index. Index starts at 1 and goes to the number of connected links.
			int getLinkCount();//Returns the number of links connected to this node.
			void clearLinks();//Clears the list of links without deleting the links themselves.
	}
}

#endif /* Node_h */