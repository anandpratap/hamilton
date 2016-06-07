#include "utils.h"

typedef double dtype;
typedef double adtype;

class EulerSolver{
private:
protected:
	int ni, nj, jtail;
	int nim, njm;
	int j1, j2;

	dtype **x, **y;
	dtype **xc, **yc, **vol, **ds_eta, **ds_xi;
	dtype **neta_x, **neta_y, **nxi_x, **nxi_y;

	adtype ***Q;
public:
	int setup(void);
};

int EulerSolver::setup(void){
	j1 = jtail-1;
	j2 = ni - jtail;
	
	nim = ni - 1;
	njm = nj - 1;

	x = allocate_2d_array<dtype>(ni, nj);
	y = allocate_2d_array<dtype>(ni, nj);

	xc = allocate_2d_array<dtype>(ni-1, nj-1);
	yc = allocate_2d_array<dtype>(ni-1, nj-1);
	ds_eta = allocate_2d_array<dtype>(ni-1, nj-1);
	ds_xi = allocate_2d_array<dtype>(ni-1, nj-1);

	neta_x = allocate_2d_array<dtype>(ni-1, nj);

	return 0;
}
