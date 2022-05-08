class MObject
{
public:
	int x, y;
	MObject()
	{
		x = 50;
		y = 7;
	}
	~MObject()
	{

	}
	void Plustack()
	{
		x = x - 1;
	}
	void restack()
	{
		x = 50;
	}

};