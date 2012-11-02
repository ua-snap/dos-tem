#ifndef GRIDDATA_H_
#define GRIDDATA_H_

#include <algorithm>
#include "../inc/timeconst.h"

class GridData{
  public:
  	GridData();
  	~GridData();
  
    int gid;
    float lat;
    float lon;
    float alldaylengths[365]; 

    //Yuan: fire data at grid-level
    int fri;
	int fireyear[MAX_FSIZE_DRV_YR];
	int firesize[MAX_FSIZE_DRV_YR];
	int fireseason[MAX_FSIZE_DRV_YR];

    int topsoil;
    int botsoil;
    
    int act_atm_drv_yr;    //Yuan: the actual climate driving data years

    float ta[MAX_ATM_DRV_YR][12];
	float prec[MAX_ATM_DRV_YR][12];
	float nirr[MAX_ATM_DRV_YR][12];
	float vap[MAX_ATM_DRV_YR][12];

	//for java interface
    float ta1d[MAX_ATM_DRV_YR*12];
	float prec1d[MAX_ATM_DRV_YR*12];
	float nirr1d[MAX_ATM_DRV_YR*12];
	float vap1d[MAX_ATM_DRV_YR*12];
	
	void d1tod2();
	
};


#endif /*GRIDDATA_H_*/
