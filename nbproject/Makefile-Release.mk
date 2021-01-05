#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/10_Zodiaco.o \
	${OBJECTDIR}/11_Pascal.o \
	${OBJECTDIR}/1_AnioBisiesto.o \
	${OBJECTDIR}/2_TazasDeCafe.o \
	${OBJECTDIR}/3_AteezPalabras.o \
	${OBJECTDIR}/4_PerimetrosAreas.o \
	${OBJECTDIR}/5_Divisores.o \
	${OBJECTDIR}/6_Factorial.o \
	${OBJECTDIR}/7_OrdenacionSeleccion.o \
	${OBJECTDIR}/8_Calificaciones.o \
	${OBJECTDIR}/9_recetas.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cuadernillo_25problemas.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cuadernillo_25problemas.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cuadernillo_25problemas ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/10_Zodiaco.o: 10_Zodiaco.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/10_Zodiaco.o 10_Zodiaco.c

${OBJECTDIR}/11_Pascal.o: 11_Pascal.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/11_Pascal.o 11_Pascal.c

${OBJECTDIR}/1_AnioBisiesto.o: 1_AnioBisiesto.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/1_AnioBisiesto.o 1_AnioBisiesto.c

${OBJECTDIR}/2_TazasDeCafe.o: 2_TazasDeCafe.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/2_TazasDeCafe.o 2_TazasDeCafe.c

${OBJECTDIR}/3_AteezPalabras.o: 3_AteezPalabras.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/3_AteezPalabras.o 3_AteezPalabras.c

${OBJECTDIR}/4_PerimetrosAreas.o: 4_PerimetrosAreas.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/4_PerimetrosAreas.o 4_PerimetrosAreas.c

${OBJECTDIR}/5_Divisores.o: 5_Divisores.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/5_Divisores.o 5_Divisores.c

${OBJECTDIR}/6_Factorial.o: 6_Factorial.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/6_Factorial.o 6_Factorial.c

${OBJECTDIR}/7_OrdenacionSeleccion.o: 7_OrdenacionSeleccion.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/7_OrdenacionSeleccion.o 7_OrdenacionSeleccion.c

${OBJECTDIR}/8_Calificaciones.o: 8_Calificaciones.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/8_Calificaciones.o 8_Calificaciones.c

${OBJECTDIR}/9_recetas.o: 9_recetas.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/9_recetas.o 9_recetas.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
