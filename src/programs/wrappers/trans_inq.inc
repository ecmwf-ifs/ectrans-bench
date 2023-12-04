! (C) Copyright 2000- ECMWF.
! (C) Copyright 2000- Meteo-France.
! 
! This software is licensed under the terms of the Apache Licence Version 2.0
! which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
! In applying this licence, ECMWF does not waive the privileges and immunities
! granted to it by virtue of its status as an intergovernmental organisation
! nor does it submit to any jurisdiction.
!
INTERFACE TRANS_INQ
SUBROUTINE TRANS_INQ_ISP(KRESOL,KSPEC,KSPEC2,KSPEC2G,KSPEC2MX,KNUMP,&
                    &KGPTOT,KGPTOTG,KGPTOTMX,KGPTOTL,&
                    &KMYMS,KASM0,KUMPP,KPOSSP,KPTRMS,KALLMS,KDIM0G,&
                    &KFRSTLAT,KLSTLAT,KFRSTLOFF,KPTRLAT,&
                    &KPTRFRSTLAT,KPTRLSTLAT,KPTRFLOFF,KSTA,KONL,&
                    &KULTPP,KPTRLS,KNMENG,&
                    &KPRTRW,KMYSETW,KMYSETV,KMY_REGION_NS,KMY_REGION_EW,&
                    &LDSPLITLAT,&
                    &KSMAX,PLAPIN,KNVALUE,KDEF_RESOL,LDLAM,&
                    &PMU,PGW,PRPNM,KLEI3,KSPOLEGL,KPMS,KDGLU, & 
                    &PRECBACKEND_FLAG)

USE EC_PARKIND  ,ONLY : JPIM, JPRM, JPRD
#ifdef ACCGPU 
USE ECTRANS_MOD_VER_SP_GPU, ONLY : TRANS_INQ_VER_SP_GPU
#else
USE ECTRANS_MOD_VER_SP, ONLY : TRANS_INQ_VER_SP 
#endif

INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(IN)  :: KRESOL

INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KSPEC
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KSPEC2
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KSPEC2G
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KSPEC2MX
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KNUMP
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KGPTOT
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KGPTOTG
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KGPTOTMX
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KGPTOTL(:,:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KFRSTLOFF
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KPTRFLOFF

INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KMYMS(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KASM0(0:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KUMPP(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KPOSSP(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KPTRMS(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KALLMS(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KDIM0G(0:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KFRSTLAT(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KLSTLAT(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KPTRLAT(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KPTRFRSTLAT(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KPTRLSTLAT(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KSTA(:,:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KONL(:,:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KPRTRW
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KMYSETW
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KMYSETV
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KMY_REGION_NS
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KMY_REGION_EW
LOGICAL   ,OPTIONAL, INTENT(OUT) :: LDSPLITLAT(:)

INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KULTPP(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KPTRLS(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KNMENG(:)

REAL(KIND=JPRD)    ,OPTIONAL, INTENT(OUT) :: PMU(:)
REAL(KIND=JPRM)    ,OPTIONAL, INTENT(OUT) :: PGW(:)
REAL(KIND=JPRM)    ,OPTIONAL, INTENT(OUT) :: PRPNM(:,:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KLEI3
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KSPOLEGL
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KPMS(0:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KDGLU(0:)

REAL(KIND=JPRM)    ,OPTIONAL, INTENT(OUT) :: PLAPIN(-1:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KSMAX
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KNVALUE(:)

INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KDEF_RESOL
LOGICAL           ,OPTIONAL,INTENT(OUT)   :: LDLAM
REAL(KIND=JPRM),INTENT(IN)     :: PRECBACKEND_FLAG
END SUBROUTINE TRANS_INQ_ISP

SUBROUTINE TRANS_INQ_IDP(KRESOL,KSPEC,KSPEC2,KSPEC2G,KSPEC2MX,KNUMP,&
                    &KGPTOT,KGPTOTG,KGPTOTMX,KGPTOTL,&
                    &KMYMS,KASM0,KUMPP,KPOSSP,KPTRMS,KALLMS,KDIM0G,&
                    &KFRSTLAT,KLSTLAT,KFRSTLOFF,KPTRLAT,&
                    &KPTRFRSTLAT,KPTRLSTLAT,KPTRFLOFF,KSTA,KONL,&
                    &KULTPP,KPTRLS,KNMENG,&
                    &KPRTRW,KMYSETW,KMYSETV,KMY_REGION_NS,KMY_REGION_EW,&
                    &LDSPLITLAT,&
                    &KSMAX,PLAPIN,KNVALUE,KDEF_RESOL,LDLAM,&
                    &PMU,PGW,PRPNM,KLEI3,KSPOLEGL,KPMS,KDGLU, & 
                    &PRECBACKEND_FLAG)

USE EC_PARKIND  ,ONLY : JPIM, JPRD
#ifdef ACCGPU 
USE ECTRANS_MOD_VER_DP_GPU, ONLY : TRANS_INQ_VER_DP_GPU
#else
USE ECTRANS_MOD_VER_DP, ONLY : TRANS_INQ_VER_DP 
#endif

INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(IN)  :: KRESOL

INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KSPEC
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KSPEC2
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KSPEC2G
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KSPEC2MX
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KNUMP
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KGPTOT
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KGPTOTG
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KGPTOTMX
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KGPTOTL(:,:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KFRSTLOFF
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KPTRFLOFF

INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KMYMS(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KASM0(0:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KUMPP(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KPOSSP(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KPTRMS(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KALLMS(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KDIM0G(0:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KFRSTLAT(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KLSTLAT(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KPTRLAT(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KPTRFRSTLAT(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KPTRLSTLAT(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KSTA(:,:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KONL(:,:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KPRTRW
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KMYSETW
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KMYSETV
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KMY_REGION_NS
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KMY_REGION_EW
LOGICAL   ,OPTIONAL, INTENT(OUT) :: LDSPLITLAT(:)

INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KULTPP(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KPTRLS(:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KNMENG(:)

REAL(KIND=JPRD)    ,OPTIONAL, INTENT(OUT) :: PMU(:)
REAL(KIND=JPRD)    ,OPTIONAL, INTENT(OUT) :: PGW(:)
REAL(KIND=JPRD)    ,OPTIONAL, INTENT(OUT) :: PRPNM(:,:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KLEI3
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KSPOLEGL
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KPMS(0:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KDGLU(0:)

REAL(KIND=JPRD)    ,OPTIONAL, INTENT(OUT) :: PLAPIN(-1:)
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KSMAX
INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KNVALUE(:)

INTEGER(KIND=JPIM) ,OPTIONAL, INTENT(OUT) :: KDEF_RESOL
LOGICAL           ,OPTIONAL,INTENT(OUT)   :: LDLAM
REAL(KIND=JPRD),INTENT(IN)     :: PRECBACKEND_FLAG
END SUBROUTINE TRANS_INQ_IDP

END INTERFACE TRANS_INQ
