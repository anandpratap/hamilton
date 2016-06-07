#ifndef __UTILS__H
#define __UTILS__H

template <class T>
T*** allocate_3d_array(int nx, int ny, int nz){
    T*** A = new T**[nx];
    for(int i(0); i < nx; ++i){
			A[i] = new T*[ny];
			for(int j(0); j < ny; ++j){
				A[i][j] = new T[nz];					
				for(int k(0); k < nz; ++k){
					A[i][j][k]= 0.;
				}
			}
	}
    return A;
}
template <class T>
void release_3d_array(T*** A, int nx, int ny, int nz){
    for (int i = 0; i < nx; ++i){
			for (int j = 0; j < ny; ++j){
				delete[] A[i][j];
			}
			delete[] A[i];
	}
    delete[] A;
}

template <class T>
T** allocate_2d_array(int nx, int ny){
    T** A = new T*[nx];
    for(int i(0); i < nx; ++i){
		A[i] = new T[ny];
	}
    return A;
}

template <class T>
void release_2d_array(T** A, int nx, int ny){
    for (int i = 0; i < nx; ++i){
		delete[] A[i];
	}
    delete[] A;
}

#endif
