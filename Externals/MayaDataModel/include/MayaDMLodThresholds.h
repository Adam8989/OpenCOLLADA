/*
    Copyright (c) 2008 NetAllied Systems GmbH

    This file is part of MayaDataModel.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#ifndef __MayaDM_LODTHRESHOLDS_H__
#define __MayaDM_LODTHRESHOLDS_H__
#include "MayaDMTypes.h"
#include "MayaDMConnectables.h"
#include "MayaDMDependNode.h"
namespace MayaDM
{
class LodThresholds : public DependNode
{
public:
public:
	LodThresholds(FILE* file,const std::string& name,const std::string& parent=""):DependNode(file, name, parent, "lodThresholds"){}
	virtual ~LodThresholds(){}
	void setInBoxMin(const double3& bmn)
	{
		fprintf(mFile,"setAttr \".bmn\" -type \"double3\" ");
		bmn.write(mFile);
		fprintf(mFile,";\n");

	}
	void setInBoxMinX(double bmix)
	{
		if(bmix == 0) return;
		fprintf(mFile,"setAttr \".bmn.bmix\" %f;\n", bmix);

	}
	void setInBoxMinY(double bmiy)
	{
		if(bmiy == 0) return;
		fprintf(mFile,"setAttr \".bmn.bmiy\" %f;\n", bmiy);

	}
	void setInBoxMinZ(double bmiz)
	{
		if(bmiz == 0) return;
		fprintf(mFile,"setAttr \".bmn.bmiz\" %f;\n", bmiz);

	}
	void setInBoxMax(const double3& bmx)
	{
		fprintf(mFile,"setAttr \".bmx\" -type \"double3\" ");
		bmx.write(mFile);
		fprintf(mFile,";\n");

	}
	void setInBoxMaxX(double bmax)
	{
		if(bmax == 0) return;
		fprintf(mFile,"setAttr \".bmx.bmax\" %f;\n", bmax);

	}
	void setInBoxMaxY(double bmay)
	{
		if(bmay == 0) return;
		fprintf(mFile,"setAttr \".bmx.bmay\" %f;\n", bmay);

	}
	void setInBoxMaxZ(double bmaz)
	{
		if(bmaz == 0) return;
		fprintf(mFile,"setAttr \".bmx.bmaz\" %f;\n", bmaz);

	}
	void setCamera(const double3& cam)
	{
		fprintf(mFile,"setAttr \".cam\" -type \"double3\" ");
		cam.write(mFile);
		fprintf(mFile,";\n");

	}
	void setCameraX(double cax)
	{
		if(cax == 0) return;
		fprintf(mFile,"setAttr \".cam.cax\" %f;\n", cax);

	}
	void setCameraY(double cay)
	{
		if(cay == 0) return;
		fprintf(mFile,"setAttr \".cam.cay\" %f;\n", cay);

	}
	void setCameraZ(double caz)
	{
		if(caz == 0) return;
		fprintf(mFile,"setAttr \".cam.caz\" %f;\n", caz);

	}
	void setThreshold(size_t th_i,double th)
	{
		if(th == 0) return;
		fprintf(mFile,"setAttr \".th[%i]\" %f;\n", th_i,th);

	}
	void getInBoxMin()
	{
		fprintf(mFile,"\"%s.bmn\"",mName.c_str());

	}
	void getInBoxMinX()
	{
		fprintf(mFile,"\"%s.bmn.bmix\"",mName.c_str());

	}
	void getInBoxMinY()
	{
		fprintf(mFile,"\"%s.bmn.bmiy\"",mName.c_str());

	}
	void getInBoxMinZ()
	{
		fprintf(mFile,"\"%s.bmn.bmiz\"",mName.c_str());

	}
	void getInBoxMax()
	{
		fprintf(mFile,"\"%s.bmx\"",mName.c_str());

	}
	void getInBoxMaxX()
	{
		fprintf(mFile,"\"%s.bmx.bmax\"",mName.c_str());

	}
	void getInBoxMaxY()
	{
		fprintf(mFile,"\"%s.bmx.bmay\"",mName.c_str());

	}
	void getInBoxMaxZ()
	{
		fprintf(mFile,"\"%s.bmx.bmaz\"",mName.c_str());

	}
	void getCamera()
	{
		fprintf(mFile,"\"%s.cam\"",mName.c_str());

	}
	void getCameraX()
	{
		fprintf(mFile,"\"%s.cam.cax\"",mName.c_str());

	}
	void getCameraY()
	{
		fprintf(mFile,"\"%s.cam.cay\"",mName.c_str());

	}
	void getCameraZ()
	{
		fprintf(mFile,"\"%s.cam.caz\"",mName.c_str());

	}
	void getThreshold(size_t th_i)
	{
		fprintf(mFile,"\"%s.th[%i]\"",mName.c_str(),th_i);

	}
	void getDistance()
	{
		fprintf(mFile,"\"%s.d\"",mName.c_str());

	}
	void getActiveLevel()
	{
		fprintf(mFile,"\"%s.al\"",mName.c_str());

	}
	void getOutLevel(size_t ol_i)
	{
		fprintf(mFile,"\"%s.ol[%i]\"",mName.c_str(),ol_i);

	}
protected:
	LodThresholds(FILE* file,const std::string& name,const std::string& parent,const std::string& nodeType):DependNode(file, name, parent, nodeType) {}

};
}//namespace MayaDM
#endif//__MayaDM_LODTHRESHOLDS_H__