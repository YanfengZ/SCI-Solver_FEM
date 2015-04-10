#ifndef __SETUP_SOLVER_H__
#define __SETUP_SOLVER_H__
#include <amg_config.h>
#include <types.h>
#include <TriMesh.h>
#include <tetmesh.h>
#include <cutil.h>
#include <FEM/FEM2D.h>
#include <FEM/FEM3D.h>
#include <amg.h>

/*setup_solver functions for 2D and 3D meshes use the following parameters:
  cfg - This AMG_Config object contains the configuration parameters used to
        define how the solver will run.
  *meshPtr - points to the mesh object, which is either a TriMesh (2D) or
             TetMesh (3D) object defined in the trimesh library written by
             Szymon Rusinkiewicz.
  *A   - Stiffness matrix A, stored in Matrix_d
  *x_d - Solution vector x, stored in Vector_d_CG
  *b_d - RHS vector b, stored in Vector_d_CG
  verbose - bool for verbose output from the solver
*/

template <typename T>
int setup_solver(AMG_Config& cfg, T* meshPtr, Matrix_d* A,
                 Vector_d_CG* x_d, Vector_d_CG* b_d, const bool verbose);

#endif
