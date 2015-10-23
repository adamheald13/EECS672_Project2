// TEMPLATE_Subclass.h

#ifndef COURT_H
#define COURT_H

#include "ModelViewWithPhongLighting.h"
#include <vector>

class Court : public ModelViewWithPhongLighting
{
public:
	Court();
	virtual ~Court();

	// xyzLimits: {mcXmin, mcXmax, mcYmin, mcYmax, mcZmin, mcZmax}
	void getMCBoundingBox(double* xyzLimitsF) const;
	void render();
private:
	int numComponents;

	void create();
	std::vector<ModelView*> models;

};

#endif
