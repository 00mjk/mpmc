
#ifndef M_PI
#define M_PI			3.14159265358979323846
#endif /* M_PI */

#define H			6.626068e-34		/* Planck's constant in J s */
#define HBAR			1.054571e-34		/* above divided by 2pi in J s */
#define KB			1.3806503e-23		/* Boltzmann's constant in J/K */
#define NA			6.0221415e23		/* Avogadro's number */
#define C			2.99792458e8		/* speed of light in vacuum in m/s */

/* H2 specific constants */
#define H2_MASS			3.348e-27		/* mass of H2 molecule in kg */
#define H2_REDUCED_MASS		0.25*H2_MASS		/* reduced mass of H2 molecule in kg */
#define H2_De			4.72			/* dissocation energy in eV */
#define H2_R0			0.742			/* equilibrium bond distance in angstroms */
#define H2_SPRING_CONSTANT	35.2			/* harmonic spring constant at well minimum */

/* DREIDING parameters */
#define DREIDING_GAMMA		12.0

/* Silvera-Goldman parameters */
#define ALPHA			1.713			/* unitless */
#define BETA			1.5671			/* 1/a.u. */
#define GAMMA			0.00993			/* 1/a.u.^2 */
#define C6			12.14			/* multipole term1 a.u.^6 */
#define C8			215.2			/* multipole term2 a.u.^8 */
#define C10			4813.9			/* multipole term3 a.u.^10 */
#define C9			143.1			/* 3-body term a.u.^9 */
#define RM			8.321			/* position of max well depth (a.u.) times 1.28 */
//http://www.pnas.org/content/99/3/1129.full.pdf


/* conversion factors */
#define AU2ANGSTROM		0.529177249		/* convert from Bohr radii to angstroms */
#define METER2ANGSTROM		1.0e10			/* convert from meters to angstroms */
#define HARTREE2KELVIN		3.15774655e5		/* convert from Hartrees to Kelvin */
#define E2REDUCED		408.7816		/* convert from e to sqrt(K*A) */
#define ATM2REDUCED		0.0073389366		/* convert from atm to K/A^3 */
#define ATM2PASCALS		101325.0		/* convert from atm to Pascals */
#define ATM2PSI			14.6959488		/* convert from atm to psi */
#define A32CM3			1.0e-24			/* convert from A^3 to cm^3 */
#define AMU2KG			1.66053873e-27		/* convert amu's to kg */
#define DEBYE2SKA		85.10597636		/* convert from Debye to sqrt(KA)*A */
#define EV2K			1.160444e4		/* convert eV to K */
#define K2WN			0.695039		/* convert K to cm^-1 */
#define KoverANGcubed2ATM	136.259 /* convert K/A^3 to ATM */

#define MAX_ITERATION_COUNT                     128

#define DAMPING_LINEAR                          1
#define DAMPING_EXPONENTIAL                     2

#define EWALD_ALPHA                             0.5
#define EWALD_KMAX                              7

#define REAL                                    0
#define IMAGINARY                               1

#define MAXLINE                                 512

#define MAXVALUE                                1.0e40

#define DARTSCALE                               0.1

#define NUCLEAR_SPIN_PARA			0
#define NUCLEAR_SPIN_ORTHO			1

#define QUANTUM_ROTATION_SYMMETRIC              0
#define QUANTUM_ROTATION_ANTISYMMETRIC          1
#define QUANTUM_ROTATION_SYMMETRY_POINTS        64


#define QUANTUM_ROTATION_LEVEL_MAX              36
#define QUANTUM_ROTATION_L_MAX                  5
#define QUANTUM_ROTATION_GRID                   16
#define QUANTUM_ROTATION_THETA_MAX              QUANTUM_ROTATION_GRID
#define QUANTUM_ROTATION_PHI_MAX                QUANTUM_ROTATION_GRID
#define QUANTUM_ROTATION_SUM			10

#define FEYNMAN_KLEINERT_TOLERANCE              1.0e-12                 /* tolerance in A^2 */
#define SMALL_dR																1.0e-12 /*tolerance in r and r->img when comparisons are made for system->pbc->cutoff and similar boxsize issues*/
