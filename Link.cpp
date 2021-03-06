#include "Link.h"

/*
namespace BasicNetwork
{
	class Link
	{//A link connecting 2 nodes. It can be directed or undirected.
		private:
			int cost;//The cost of the link.
			Node &node1;//One of the nodes if undirected. The beginning node if directed.
			Node &node2;//The other node if undirected. The end node if directed.
			bool directed;//Directed if true, undirected if false.
			int maxCapacity;//THe maximum amount of whatever that can move through the link. For example, this could be the maximum amount of current flowing through a wire or the maximum number of cars that can move througha street per unit of time.
			std::string name;//The name of the link, possibly the display name.
			std::string ID;//The ID of the link, possibly a technical ID/number meant to be used internally.
			std::string description;//A description of the link.

		public:
			void setCost( int newCost );
			int getCost();
			void setFirstNode( Node &newNode );
			Node &getFirstNode();
			void setSecondNode( Node &newNode );
			Node &getSecondNode();
			void setDirected( bool newDirected );//True means directed, false means undirected.
			int getDirected();//True means directed, false means undirected.
			void setMaxCapacity( int newMaxCapacity );
			int getMaxCapacity();
			void setName( std::string newName );
			std::string getName();
			void setID( std::string newID );
			std::string getID();
			void setDescription( std::string newDescription );
			std::string getDescription();
	}
}
*/

namespace BasicNetwork
{
	void Link::setCost( int newCost )
	{
		cost = newCost;
	}

	int Link::getCost()
	{
		return cost;
	}

	void Link::setFirstNode( Node &newNode )
	{
		node1 = newNode;
	}

	Node &Link::getFirstNode()
	{
		return node1;
	}

	void Link::setSecondNode( Node &newNode )
	{
		node2 = newNode;
	}

	Node &Link::getSecondNode()
	{
		return node2;
	}

	void Link::setDirected( bool newDirected )
	{//True means directed, false means undirected.
		directed = newDirected;
	}

	int Link::getDirected()
	{//True means directed, false means undirected.
		return directed;
	}

	void Link::setMaxCapacity( int newMaxCapacity )
	{
		maxCapacity = newMaxCapacity;
	}

	int Link::getMaxCapacity()
	{
		return maxCapacity;
	}

	void Link::setName( std::string newName )
	{
		name = newName;
	}

	std::string Link::getName()
	{
		return name;
	}

	void Link::setID( std::string newID )
	{
		ID = newID;
	}

	std::string Link::getID()
	{
		return ID;
	}

	void Link::setDescription( std::string newDescription )
	{
		description = newDescription;
	}

	std::string Link::getDescription()
	{
		return description;
	}

}
