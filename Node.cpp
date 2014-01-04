#include "Node.h"

/*
namespace BasicNetwork
{
	class Node
	{//A node of a basic network with directed links.
		private:
			std::string name;//The name of the node, possibly the display name.
			std::vector<Link *> neighbors;//A list of links connected to this node.
			std::string ID;//The ID of the node, possibly a technical ID/number meant to be used internally.
			std::string description;//A description of the link.
			int x, y, z;//The x, y, and z location of the node.

		public:
			void setName( std::string newName );
			std::string getName();
			void addLink( Link *newLink );//Add a link to this node.
			Link *getLink( int index );//Get link at the specified index. Index starts at 1 and goes to the number of connected links.
			int getLinkCount();//Returns the number of links connected to this node.
			void clearLinks();//Clears the list of links without deleting the links themselves.
			void setID( std::string newID );
			std::string getID();
			void setDescription( std::string newDescription );
			std::string getDescription();
			void setLocation( int newX, int newY, int newZ );
			void setX( int newX );
			int getX();
			void setY( int newY );
			int getY();
			void setZ( int newZ );
			int getZ();
	}
}
*/

namespace BasicNetwork
{
	void Node::setName( std::string newName )
	{
		name = newName;
	}

	std::string Node::getName()
	{
		return name;
	}

	void Node::addLink( Link *newLink )
	{//Add a link to this node.
	}

	Link *Node::getLink( int index )
	{//Get link at the specified index. Index starts at 1 and goes to the number of connected links.
	}

	int Node::getLinkCount()
	{//Returns the number of links connected to this node.
	}

	void Node::clearLinks()
	{//Clears the list of links without deleting the links themselves.
	}

	void Node::setID( std::string newID )
	{
		ID = newID;
	}

	std::string Node::getID()
	{
		return ID;
	}

	void Node::setDescription( std::string newDescription )
	{
		description = newDescription;
	}

	std::string Node::getDescription()
	{
		return description;
	}

	void Node::setLocation( int newX, int newY, int newZ )
	{
		x = newX;
		y = newY;
		Z = newZ;
	}

	void Node::setX( int newX )
	{
		x = newX;
	}

	int Node::getX()
	{
		return x;
	}

	void Node::setY( int newY )
	{
		y = newY;
	}

	int Node::getY()
	{
		return y;
	}

	void Node::setZ( int newZ )
	{
		z = newZ;
	}

	int Node::getZ()
	{
		return z;
	}

}
