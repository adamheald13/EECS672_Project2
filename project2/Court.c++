// TEMPLATE_Subclass.c++

#include "Court.h"
#include "ShaderIF.h"
#include "Block.h"

Court::Court()
{
	create();
}

Court::~Court()
{
}

void Court::create()
{
	//base court with hardwood color
	float courtColor[] = { 230.0 / 255.0, 183.0 / 255.0, 55.0 / 255.0 };
	Block* courtBase = new Block(0, 0, 0, 28.65, 15.24, .01, courtColor);
	models.addModel(courtBase);

	float black[] = {0, 0, 0};
	Block* centerLine = new Block(14.325, 0, 0.01, .0508, 15.24, .01, black);
	models.addModel(centerLine);
}

// xyzLimits: {mcXmin, mcXmax, mcYmin, mcYmax, mcZmin, mcZmax}
void Court::getMCBoundingBox(double* xyzLimits) const
{
	xyzLimits[0] = -1000.0; // xmin  Give real values!
	xyzLimits[1] = 1000.0;  // xmax         |
	xyzLimits[2] = -1234.5; // ymin         |
	xyzLimits[3] = -1011.2; // ymax         |
	xyzLimits[4] = -3000.0; // zmin         |
	xyzLimits[5] = -2000.0; // zmax        \_/
}

void Court::render()
{
	for(int i = 0; i < numComponents; i++)
	{
		courtComponents[i]->render();
	}
}
