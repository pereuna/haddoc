#include <X11/Xlib.h>
#include <X11/Xcms.h>
#include "color_names.h"

int alloc_colors(Display *display, Colormap cmap)
{
    int t = 0;
    t = DAY_BRIGHT;
    NODTA[t].spec.CIExyY.x = 0.2800;
    NODTA[t].spec.CIExyY.y = 0.3100;
    NODTA[t].spec.CIExyY.Y = 45.00 * 0.01;
    NODTA[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &NODTA[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CURSR[t].spec.CIExyY.x = 0.5000;
    CURSR[t].spec.CIExyY.y = 0.4000;
    CURSR[t].spec.CIExyY.Y = 32.00 * 0.01;
    CURSR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CURSR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHBLK[t].spec.CIExyY.x = 0.2800;
    CHBLK[t].spec.CIExyY.y = 0.3100;
    CHBLK[t].spec.CIExyY.Y = 0.00 * 0.01;
    CHBLK[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHBLK[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHGRD[t].spec.CIExyY.x = 0.2800;
    CHGRD[t].spec.CIExyY.y = 0.3100;
    CHGRD[t].spec.CIExyY.Y = 25.00 * 0.01;
    CHGRD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHGRD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHGRF[t].spec.CIExyY.x = 0.2800;
    CHGRF[t].spec.CIExyY.y = 0.3100;
    CHGRF[t].spec.CIExyY.Y = 45.00 * 0.01;
    CHGRF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHGRF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHRED[t].spec.CIExyY.x = 0.4800;
    CHRED[t].spec.CIExyY.y = 0.3000;
    CHRED[t].spec.CIExyY.Y = 25.00 * 0.01;
    CHRED[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHRED[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHGRN[t].spec.CIExyY.x = 0.3000;
    CHGRN[t].spec.CIExyY.y = 0.5200;
    CHGRN[t].spec.CIExyY.Y = 60.00 * 0.01;
    CHGRN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHGRN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHYLW[t].spec.CIExyY.x = 0.4100;
    CHYLW[t].spec.CIExyY.y = 0.4700;
    CHYLW[t].spec.CIExyY.Y = 70.00 * 0.01;
    CHYLW[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHYLW[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHMGD[t].spec.CIExyY.x = 0.3000;
    CHMGD[t].spec.CIExyY.y = 0.1700;
    CHMGD[t].spec.CIExyY.Y = 20.00 * 0.01;
    CHMGD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHMGD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHMGF[t].spec.CIExyY.x = 0.2800;
    CHMGF[t].spec.CIExyY.y = 0.2400;
    CHMGF[t].spec.CIExyY.Y = 48.00 * 0.01;
    CHMGF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHMGF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHBRN[t].spec.CIExyY.x = 0.4200;
    CHBRN[t].spec.CIExyY.y = 0.4500;
    CHBRN[t].spec.CIExyY.Y = 30.00 * 0.01;
    CHBRN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHBRN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHWHT[t].spec.CIExyY.x = 0.2800;
    CHWHT[t].spec.CIExyY.y = 0.3100;
    CHWHT[t].spec.CIExyY.Y = 80.00 * 0.01;
    CHWHT[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHWHT[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SCLBR[t].spec.CIExyY.x = 0.5000;
    SCLBR[t].spec.CIExyY.y = 0.4000;
    SCLBR[t].spec.CIExyY.Y = 32.00 * 0.01;
    SCLBR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SCLBR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHCOR[t].spec.CIExyY.x = 0.5000;
    CHCOR[t].spec.CIExyY.y = 0.4000;
    CHCOR[t].spec.CIExyY.Y = 32.00 * 0.01;
    CHCOR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHCOR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LITRD[t].spec.CIExyY.x = 0.4800;
    LITRD[t].spec.CIExyY.y = 0.3000;
    LITRD[t].spec.CIExyY.Y = 25.00 * 0.01;
    LITRD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LITRD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LITGN[t].spec.CIExyY.x = 0.3000;
    LITGN[t].spec.CIExyY.y = 0.5200;
    LITGN[t].spec.CIExyY.Y = 60.00 * 0.01;
    LITGN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LITGN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LITYW[t].spec.CIExyY.x = 0.4100;
    LITYW[t].spec.CIExyY.y = 0.4700;
    LITYW[t].spec.CIExyY.Y = 70.00 * 0.01;
    LITYW[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LITYW[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    ISDNG[t].spec.CIExyY.x = 0.3000;
    ISDNG[t].spec.CIExyY.y = 0.1700;
    ISDNG[t].spec.CIExyY.Y = 20.00 * 0.01;
    ISDNG[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &ISDNG[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DNGHL[t].spec.CIExyY.x = 0.4800;
    DNGHL[t].spec.CIExyY.y = 0.3000;
    DNGHL[t].spec.CIExyY.Y = 25.00 * 0.01;
    DNGHL[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DNGHL[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    TRFCD[t].spec.CIExyY.x = 0.3000;
    TRFCD[t].spec.CIExyY.y = 0.1700;
    TRFCD[t].spec.CIExyY.Y = 20.00 * 0.01;
    TRFCD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &TRFCD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    TRFCF[t].spec.CIExyY.x = 0.2800;
    TRFCF[t].spec.CIExyY.y = 0.2400;
    TRFCF[t].spec.CIExyY.Y = 48.00 * 0.01;
    TRFCF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &TRFCF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LANDA[t].spec.CIExyY.x = 0.3600;
    LANDA[t].spec.CIExyY.y = 0.4000;
    LANDA[t].spec.CIExyY.Y = 49.00 * 0.01;
    LANDA[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LANDA[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LANDF[t].spec.CIExyY.x = 0.4500;
    LANDF[t].spec.CIExyY.y = 0.4500;
    LANDF[t].spec.CIExyY.Y = 15.00 * 0.01;
    LANDF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LANDF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CSTLN[t].spec.CIExyY.x = 0.2800;
    CSTLN[t].spec.CIExyY.y = 0.3100;
    CSTLN[t].spec.CIExyY.Y = 10.00 * 0.01;
    CSTLN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CSTLN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SNDG1[t].spec.CIExyY.x = 0.2800;
    SNDG1[t].spec.CIExyY.y = 0.3100;
    SNDG1[t].spec.CIExyY.Y = 25.00 * 0.01;
    SNDG1[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SNDG1[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SNDG2[t].spec.CIExyY.x = 0.2800;
    SNDG2[t].spec.CIExyY.y = 0.3100;
    SNDG2[t].spec.CIExyY.Y = 0.00 * 0.01;
    SNDG2[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SNDG2[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPSC[t].spec.CIExyY.x = 0.2800;
    DEPSC[t].spec.CIExyY.y = 0.3100;
    DEPSC[t].spec.CIExyY.Y = 10.00 * 0.01;
    DEPSC[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPSC[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPCN[t].spec.CIExyY.x = 0.2800;
    DEPCN[t].spec.CIExyY.y = 0.3100;
    DEPCN[t].spec.CIExyY.Y = 25.00 * 0.01;
    DEPCN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPCN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPDW[t].spec.CIExyY.x = 0.2800;
    DEPDW[t].spec.CIExyY.y = 0.3100;
    DEPDW[t].spec.CIExyY.Y = 80.00 * 0.01;
    DEPDW[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPDW[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPMD[t].spec.CIExyY.x = 0.2700;
    DEPMD[t].spec.CIExyY.y = 0.3000;
    DEPMD[t].spec.CIExyY.Y = 65.00 * 0.01;
    DEPMD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPMD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPMS[t].spec.CIExyY.x = 0.2400;
    DEPMS[t].spec.CIExyY.y = 0.2600;
    DEPMS[t].spec.CIExyY.Y = 55.00 * 0.01;
    DEPMS[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPMS[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPVS[t].spec.CIExyY.x = 0.2200;
    DEPVS[t].spec.CIExyY.y = 0.2400;
    DEPVS[t].spec.CIExyY.Y = 45.00 * 0.01;
    DEPVS[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPVS[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPIT[t].spec.CIExyY.x = 0.2800;
    DEPIT[t].spec.CIExyY.y = 0.3600;
    DEPIT[t].spec.CIExyY.Y = 40.00 * 0.01;
    DEPIT[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPIT[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RADHI[t].spec.CIExyY.x = 0.3000;
    RADHI[t].spec.CIExyY.y = 0.5200;
    RADHI[t].spec.CIExyY.Y = 60.00 * 0.01;
    RADHI[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RADHI[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RADLO[t].spec.CIExyY.x = 0.3000;
    RADLO[t].spec.CIExyY.y = 0.5200;
    RADLO[t].spec.CIExyY.Y = 20.00 * 0.01;
    RADLO[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RADLO[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    ARPAT[t].spec.CIExyY.x = 0.2600;
    ARPAT[t].spec.CIExyY.y = 0.4200;
    ARPAT[t].spec.CIExyY.Y = 30.00 * 0.01;
    ARPAT[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &ARPAT[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    NINFO[t].spec.CIExyY.x = 0.5000;
    NINFO[t].spec.CIExyY.y = 0.4000;
    NINFO[t].spec.CIExyY.Y = 32.00 * 0.01;
    NINFO[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &NINFO[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RESBL[t].spec.CIExyY.x = 0.1800;
    RESBL[t].spec.CIExyY.y = 0.1500;
    RESBL[t].spec.CIExyY.Y = 22.00 * 0.01;
    RESBL[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RESBL[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    ADINF[t].spec.CIExyY.x = 0.4100;
    ADINF[t].spec.CIExyY.y = 0.4700;
    ADINF[t].spec.CIExyY.Y = 35.00 * 0.01;
    ADINF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &ADINF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RESGR[t].spec.CIExyY.x = 0.2800;
    RESGR[t].spec.CIExyY.y = 0.3100;
    RESGR[t].spec.CIExyY.Y = 25.00 * 0.01;
    RESGR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RESGR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SHIPS[t].spec.CIExyY.x = 0.2800;
    SHIPS[t].spec.CIExyY.y = 0.3100;
    SHIPS[t].spec.CIExyY.Y = 0.00 * 0.01;
    SHIPS[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SHIPS[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    PSTRK[t].spec.CIExyY.x = 0.2800;
    PSTRK[t].spec.CIExyY.y = 0.3100;
    PSTRK[t].spec.CIExyY.Y = 0.00 * 0.01;
    PSTRK[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &PSTRK[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SYTRK[t].spec.CIExyY.x = 0.2800;
    SYTRK[t].spec.CIExyY.y = 0.3100;
    SYTRK[t].spec.CIExyY.Y = 25.00 * 0.01;
    SYTRK[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SYTRK[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    PLRTE[t].spec.CIExyY.x = 0.5800;
    PLRTE[t].spec.CIExyY.y = 0.3500;
    PLRTE[t].spec.CIExyY.Y = 18.00 * 0.01;
    PLRTE[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &PLRTE[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    APLRT[t].spec.CIExyY.x = 0.5000;
    APLRT[t].spec.CIExyY.y = 0.4000;
    APLRT[t].spec.CIExyY.Y = 32.00 * 0.01;
    APLRT[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &APLRT[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFD[t].spec.CIExyY.x = 0.2800;
    UINFD[t].spec.CIExyY.y = 0.3100;
    UINFD[t].spec.CIExyY.Y = 0.00 * 0.01;
    UINFD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFF[t].spec.CIExyY.x = 0.2800;
    UINFF[t].spec.CIExyY.y = 0.3100;
    UINFF[t].spec.CIExyY.Y = 25.00 * 0.01;
    UINFF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UIBCK[t].spec.CIExyY.x = 0.2800;
    UIBCK[t].spec.CIExyY.y = 0.3100;
    UIBCK[t].spec.CIExyY.Y = 80.00 * 0.01;
    UIBCK[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UIBCK[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UIAFD[t].spec.CIExyY.x = 0.2200;
    UIAFD[t].spec.CIExyY.y = 0.2400;
    UIAFD[t].spec.CIExyY.Y = 45.00 * 0.01;
    UIAFD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UIAFD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFR[t].spec.CIExyY.x = 0.4800;
    UINFR[t].spec.CIExyY.y = 0.3000;
    UINFR[t].spec.CIExyY.Y = 25.00 * 0.01;
    UINFR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFG[t].spec.CIExyY.x = 0.3000;
    UINFG[t].spec.CIExyY.y = 0.5200;
    UINFG[t].spec.CIExyY.Y = 60.00 * 0.01;
    UINFG[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFG[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFO[t].spec.CIExyY.x = 0.5000;
    UINFO[t].spec.CIExyY.y = 0.4000;
    UINFO[t].spec.CIExyY.Y = 32.00 * 0.01;
    UINFO[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFO[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFB[t].spec.CIExyY.x = 0.1800;
    UINFB[t].spec.CIExyY.y = 0.1500;
    UINFB[t].spec.CIExyY.Y = 22.00 * 0.01;
    UINFB[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFB[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFM[t].spec.CIExyY.x = 0.3000;
    UINFM[t].spec.CIExyY.y = 0.1700;
    UINFM[t].spec.CIExyY.Y = 20.00 * 0.01;
    UINFM[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFM[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UIBDR[t].spec.CIExyY.x = 0.2800;
    UIBDR[t].spec.CIExyY.y = 0.3100;
    UIBDR[t].spec.CIExyY.Y = 25.00 * 0.01;
    UIBDR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UIBDR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UIAFF[t].spec.CIExyY.x = 0.3600;
    UIAFF[t].spec.CIExyY.y = 0.4000;
    UIAFF[t].spec.CIExyY.Y = 49.00 * 0.01;
    UIAFF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UIAFF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    OUTLW[t].spec.CIExyY.x = 0.2800;
    OUTLW[t].spec.CIExyY.y = 0.3100;
    OUTLW[t].spec.CIExyY.Y = 0.00 * 0.01;
    OUTLW[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &OUTLW[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    OUTLL[t].spec.CIExyY.x = 0.3600;
    OUTLL[t].spec.CIExyY.y = 0.4000;
    OUTLL[t].spec.CIExyY.Y = 49.00 * 0.01;
    OUTLL[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &OUTLL[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RES01[t].spec.CIExyY.x = 0.2800;
    RES01[t].spec.CIExyY.y = 0.3100;
    RES01[t].spec.CIExyY.Y = 45.00 * 0.01;
    RES01[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RES01[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RES02[t].spec.CIExyY.x = 0.2800;
    RES02[t].spec.CIExyY.y = 0.3100;
    RES02[t].spec.CIExyY.Y = 45.00 * 0.01;
    RES02[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RES02[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RES03[t].spec.CIExyY.x = 0.2800;
    RES03[t].spec.CIExyY.y = 0.3100;
    RES03[t].spec.CIExyY.Y = 45.00 * 0.01;
    RES03[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RES03[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    BKAJ1[t].spec.CIExyY.x = 0.2800;
    BKAJ1[t].spec.CIExyY.y = 0.3100;
    BKAJ1[t].spec.CIExyY.Y = 0.000 * 0.01;
    BKAJ1[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &BKAJ1[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    BKAJ2[t].spec.CIExyY.x = 0.2800;
    BKAJ2[t].spec.CIExyY.y = 0.3100;
    BKAJ2[t].spec.CIExyY.Y = 1.600 * 0.01;
    BKAJ2[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &BKAJ2[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    t = DAY_BLACKBACK;
    NODTA[t].spec.CIExyY.x = 0.2800;
    NODTA[t].spec.CIExyY.y = 0.3100;
    NODTA[t].spec.CIExyY.Y = 25.00 * 0.01;
    NODTA[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &NODTA[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CURSR[t].spec.CIExyY.x = 0.5000;
    CURSR[t].spec.CIExyY.y = 0.4000;
    CURSR[t].spec.CIExyY.Y = 28.00 * 0.01;
    CURSR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CURSR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHBLK[t].spec.CIExyY.x = 0.2800;
    CHBLK[t].spec.CIExyY.y = 0.3100;
    CHBLK[t].spec.CIExyY.Y = 45.00 * 0.01;
    CHBLK[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHBLK[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHGRD[t].spec.CIExyY.x = 0.2800;
    CHGRD[t].spec.CIExyY.y = 0.3100;
    CHGRD[t].spec.CIExyY.Y = 45.00 * 0.01;
    CHGRD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHGRD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHGRF[t].spec.CIExyY.x = 0.2800;
    CHGRF[t].spec.CIExyY.y = 0.3100;
    CHGRF[t].spec.CIExyY.Y = 25.00 * 0.01;
    CHGRF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHGRF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHRED[t].spec.CIExyY.x = 0.4800;
    CHRED[t].spec.CIExyY.y = 0.3000;
    CHRED[t].spec.CIExyY.Y = 25.00 * 0.01;
    CHRED[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHRED[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHGRN[t].spec.CIExyY.x = 0.3000;
    CHGRN[t].spec.CIExyY.y = 0.5200;
    CHGRN[t].spec.CIExyY.Y = 60.00 * 0.01;
    CHGRN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHGRN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHYLW[t].spec.CIExyY.x = 0.4100;
    CHYLW[t].spec.CIExyY.y = 0.4700;
    CHYLW[t].spec.CIExyY.Y = 70.00 * 0.01;
    CHYLW[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHYLW[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHMGD[t].spec.CIExyY.x = 0.2800;
    CHMGD[t].spec.CIExyY.y = 0.2400;
    CHMGD[t].spec.CIExyY.Y = 53.00 * 0.01;
    CHMGD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHMGD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHMGF[t].spec.CIExyY.x = 0.3000;
    CHMGF[t].spec.CIExyY.y = 0.1700;
    CHMGF[t].spec.CIExyY.Y = 15.00 * 0.01;
    CHMGF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHMGF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHBRN[t].spec.CIExyY.x = 0.4200;
    CHBRN[t].spec.CIExyY.y = 0.4500;
    CHBRN[t].spec.CIExyY.Y = 25.00 * 0.01;
    CHBRN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHBRN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHWHT[t].spec.CIExyY.x = 0.2800;
    CHWHT[t].spec.CIExyY.y = 0.3100;
    CHWHT[t].spec.CIExyY.Y = 80.00 * 0.01;
    CHWHT[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHWHT[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SCLBR[t].spec.CIExyY.x = 0.5000;
    SCLBR[t].spec.CIExyY.y = 0.4000;
    SCLBR[t].spec.CIExyY.Y = 28.00 * 0.01;
    SCLBR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SCLBR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHCOR[t].spec.CIExyY.x = 0.5000;
    CHCOR[t].spec.CIExyY.y = 0.4000;
    CHCOR[t].spec.CIExyY.Y = 28.00 * 0.01;
    CHCOR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHCOR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LITRD[t].spec.CIExyY.x = 0.4800;
    LITRD[t].spec.CIExyY.y = 0.3000;
    LITRD[t].spec.CIExyY.Y = 25.00 * 0.01;
    LITRD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LITRD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LITGN[t].spec.CIExyY.x = 0.3000;
    LITGN[t].spec.CIExyY.y = 0.5200;
    LITGN[t].spec.CIExyY.Y = 60.00 * 0.01;
    LITGN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LITGN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LITYW[t].spec.CIExyY.x = 0.4100;
    LITYW[t].spec.CIExyY.y = 0.4700;
    LITYW[t].spec.CIExyY.Y = 70.00 * 0.01;
    LITYW[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LITYW[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    ISDNG[t].spec.CIExyY.x = 0.2800;
    ISDNG[t].spec.CIExyY.y = 0.2400;
    ISDNG[t].spec.CIExyY.Y = 53.00 * 0.01;
    ISDNG[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &ISDNG[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DNGHL[t].spec.CIExyY.x = 0.4800;
    DNGHL[t].spec.CIExyY.y = 0.3000;
    DNGHL[t].spec.CIExyY.Y = 25.00 * 0.01;
    DNGHL[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DNGHL[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    TRFCD[t].spec.CIExyY.x = 0.2800;
    TRFCD[t].spec.CIExyY.y = 0.2400;
    TRFCD[t].spec.CIExyY.Y = 53.00 * 0.01;
    TRFCD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &TRFCD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    TRFCF[t].spec.CIExyY.x = 0.3000;
    TRFCF[t].spec.CIExyY.y = 0.1700;
    TRFCF[t].spec.CIExyY.Y = 15.00 * 0.01;
    TRFCF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &TRFCF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LANDA[t].spec.CIExyY.x = 0.3600;
    LANDA[t].spec.CIExyY.y = 0.4000;
    LANDA[t].spec.CIExyY.Y = 20.00 * 0.01;
    LANDA[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LANDA[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LANDF[t].spec.CIExyY.x = 0.4500;
    LANDF[t].spec.CIExyY.y = 0.4500;
    LANDF[t].spec.CIExyY.Y = 45.00 * 0.01;
    LANDF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LANDF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CSTLN[t].spec.CIExyY.x = 0.2800;
    CSTLN[t].spec.CIExyY.y = 0.3100;
    CSTLN[t].spec.CIExyY.Y = 45.00 * 0.01;
    CSTLN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CSTLN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SNDG1[t].spec.CIExyY.x = 0.2800;
    SNDG1[t].spec.CIExyY.y = 0.3100;
    SNDG1[t].spec.CIExyY.Y = 25.00 * 0.01;
    SNDG1[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SNDG1[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SNDG2[t].spec.CIExyY.x = 0.2800;
    SNDG2[t].spec.CIExyY.y = 0.3100;
    SNDG2[t].spec.CIExyY.Y = 80.00 * 0.01;
    SNDG2[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SNDG2[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPSC[t].spec.CIExyY.x = 0.2800;
    DEPSC[t].spec.CIExyY.y = 0.3100;
    DEPSC[t].spec.CIExyY.Y = 45.00 * 0.01;
    DEPSC[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPSC[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPCN[t].spec.CIExyY.x = 0.2800;
    DEPCN[t].spec.CIExyY.y = 0.3100;
    DEPCN[t].spec.CIExyY.Y = 25.00 * 0.01;
    DEPCN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPCN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPDW[t].spec.CIExyY.x = 0.2800;
    DEPDW[t].spec.CIExyY.y = 0.3100;
    DEPDW[t].spec.CIExyY.Y = 0.00 * 0.01;
    DEPDW[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPDW[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPMD[t].spec.CIExyY.x = 0.2700;
    DEPMD[t].spec.CIExyY.y = 0.3000;
    DEPMD[t].spec.CIExyY.Y = 2.00 * 0.01;
    DEPMD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPMD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPMS[t].spec.CIExyY.x = 0.2400;
    DEPMS[t].spec.CIExyY.y = 0.2600;
    DEPMS[t].spec.CIExyY.Y = 8.00 * 0.01;
    DEPMS[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPMS[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPVS[t].spec.CIExyY.x = 0.2200;
    DEPVS[t].spec.CIExyY.y = 0.2400;
    DEPVS[t].spec.CIExyY.Y = 14.00 * 0.01;
    DEPVS[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPVS[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPIT[t].spec.CIExyY.x = 0.2600;
    DEPIT[t].spec.CIExyY.y = 0.3600;
    DEPIT[t].spec.CIExyY.Y = 14.00 * 0.01;
    DEPIT[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPIT[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RADHI[t].spec.CIExyY.x = 0.3000;
    RADHI[t].spec.CIExyY.y = 0.5200;
    RADHI[t].spec.CIExyY.Y = 60.00 * 0.01;
    RADHI[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RADHI[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RADLO[t].spec.CIExyY.x = 0.3000;
    RADLO[t].spec.CIExyY.y = 0.5200;
    RADLO[t].spec.CIExyY.Y = 20.00 * 0.01;
    RADLO[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RADLO[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    ARPAT[t].spec.CIExyY.x = 0.2600;
    ARPAT[t].spec.CIExyY.y = 0.4200;
    ARPAT[t].spec.CIExyY.Y = 50.00 * 0.01;
    ARPAT[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &ARPAT[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    NINFO[t].spec.CIExyY.x = 0.5000;
    NINFO[t].spec.CIExyY.y = 0.4000;
    NINFO[t].spec.CIExyY.Y = 28.00 * 0.01;
    NINFO[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &NINFO[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RESBL[t].spec.CIExyY.x = 0.1800;
    RESBL[t].spec.CIExyY.y = 0.1500;
    RESBL[t].spec.CIExyY.Y = 22.00 * 0.01;
    RESBL[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RESBL[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    ADINF[t].spec.CIExyY.x = 0.4100;
    ADINF[t].spec.CIExyY.y = 0.4700;
    ADINF[t].spec.CIExyY.Y = 35.00 * 0.01;
    ADINF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &ADINF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RESGR[t].spec.CIExyY.x = 0.2800;
    RESGR[t].spec.CIExyY.y = 0.3100;
    RESGR[t].spec.CIExyY.Y = 25.00 * 0.01;
    RESGR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RESGR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SHIPS[t].spec.CIExyY.x = 0.2800;
    SHIPS[t].spec.CIExyY.y = 0.3100;
    SHIPS[t].spec.CIExyY.Y = 80.00 * 0.01;
    SHIPS[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SHIPS[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    PSTRK[t].spec.CIExyY.x = 0.2800;
    PSTRK[t].spec.CIExyY.y = 0.3100;
    PSTRK[t].spec.CIExyY.Y = 80.00 * 0.01;
    PSTRK[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &PSTRK[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SYTRK[t].spec.CIExyY.x = 0.2800;
    SYTRK[t].spec.CIExyY.y = 0.3100;
    SYTRK[t].spec.CIExyY.Y = 25.00 * 0.01;
    SYTRK[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SYTRK[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    PLRTE[t].spec.CIExyY.x = 0.5800;
    PLRTE[t].spec.CIExyY.y = 0.3500;
    PLRTE[t].spec.CIExyY.Y = 18.00 * 0.01;
    PLRTE[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &PLRTE[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    APLRT[t].spec.CIExyY.x = 0.5000;
    APLRT[t].spec.CIExyY.y = 0.4000;
    APLRT[t].spec.CIExyY.Y = 28.00 * 0.01;
    APLRT[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &APLRT[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFD[t].spec.CIExyY.x = 0.2800;
    UINFD[t].spec.CIExyY.y = 0.3100;
    UINFD[t].spec.CIExyY.Y = 80.00 * 0.01;
    UINFD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFF[t].spec.CIExyY.x = 0.2800;
    UINFF[t].spec.CIExyY.y = 0.3100;
    UINFF[t].spec.CIExyY.Y = 25.00 * 0.01;
    UINFF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UIBCK[t].spec.CIExyY.x = 0.2800;
    UIBCK[t].spec.CIExyY.y = 0.3100;
    UIBCK[t].spec.CIExyY.Y = 0.00 * 0.01;
    UIBCK[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UIBCK[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UIAFD[t].spec.CIExyY.x = 0.2200;
    UIAFD[t].spec.CIExyY.y = 0.2400;
    UIAFD[t].spec.CIExyY.Y = 14.00 * 0.01;
    UIAFD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UIAFD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFR[t].spec.CIExyY.x = 0.4800;
    UINFR[t].spec.CIExyY.y = 0.3000;
    UINFR[t].spec.CIExyY.Y = 25.00 * 0.01;
    UINFR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFG[t].spec.CIExyY.x = 0.3000;
    UINFG[t].spec.CIExyY.y = 0.5200;
    UINFG[t].spec.CIExyY.Y = 60.00 * 0.01;
    UINFG[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFG[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFO[t].spec.CIExyY.x = 0.5000;
    UINFO[t].spec.CIExyY.y = 0.4000;
    UINFO[t].spec.CIExyY.Y = 28.00 * 0.01;
    UINFO[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFO[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFB[t].spec.CIExyY.x = 0.1800;
    UINFB[t].spec.CIExyY.y = 0.1500;
    UINFB[t].spec.CIExyY.Y = 22.00 * 0.01;
    UINFB[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFB[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFM[t].spec.CIExyY.x = 0.3000;
    UINFM[t].spec.CIExyY.y = 0.1700;
    UINFM[t].spec.CIExyY.Y = 15.00 * 0.01;
    UINFM[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFM[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UIBDR[t].spec.CIExyY.x = 0.2800;
    UIBDR[t].spec.CIExyY.y = 0.3100;
    UIBDR[t].spec.CIExyY.Y = 45.00 * 0.01;
    UIBDR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UIBDR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UIAFF[t].spec.CIExyY.x = 0.3600;
    UIAFF[t].spec.CIExyY.y = 0.4000;
    UIAFF[t].spec.CIExyY.Y = 20.00 * 0.01;
    UIAFF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UIAFF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    OUTLW[t].spec.CIExyY.x = 0.2800;
    OUTLW[t].spec.CIExyY.y = 0.3100;
    OUTLW[t].spec.CIExyY.Y = 0.00 * 0.01;
    OUTLW[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &OUTLW[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    OUTLL[t].spec.CIExyY.x = 0.3600;
    OUTLL[t].spec.CIExyY.y = 0.4000;
    OUTLL[t].spec.CIExyY.Y = 20.00 * 0.01;
    OUTLL[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &OUTLL[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RES01[t].spec.CIExyY.x = 0.2800;
    RES01[t].spec.CIExyY.y = 0.3100;
    RES01[t].spec.CIExyY.Y = 25.00 * 0.01;
    RES01[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RES01[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RES02[t].spec.CIExyY.x = 0.2800;
    RES02[t].spec.CIExyY.y = 0.3100;
    RES02[t].spec.CIExyY.Y = 25.00 * 0.01;
    RES02[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RES02[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RES03[t].spec.CIExyY.x = 0.2800;
    RES03[t].spec.CIExyY.y = 0.3100;
    RES03[t].spec.CIExyY.Y = 25.00 * 0.01;
    RES03[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RES03[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    BKAJ1[t].spec.CIExyY.x = 0.2800;
    BKAJ1[t].spec.CIExyY.y = 0.3100;
    BKAJ1[t].spec.CIExyY.Y = 0.000 * 0.01;
    BKAJ1[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &BKAJ1[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    BKAJ2[t].spec.CIExyY.x = 0.2800;
    BKAJ2[t].spec.CIExyY.y = 0.3100;
    BKAJ2[t].spec.CIExyY.Y = 1.600 * 0.01;
    BKAJ2[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &BKAJ2[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    t = DAY_WHITEBACK;
    NODTA[t].spec.CIExyY.x = 0.2800;
    NODTA[t].spec.CIExyY.y = 0.3100;
    NODTA[t].spec.CIExyY.Y = 31.500 * 0.01;
    NODTA[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &NODTA[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CURSR[t].spec.CIExyY.x = 0.5000;
    CURSR[t].spec.CIExyY.y = 0.4000;
    CURSR[t].spec.CIExyY.Y = 22.400 * 0.01;
    CURSR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CURSR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHBLK[t].spec.CIExyY.x = 0.2800;
    CHBLK[t].spec.CIExyY.y = 0.3100;
    CHBLK[t].spec.CIExyY.Y = 0.000 * 0.01;
    CHBLK[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHBLK[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHGRD[t].spec.CIExyY.x = 0.2800;
    CHGRD[t].spec.CIExyY.y = 0.3100;
    CHGRD[t].spec.CIExyY.Y = 17.500 * 0.01;
    CHGRD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHGRD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHGRF[t].spec.CIExyY.x = 0.2800;
    CHGRF[t].spec.CIExyY.y = 0.3100;
    CHGRF[t].spec.CIExyY.Y = 31.500 * 0.01;
    CHGRF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHGRF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHRED[t].spec.CIExyY.x = 0.4800;
    CHRED[t].spec.CIExyY.y = 0.3000;
    CHRED[t].spec.CIExyY.Y = 17.500 * 0.01;
    CHRED[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHRED[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHGRN[t].spec.CIExyY.x = 0.3000;
    CHGRN[t].spec.CIExyY.y = 0.5200;
    CHGRN[t].spec.CIExyY.Y = 42.000 * 0.01;
    CHGRN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHGRN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHYLW[t].spec.CIExyY.x = 0.4100;
    CHYLW[t].spec.CIExyY.y = 0.4700;
    CHYLW[t].spec.CIExyY.Y = 49.000 * 0.01;
    CHYLW[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHYLW[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHMGD[t].spec.CIExyY.x = 0.3000;
    CHMGD[t].spec.CIExyY.y = 0.1700;
    CHMGD[t].spec.CIExyY.Y = 14.000 * 0.01;
    CHMGD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHMGD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHMGF[t].spec.CIExyY.x = 0.2800;
    CHMGF[t].spec.CIExyY.y = 0.2400;
    CHMGF[t].spec.CIExyY.Y = 33.600 * 0.01;
    CHMGF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHMGF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHBRN[t].spec.CIExyY.x = 0.4200;
    CHBRN[t].spec.CIExyY.y = 0.4500;
    CHBRN[t].spec.CIExyY.Y = 21.000 * 0.01;
    CHBRN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHBRN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHWHT[t].spec.CIExyY.x = 0.2800;
    CHWHT[t].spec.CIExyY.y = 0.3100;
    CHWHT[t].spec.CIExyY.Y = 56.000 * 0.01;
    CHWHT[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHWHT[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SCLBR[t].spec.CIExyY.x = 0.5000;
    SCLBR[t].spec.CIExyY.y = 0.4000;
    SCLBR[t].spec.CIExyY.Y = 22.400 * 0.01;
    SCLBR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SCLBR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHCOR[t].spec.CIExyY.x = 0.5000;
    CHCOR[t].spec.CIExyY.y = 0.4000;
    CHCOR[t].spec.CIExyY.Y = 22.400 * 0.01;
    CHCOR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHCOR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LITRD[t].spec.CIExyY.x = 0.4800;
    LITRD[t].spec.CIExyY.y = 0.3000;
    LITRD[t].spec.CIExyY.Y = 17.500 * 0.01;
    LITRD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LITRD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LITGN[t].spec.CIExyY.x = 0.3000;
    LITGN[t].spec.CIExyY.y = 0.5200;
    LITGN[t].spec.CIExyY.Y = 42.000 * 0.01;
    LITGN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LITGN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LITYW[t].spec.CIExyY.x = 0.4100;
    LITYW[t].spec.CIExyY.y = 0.4700;
    LITYW[t].spec.CIExyY.Y = 49.000 * 0.01;
    LITYW[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LITYW[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    ISDNG[t].spec.CIExyY.x = 0.3000;
    ISDNG[t].spec.CIExyY.y = 0.1700;
    ISDNG[t].spec.CIExyY.Y = 14.000 * 0.01;
    ISDNG[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &ISDNG[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DNGHL[t].spec.CIExyY.x = 0.4800;
    DNGHL[t].spec.CIExyY.y = 0.3000;
    DNGHL[t].spec.CIExyY.Y = 17.500 * 0.01;
    DNGHL[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DNGHL[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    TRFCD[t].spec.CIExyY.x = 0.3000;
    TRFCD[t].spec.CIExyY.y = 0.1700;
    TRFCD[t].spec.CIExyY.Y = 14.000 * 0.01;
    TRFCD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &TRFCD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    TRFCF[t].spec.CIExyY.x = 0.2800;
    TRFCF[t].spec.CIExyY.y = 0.2400;
    TRFCF[t].spec.CIExyY.Y = 33.600 * 0.01;
    TRFCF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &TRFCF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LANDA[t].spec.CIExyY.x = 0.3600;
    LANDA[t].spec.CIExyY.y = 0.4000;
    LANDA[t].spec.CIExyY.Y = 34.300 * 0.01;
    LANDA[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LANDA[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LANDF[t].spec.CIExyY.x = 0.4500;
    LANDF[t].spec.CIExyY.y = 0.4500;
    LANDF[t].spec.CIExyY.Y = 10.500 * 0.01;
    LANDF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LANDF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CSTLN[t].spec.CIExyY.x = 0.2800;
    CSTLN[t].spec.CIExyY.y = 0.3100;
    CSTLN[t].spec.CIExyY.Y = 7.000 * 0.01;
    CSTLN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CSTLN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SNDG1[t].spec.CIExyY.x = 0.2800;
    SNDG1[t].spec.CIExyY.y = 0.3100;
    SNDG1[t].spec.CIExyY.Y = 17.500 * 0.01;
    SNDG1[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SNDG1[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SNDG2[t].spec.CIExyY.x = 0.2800;
    SNDG2[t].spec.CIExyY.y = 0.3100;
    SNDG2[t].spec.CIExyY.Y = 0.000 * 0.01;
    SNDG2[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SNDG2[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPSC[t].spec.CIExyY.x = 0.2800;
    DEPSC[t].spec.CIExyY.y = 0.3100;
    DEPSC[t].spec.CIExyY.Y = 7.000 * 0.01;
    DEPSC[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPSC[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPCN[t].spec.CIExyY.x = 0.2800;
    DEPCN[t].spec.CIExyY.y = 0.3100;
    DEPCN[t].spec.CIExyY.Y = 17.500 * 0.01;
    DEPCN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPCN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPDW[t].spec.CIExyY.x = 0.2800;
    DEPDW[t].spec.CIExyY.y = 0.3100;
    DEPDW[t].spec.CIExyY.Y = 56.000 * 0.01;
    DEPDW[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPDW[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPMD[t].spec.CIExyY.x = 0.2700;
    DEPMD[t].spec.CIExyY.y = 0.3000;
    DEPMD[t].spec.CIExyY.Y = 45.500 * 0.01;
    DEPMD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPMD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPMS[t].spec.CIExyY.x = 0.2400;
    DEPMS[t].spec.CIExyY.y = 0.2600;
    DEPMS[t].spec.CIExyY.Y = 38.500 * 0.01;
    DEPMS[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPMS[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPVS[t].spec.CIExyY.x = 0.2200;
    DEPVS[t].spec.CIExyY.y = 0.2400;
    DEPVS[t].spec.CIExyY.Y = 31.500 * 0.01;
    DEPVS[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPVS[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPIT[t].spec.CIExyY.x = 0.2800;
    DEPIT[t].spec.CIExyY.y = 0.3600;
    DEPIT[t].spec.CIExyY.Y = 28.000 * 0.01;
    DEPIT[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPIT[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RADHI[t].spec.CIExyY.x = 0.3000;
    RADHI[t].spec.CIExyY.y = 0.5200;
    RADHI[t].spec.CIExyY.Y = 42.000 * 0.01;
    RADHI[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RADHI[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RADLO[t].spec.CIExyY.x = 0.3000;
    RADLO[t].spec.CIExyY.y = 0.5200;
    RADLO[t].spec.CIExyY.Y = 14.000 * 0.01;
    RADLO[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RADLO[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    ARPAT[t].spec.CIExyY.x = 0.2600;
    ARPAT[t].spec.CIExyY.y = 0.4200;
    ARPAT[t].spec.CIExyY.Y = 21.000 * 0.01;
    ARPAT[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &ARPAT[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    NINFO[t].spec.CIExyY.x = 0.5000;
    NINFO[t].spec.CIExyY.y = 0.4000;
    NINFO[t].spec.CIExyY.Y = 22.400 * 0.01;
    NINFO[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &NINFO[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RESBL[t].spec.CIExyY.x = 0.1800;
    RESBL[t].spec.CIExyY.y = 0.1500;
    RESBL[t].spec.CIExyY.Y = 15.400 * 0.01;
    RESBL[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RESBL[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    ADINF[t].spec.CIExyY.x = 0.4100;
    ADINF[t].spec.CIExyY.y = 0.4700;
    ADINF[t].spec.CIExyY.Y = 24.500 * 0.01;
    ADINF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &ADINF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RESGR[t].spec.CIExyY.x = 0.2800;
    RESGR[t].spec.CIExyY.y = 0.3100;
    RESGR[t].spec.CIExyY.Y = 17.500 * 0.01;
    RESGR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RESGR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SHIPS[t].spec.CIExyY.x = 0.2800;
    SHIPS[t].spec.CIExyY.y = 0.3100;
    SHIPS[t].spec.CIExyY.Y = 0.000 * 0.01;
    SHIPS[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SHIPS[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    PSTRK[t].spec.CIExyY.x = 0.2800;
    PSTRK[t].spec.CIExyY.y = 0.3100;
    PSTRK[t].spec.CIExyY.Y = 0.000 * 0.01;
    PSTRK[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &PSTRK[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SYTRK[t].spec.CIExyY.x = 0.2800;
    SYTRK[t].spec.CIExyY.y = 0.3100;
    SYTRK[t].spec.CIExyY.Y = 17.500 * 0.01;
    SYTRK[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SYTRK[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    PLRTE[t].spec.CIExyY.x = 0.5800;
    PLRTE[t].spec.CIExyY.y = 0.3500;
    PLRTE[t].spec.CIExyY.Y = 18.000 * 0.01;
    PLRTE[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &PLRTE[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    APLRT[t].spec.CIExyY.x = 0.5000;
    APLRT[t].spec.CIExyY.y = 0.4000;
    APLRT[t].spec.CIExyY.Y = 22.400 * 0.01;
    APLRT[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &APLRT[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFD[t].spec.CIExyY.x = 0.2800;
    UINFD[t].spec.CIExyY.y = 0.3100;
    UINFD[t].spec.CIExyY.Y = 0.000 * 0.01;
    UINFD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFF[t].spec.CIExyY.x = 0.2800;
    UINFF[t].spec.CIExyY.y = 0.3100;
    UINFF[t].spec.CIExyY.Y = 17.500 * 0.01;
    UINFF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UIBCK[t].spec.CIExyY.x = 0.2800;
    UIBCK[t].spec.CIExyY.y = 0.3100;
    UIBCK[t].spec.CIExyY.Y = 56.000 * 0.01;
    UIBCK[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UIBCK[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UIAFD[t].spec.CIExyY.x = 0.2200;
    UIAFD[t].spec.CIExyY.y = 0.2400;
    UIAFD[t].spec.CIExyY.Y = 31.500 * 0.01;
    UIAFD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UIAFD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFR[t].spec.CIExyY.x = 0.4800;
    UINFR[t].spec.CIExyY.y = 0.3000;
    UINFR[t].spec.CIExyY.Y = 17.500 * 0.01;
    UINFR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFG[t].spec.CIExyY.x = 0.3000;
    UINFG[t].spec.CIExyY.y = 0.5200;
    UINFG[t].spec.CIExyY.Y = 42.000 * 0.01;
    UINFG[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFG[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFO[t].spec.CIExyY.x = 0.5000;
    UINFO[t].spec.CIExyY.y = 0.4000;
    UINFO[t].spec.CIExyY.Y = 22.400 * 0.01;
    UINFO[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFO[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFB[t].spec.CIExyY.x = 0.1800;
    UINFB[t].spec.CIExyY.y = 0.1500;
    UINFB[t].spec.CIExyY.Y = 15.400 * 0.01;
    UINFB[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFB[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFM[t].spec.CIExyY.x = 0.3000;
    UINFM[t].spec.CIExyY.y = 0.1700;
    UINFM[t].spec.CIExyY.Y = 14.000 * 0.01;
    UINFM[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFM[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UIBDR[t].spec.CIExyY.x = 0.2800;
    UIBDR[t].spec.CIExyY.y = 0.3100;
    UIBDR[t].spec.CIExyY.Y = 17.500 * 0.01;
    UIBDR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UIBDR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UIAFF[t].spec.CIExyY.x = 0.3600;
    UIAFF[t].spec.CIExyY.y = 0.4000;
    UIAFF[t].spec.CIExyY.Y = 34.300 * 0.01;
    UIAFF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UIAFF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    OUTLW[t].spec.CIExyY.x = 0.2800;
    OUTLW[t].spec.CIExyY.y = 0.3100;
    OUTLW[t].spec.CIExyY.Y = 0.00 * 0.01;
    OUTLW[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &OUTLW[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    OUTLL[t].spec.CIExyY.x = 0.3600;
    OUTLL[t].spec.CIExyY.y = 0.4000;
    OUTLL[t].spec.CIExyY.Y = 34.300 * 0.01;
    OUTLL[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &OUTLL[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RES01[t].spec.CIExyY.x = 0.2800;
    RES01[t].spec.CIExyY.y = 0.3100;
    RES01[t].spec.CIExyY.Y = 31.500 * 0.01;
    RES01[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RES01[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RES02[t].spec.CIExyY.x = 0.2800;
    RES02[t].spec.CIExyY.y = 0.3100;
    RES02[t].spec.CIExyY.Y = 31.500 * 0.01;
    RES02[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RES02[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RES03[t].spec.CIExyY.x = 0.2800;
    RES03[t].spec.CIExyY.y = 0.3100;
    RES03[t].spec.CIExyY.Y = 31.500 * 0.01;
    RES03[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RES03[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    BKAJ1[t].spec.CIExyY.x = 0.2800;
    BKAJ1[t].spec.CIExyY.y = 0.3100;
    BKAJ1[t].spec.CIExyY.Y = 0.0000 * 0.01;
    BKAJ1[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &BKAJ1[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    BKAJ2[t].spec.CIExyY.x = 0.2800;
    BKAJ2[t].spec.CIExyY.y = 0.3100;
    BKAJ2[t].spec.CIExyY.Y = 1.1200 * 0.01;
    BKAJ2[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &BKAJ2[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    t = DUSK;
    NODTA[t].spec.CIExyY.x = 0.2800;
    NODTA[t].spec.CIExyY.y = 0.3100;
    NODTA[t].spec.CIExyY.Y = 2.250 * 0.01;
    NODTA[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &NODTA[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CURSR[t].spec.CIExyY.x = 0.5000;
    CURSR[t].spec.CIExyY.y = 0.3900;
    CURSR[t].spec.CIExyY.Y = 2.520 * 0.01;
    CURSR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CURSR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHBLK[t].spec.CIExyY.x = 0.2800;
    CHBLK[t].spec.CIExyY.y = 0.3100;
    CHBLK[t].spec.CIExyY.Y = 4.050 * 0.01;
    CHBLK[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHBLK[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHGRD[t].spec.CIExyY.x = 0.2800;
    CHGRD[t].spec.CIExyY.y = 0.3100;
    CHGRD[t].spec.CIExyY.Y = 4.050 * 0.01;
    CHGRD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHGRD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHGRF[t].spec.CIExyY.x = 0.2800;
    CHGRF[t].spec.CIExyY.y = 0.3100;
    CHGRF[t].spec.CIExyY.Y = 2.250 * 0.01;
    CHGRF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHGRF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHRED[t].spec.CIExyY.x = 0.4800;
    CHRED[t].spec.CIExyY.y = 0.3000;
    CHRED[t].spec.CIExyY.Y = 2.250 * 0.01;
    CHRED[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHRED[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHGRN[t].spec.CIExyY.x = 0.3000;
    CHGRN[t].spec.CIExyY.y = 0.5200;
    CHGRN[t].spec.CIExyY.Y = 5.400 * 0.01;
    CHGRN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHGRN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHYLW[t].spec.CIExyY.x = 0.4100;
    CHYLW[t].spec.CIExyY.y = 0.4700;
    CHYLW[t].spec.CIExyY.Y = 6.300 * 0.01;
    CHYLW[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHYLW[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHMGD[t].spec.CIExyY.x = 0.2800;
    CHMGD[t].spec.CIExyY.y = 0.2400;
    CHMGD[t].spec.CIExyY.Y = 4.770 * 0.01;
    CHMGD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHMGD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHMGF[t].spec.CIExyY.x = 0.3000;
    CHMGF[t].spec.CIExyY.y = 0.1700;
    CHMGF[t].spec.CIExyY.Y = 1.3500 * 0.01;
    CHMGF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHMGF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHBRN[t].spec.CIExyY.x = 0.4200;
    CHBRN[t].spec.CIExyY.y = 0.4500;
    CHBRN[t].spec.CIExyY.Y = 2.250 * 0.01;
    CHBRN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHBRN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHWHT[t].spec.CIExyY.x = 0.2800;
    CHWHT[t].spec.CIExyY.y = 0.3100;
    CHWHT[t].spec.CIExyY.Y = 7.200 * 0.01;
    CHWHT[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHWHT[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SCLBR[t].spec.CIExyY.x = 0.5000;
    SCLBR[t].spec.CIExyY.y = 0.3900;
    SCLBR[t].spec.CIExyY.Y = 2.520 * 0.01;
    SCLBR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SCLBR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHCOR[t].spec.CIExyY.x = 0.5000;
    CHCOR[t].spec.CIExyY.y = 0.3900;
    CHCOR[t].spec.CIExyY.Y = 2.520 * 0.01;
    CHCOR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHCOR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LITRD[t].spec.CIExyY.x = 0.4800;
    LITRD[t].spec.CIExyY.y = 0.3000;
    LITRD[t].spec.CIExyY.Y = 2.250 * 0.01;
    LITRD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LITRD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LITGN[t].spec.CIExyY.x = 0.3000;
    LITGN[t].spec.CIExyY.y = 0.5200;
    LITGN[t].spec.CIExyY.Y = 5.400 * 0.01;
    LITGN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LITGN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LITYW[t].spec.CIExyY.x = 0.4100;
    LITYW[t].spec.CIExyY.y = 0.4700;
    LITYW[t].spec.CIExyY.Y = 6.300 * 0.01;
    LITYW[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LITYW[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    ISDNG[t].spec.CIExyY.x = 0.2800;
    ISDNG[t].spec.CIExyY.y = 0.2400;
    ISDNG[t].spec.CIExyY.Y = 4.770 * 0.01;
    ISDNG[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &ISDNG[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DNGHL[t].spec.CIExyY.x = 0.4800;
    DNGHL[t].spec.CIExyY.y = 0.3000;
    DNGHL[t].spec.CIExyY.Y = 2.250 * 0.01;
    DNGHL[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DNGHL[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    TRFCD[t].spec.CIExyY.x = 0.2800;
    TRFCD[t].spec.CIExyY.y = 0.2400;
    TRFCD[t].spec.CIExyY.Y = 4.770 * 0.01;
    TRFCD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &TRFCD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    TRFCF[t].spec.CIExyY.x = 0.3000;
    TRFCF[t].spec.CIExyY.y = 0.1700;
    TRFCF[t].spec.CIExyY.Y = 1.3500 * 0.01;
    TRFCF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &TRFCF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LANDA[t].spec.CIExyY.x = 0.3600;
    LANDA[t].spec.CIExyY.y = 0.4000;
    LANDA[t].spec.CIExyY.Y = 1.800 * 0.01;
    LANDA[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LANDA[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LANDF[t].spec.CIExyY.x = 0.4500;
    LANDF[t].spec.CIExyY.y = 0.4500;
    LANDF[t].spec.CIExyY.Y = 4.050 * 0.01;
    LANDF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LANDF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CSTLN[t].spec.CIExyY.x = 0.2800;
    CSTLN[t].spec.CIExyY.y = 0.3100;
    CSTLN[t].spec.CIExyY.Y = 4.050 * 0.01;
    CSTLN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CSTLN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SNDG1[t].spec.CIExyY.x = 0.2800;
    SNDG1[t].spec.CIExyY.y = 0.3100;
    SNDG1[t].spec.CIExyY.Y = 2.2500 * 0.01;
    SNDG1[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SNDG1[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SNDG2[t].spec.CIExyY.x = 0.2800;
    SNDG2[t].spec.CIExyY.y = 0.3100;
    SNDG2[t].spec.CIExyY.Y = 7.200 * 0.01;
    SNDG2[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SNDG2[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPSC[t].spec.CIExyY.x = 0.2800;
    DEPSC[t].spec.CIExyY.y = 0.3100;
    DEPSC[t].spec.CIExyY.Y = 4.050 * 0.01;
    DEPSC[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPSC[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPCN[t].spec.CIExyY.x = 0.2800;
    DEPCN[t].spec.CIExyY.y = 0.3100;
    DEPCN[t].spec.CIExyY.Y = 2.250 * 0.01;
    DEPCN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPCN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPDW[t].spec.CIExyY.x = 0.2800;
    DEPDW[t].spec.CIExyY.y = 0.3100;
    DEPDW[t].spec.CIExyY.Y = 0.000 * 0.01;
    DEPDW[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPDW[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPMD[t].spec.CIExyY.x = 0.2700;
    DEPMD[t].spec.CIExyY.y = 0.3000;
    DEPMD[t].spec.CIExyY.Y = 0.180 * 0.01;
    DEPMD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPMD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPMS[t].spec.CIExyY.x = 0.2400;
    DEPMS[t].spec.CIExyY.y = 0.2600;
    DEPMS[t].spec.CIExyY.Y = 0.720 * 0.01;
    DEPMS[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPMS[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPVS[t].spec.CIExyY.x = 0.2200;
    DEPVS[t].spec.CIExyY.y = 0.2400;
    DEPVS[t].spec.CIExyY.Y = 1.260 * 0.01;
    DEPVS[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPVS[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPIT[t].spec.CIExyY.x = 0.2600;
    DEPIT[t].spec.CIExyY.y = 0.3600;
    DEPIT[t].spec.CIExyY.Y = 1.260 * 0.01;
    DEPIT[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPIT[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RADHI[t].spec.CIExyY.x = 0.3000;
    RADHI[t].spec.CIExyY.y = 0.5200;
    RADHI[t].spec.CIExyY.Y = 5.400 * 0.01;
    RADHI[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RADHI[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RADLO[t].spec.CIExyY.x = 0.3000;
    RADLO[t].spec.CIExyY.y = 0.5200;
    RADLO[t].spec.CIExyY.Y = 1.800 * 0.01;
    RADLO[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RADLO[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    ARPAT[t].spec.CIExyY.x = 0.2600;
    ARPAT[t].spec.CIExyY.y = 0.4200;
    ARPAT[t].spec.CIExyY.Y = 4.500 * 0.01;
    ARPAT[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &ARPAT[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    NINFO[t].spec.CIExyY.x = 0.5000;
    NINFO[t].spec.CIExyY.y = 0.3900;
    NINFO[t].spec.CIExyY.Y = 2.520 * 0.01;
    NINFO[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &NINFO[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RESBL[t].spec.CIExyY.x = 0.1800;
    RESBL[t].spec.CIExyY.y = 0.1500;
    RESBL[t].spec.CIExyY.Y = 1.980 * 0.01;
    RESBL[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RESBL[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    ADINF[t].spec.CIExyY.x = 0.4100;
    ADINF[t].spec.CIExyY.y = 0.4700;
    ADINF[t].spec.CIExyY.Y = 3.150 * 0.01;
    ADINF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &ADINF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RESGR[t].spec.CIExyY.x = 0.2800;
    RESGR[t].spec.CIExyY.y = 0.3100;
    RESGR[t].spec.CIExyY.Y = 2.250 * 0.01;
    RESGR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RESGR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SHIPS[t].spec.CIExyY.x = 0.2800;
    SHIPS[t].spec.CIExyY.y = 0.3100;
    SHIPS[t].spec.CIExyY.Y = 7.200 * 0.01;
    SHIPS[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SHIPS[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    PSTRK[t].spec.CIExyY.x = 0.2800;
    PSTRK[t].spec.CIExyY.y = 0.3100;
    PSTRK[t].spec.CIExyY.Y = 7.200 * 0.01;
    PSTRK[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &PSTRK[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SYTRK[t].spec.CIExyY.x = 0.2800;
    SYTRK[t].spec.CIExyY.y = 0.3100;
    SYTRK[t].spec.CIExyY.Y = 2.2500 * 0.01;
    SYTRK[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SYTRK[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    PLRTE[t].spec.CIExyY.x = 0.5800;
    PLRTE[t].spec.CIExyY.y = 0.3500;
    PLRTE[t].spec.CIExyY.Y = 1.620 * 0.01;
    PLRTE[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &PLRTE[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    APLRT[t].spec.CIExyY.x = 0.5000;
    APLRT[t].spec.CIExyY.y = 0.3900;
    APLRT[t].spec.CIExyY.Y = 2.520 * 0.01;
    APLRT[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &APLRT[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFD[t].spec.CIExyY.x = 0.2800;
    UINFD[t].spec.CIExyY.y = 0.3100;
    UINFD[t].spec.CIExyY.Y = 7.200 * 0.01;
    UINFD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFF[t].spec.CIExyY.x = 0.2800;
    UINFF[t].spec.CIExyY.y = 0.3100;
    UINFF[t].spec.CIExyY.Y = 2.2500 * 0.01;
    UINFF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UIBCK[t].spec.CIExyY.x = 0.2800;
    UIBCK[t].spec.CIExyY.y = 0.3100;
    UIBCK[t].spec.CIExyY.Y = 0.000 * 0.01;
    UIBCK[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UIBCK[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UIAFD[t].spec.CIExyY.x = 0.2200;
    UIAFD[t].spec.CIExyY.y = 0.2400;
    UIAFD[t].spec.CIExyY.Y = 1.260 * 0.01;
    UIAFD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UIAFD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFR[t].spec.CIExyY.x = 0.4800;
    UINFR[t].spec.CIExyY.y = 0.3000;
    UINFR[t].spec.CIExyY.Y = 2.250 * 0.01;
    UINFR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFG[t].spec.CIExyY.x = 0.3000;
    UINFG[t].spec.CIExyY.y = 0.5200;
    UINFG[t].spec.CIExyY.Y = 5.400 * 0.01;
    UINFG[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFG[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFO[t].spec.CIExyY.x = 0.5000;
    UINFO[t].spec.CIExyY.y = 0.3900;
    UINFO[t].spec.CIExyY.Y = 2.520 * 0.01;
    UINFO[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFO[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFB[t].spec.CIExyY.x = 0.1800;
    UINFB[t].spec.CIExyY.y = 0.1500;
    UINFB[t].spec.CIExyY.Y = 1.980 * 0.01;
    UINFB[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFB[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFM[t].spec.CIExyY.x = 0.3000;
    UINFM[t].spec.CIExyY.y = 0.1700;
    UINFM[t].spec.CIExyY.Y = 1.3500 * 0.01;
    UINFM[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFM[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UIBDR[t].spec.CIExyY.x = 0.2800;
    UIBDR[t].spec.CIExyY.y = 0.3100;
    UIBDR[t].spec.CIExyY.Y = 4.050 * 0.01;
    UIBDR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UIBDR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UIAFF[t].spec.CIExyY.x = 0.3600;
    UIAFF[t].spec.CIExyY.y = 0.4000;
    UIAFF[t].spec.CIExyY.Y = 1.800 * 0.01;
    UIAFF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UIAFF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    OUTLW[t].spec.CIExyY.x = 0.2800;
    OUTLW[t].spec.CIExyY.y = 0.3100;
    OUTLW[t].spec.CIExyY.Y = 0.00 * 0.01;
    OUTLW[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &OUTLW[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    OUTLL[t].spec.CIExyY.x = 0.3600;
    OUTLL[t].spec.CIExyY.y = 0.4000;
    OUTLL[t].spec.CIExyY.Y = 1.800 * 0.01;
    OUTLL[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &OUTLL[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RES01[t].spec.CIExyY.x = 0.2800;
    RES01[t].spec.CIExyY.y = 0.3100;
    RES01[t].spec.CIExyY.Y = 2.250 * 0.01;
    RES01[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RES01[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RES02[t].spec.CIExyY.x = 0.2800;
    RES02[t].spec.CIExyY.y = 0.3100;
    RES02[t].spec.CIExyY.Y = 2.250 * 0.01;
    RES02[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RES02[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RES03[t].spec.CIExyY.x = 0.2800;
    RES03[t].spec.CIExyY.y = 0.3100;
    RES03[t].spec.CIExyY.Y = 2.250 * 0.01;
    RES03[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RES03[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    BKAJ1[t].spec.CIExyY.x = 0.2800;
    BKAJ1[t].spec.CIExyY.y = 0.3100;
    BKAJ1[t].spec.CIExyY.Y = 0.000 * 0.01;
    BKAJ1[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &BKAJ1[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    BKAJ2[t].spec.CIExyY.x = 0.2800;
    BKAJ2[t].spec.CIExyY.y = 0.3100;
    BKAJ2[t].spec.CIExyY.Y = 0.144 * 0.01;
    BKAJ2[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &BKAJ2[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    t = NIGHT;
    NODTA[t].spec.CIExyY.x = 0.2800;
    NODTA[t].spec.CIExyY.y = 0.3100;
    NODTA[t].spec.CIExyY.Y = 0.00 * 0.01;
    NODTA[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &NODTA[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CURSR[t].spec.CIExyY.x = 0.5000;
    CURSR[t].spec.CIExyY.y = 0.4000;
    CURSR[t].spec.CIExyY.Y = 1.20 * 0.01;
    CURSR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CURSR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHBLK[t].spec.CIExyY.x = 0.2800;
    CHBLK[t].spec.CIExyY.y = 0.3100;
    CHBLK[t].spec.CIExyY.Y = 1.20 * 0.01;
    CHBLK[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHBLK[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHGRD[t].spec.CIExyY.x = 0.2800;
    CHGRD[t].spec.CIExyY.y = 0.3100;
    CHGRD[t].spec.CIExyY.Y = 1.20 * 0.01;
    CHGRD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHGRD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHGRF[t].spec.CIExyY.x = 0.2800;
    CHGRF[t].spec.CIExyY.y = 0.3100;
    CHGRF[t].spec.CIExyY.Y = 0.30 * 0.01;
    CHGRF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHGRF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHRED[t].spec.CIExyY.x = 0.5800;
    CHRED[t].spec.CIExyY.y = 0.3500;
    CHRED[t].spec.CIExyY.Y = 1.00 * 0.01;
    CHRED[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHRED[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHGRN[t].spec.CIExyY.x = 0.3400;
    CHGRN[t].spec.CIExyY.y = 0.5400;
    CHGRN[t].spec.CIExyY.Y = 1.00 * 0.01;
    CHGRN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHGRN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHYLW[t].spec.CIExyY.x = 0.4300;
    CHYLW[t].spec.CIExyY.y = 0.4600;
    CHYLW[t].spec.CIExyY.Y = 1.20 * 0.01;
    CHYLW[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHYLW[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHMGD[t].spec.CIExyY.x = 0.3000;
    CHMGD[t].spec.CIExyY.y = 0.1700;
    CHMGD[t].spec.CIExyY.Y = 1.10 * 0.01;
    CHMGD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHMGD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHMGF[t].spec.CIExyY.x = 0.3000;
    CHMGF[t].spec.CIExyY.y = 0.1700;
    CHMGF[t].spec.CIExyY.Y = 1.10 * 0.01;
    CHMGF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHMGF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHBRN[t].spec.CIExyY.x = 0.4200;
    CHBRN[t].spec.CIExyY.y = 0.4500;
    CHBRN[t].spec.CIExyY.Y = 0.15 * 0.01;
    CHBRN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHBRN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHWHT[t].spec.CIExyY.x = 0.2800;
    CHWHT[t].spec.CIExyY.y = 0.3100;
    CHWHT[t].spec.CIExyY.Y = 1.74 * 0.01;
    CHWHT[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHWHT[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SCLBR[t].spec.CIExyY.x = 0.5000;
    SCLBR[t].spec.CIExyY.y = 0.4000;
    SCLBR[t].spec.CIExyY.Y = 1.20 * 0.01;
    SCLBR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SCLBR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CHCOR[t].spec.CIExyY.x = 0.5000;
    CHCOR[t].spec.CIExyY.y = 0.4000;
    CHCOR[t].spec.CIExyY.Y = 1.20 * 0.01;
    CHCOR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CHCOR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LITRD[t].spec.CIExyY.x = 0.5800;
    LITRD[t].spec.CIExyY.y = 0.3500;
    LITRD[t].spec.CIExyY.Y = 1.00 * 0.01;
    LITRD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LITRD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LITGN[t].spec.CIExyY.x = 0.3400;
    LITGN[t].spec.CIExyY.y = 0.5400;
    LITGN[t].spec.CIExyY.Y = 1.00 * 0.01;
    LITGN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LITGN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LITYW[t].spec.CIExyY.x = 0.4300;
    LITYW[t].spec.CIExyY.y = 0.4600;
    LITYW[t].spec.CIExyY.Y = 1.20 * 0.01;
    LITYW[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LITYW[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    ISDNG[t].spec.CIExyY.x = 0.3000;
    ISDNG[t].spec.CIExyY.y = 0.1700;
    ISDNG[t].spec.CIExyY.Y = 1.10 * 0.01;
    ISDNG[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &ISDNG[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DNGHL[t].spec.CIExyY.x = 0.5800;
    DNGHL[t].spec.CIExyY.y = 0.3500;
    DNGHL[t].spec.CIExyY.Y = 1.00 * 0.01;
    DNGHL[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DNGHL[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    TRFCD[t].spec.CIExyY.x = 0.3000;
    TRFCD[t].spec.CIExyY.y = 0.1700;
    TRFCD[t].spec.CIExyY.Y = 1.40 * 0.01;
    TRFCD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &TRFCD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    TRFCF[t].spec.CIExyY.x = 0.3000;
    TRFCF[t].spec.CIExyY.y = 0.1700;
    TRFCF[t].spec.CIExyY.Y = 1.10 * 0.01;
    TRFCF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &TRFCF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LANDA[t].spec.CIExyY.x = 0.3600;
    LANDA[t].spec.CIExyY.y = 0.3600;
    LANDA[t].spec.CIExyY.Y = 0.10 * 0.01;
    LANDA[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LANDA[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    LANDF[t].spec.CIExyY.x = 0.4500;
    LANDF[t].spec.CIExyY.y = 0.4500;
    LANDF[t].spec.CIExyY.Y = 0.30 * 0.01;
    LANDF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &LANDF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    CSTLN[t].spec.CIExyY.x = 0.2800;
    CSTLN[t].spec.CIExyY.y = 0.3100;
    CSTLN[t].spec.CIExyY.Y = 1.74 * 0.01;
    CSTLN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &CSTLN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SNDG1[t].spec.CIExyY.x = 0.2800;
    SNDG1[t].spec.CIExyY.y = 0.3100;
    SNDG1[t].spec.CIExyY.Y = 1.20 * 0.01;
    SNDG1[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SNDG1[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SNDG2[t].spec.CIExyY.x = 0.2800;
    SNDG2[t].spec.CIExyY.y = 0.3100;
    SNDG2[t].spec.CIExyY.Y = 2.46 * 0.01;
    SNDG2[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SNDG2[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPSC[t].spec.CIExyY.x = 0.2800;
    DEPSC[t].spec.CIExyY.y = 0.3100;
    DEPSC[t].spec.CIExyY.Y = 1.74 * 0.01;
    DEPSC[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPSC[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPCN[t].spec.CIExyY.x = 0.2800;
    DEPCN[t].spec.CIExyY.y = 0.3100;
    DEPCN[t].spec.CIExyY.Y = 1.20 * 0.01;
    DEPCN[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPCN[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPDW[t].spec.CIExyY.x = 0.2800;
    DEPDW[t].spec.CIExyY.y = 0.3100;
    DEPDW[t].spec.CIExyY.Y = 0.00 * 0.01;
    DEPDW[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPDW[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPMD[t].spec.CIExyY.x = 0.2800;
    DEPMD[t].spec.CIExyY.y = 0.3100;
    DEPMD[t].spec.CIExyY.Y = 0.00 * 0.01;
    DEPMD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPMD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPMS[t].spec.CIExyY.x = 0.1600;
    DEPMS[t].spec.CIExyY.y = 0.0800;
    DEPMS[t].spec.CIExyY.Y = 0.04 * 0.01;
    DEPMS[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPMS[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPVS[t].spec.CIExyY.x = 0.1600;
    DEPVS[t].spec.CIExyY.y = 0.0800;
    DEPVS[t].spec.CIExyY.Y = 0.04 * 0.01;
    DEPVS[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPVS[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    DEPIT[t].spec.CIExyY.x = 0.2800;
    DEPIT[t].spec.CIExyY.y = 0.3600;
    DEPIT[t].spec.CIExyY.Y = 0.10 * 0.01;
    DEPIT[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &DEPIT[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RADHI[t].spec.CIExyY.x = 0.3400;
    RADHI[t].spec.CIExyY.y = 0.5400;
    RADHI[t].spec.CIExyY.Y = 1.00 * 0.01;
    RADHI[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RADHI[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RADLO[t].spec.CIExyY.x = 0.3400;
    RADLO[t].spec.CIExyY.y = 0.5400;
    RADLO[t].spec.CIExyY.Y = 0.20 * 0.01;
    RADLO[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RADLO[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    ARPAT[t].spec.CIExyY.x = 0.2600;
    ARPAT[t].spec.CIExyY.y = 0.4200;
    ARPAT[t].spec.CIExyY.Y = 0.80 * 0.01;
    ARPAT[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &ARPAT[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    NINFO[t].spec.CIExyY.x = 0.5000;
    NINFO[t].spec.CIExyY.y = 0.4000;
    NINFO[t].spec.CIExyY.Y = 1.20 * 0.01;
    NINFO[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &NINFO[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RESBL[t].spec.CIExyY.x = 0.1800;
    RESBL[t].spec.CIExyY.y = 0.1300;
    RESBL[t].spec.CIExyY.Y = 1.20 * 0.01;
    RESBL[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RESBL[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    ADINF[t].spec.CIExyY.x = 0.4300;
    ADINF[t].spec.CIExyY.y = 0.4600;
    ADINF[t].spec.CIExyY.Y = 1.20 * 0.01;
    ADINF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &ADINF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RESGR[t].spec.CIExyY.x = 0.2800;
    RESGR[t].spec.CIExyY.y = 0.3100;
    RESGR[t].spec.CIExyY.Y = 0.30 * 0.01;
    RESGR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RESGR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SHIPS[t].spec.CIExyY.x = 0.2800;
    SHIPS[t].spec.CIExyY.y = 0.3100;
    SHIPS[t].spec.CIExyY.Y = 1.74 * 0.01;
    SHIPS[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SHIPS[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    PSTRK[t].spec.CIExyY.x = 0.2800;
    PSTRK[t].spec.CIExyY.y = 0.3100;
    PSTRK[t].spec.CIExyY.Y = 1.74 * 0.01;
    PSTRK[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &PSTRK[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    SYTRK[t].spec.CIExyY.x = 0.2800;
    SYTRK[t].spec.CIExyY.y = 0.3100;
    SYTRK[t].spec.CIExyY.Y = 1.20 * 0.01;
    SYTRK[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &SYTRK[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    PLRTE[t].spec.CIExyY.x = 0.5800;
    PLRTE[t].spec.CIExyY.y = 0.3500;
    PLRTE[t].spec.CIExyY.Y = 1.30 * 0.01;
    PLRTE[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &PLRTE[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    APLRT[t].spec.CIExyY.x = 0.5000;
    APLRT[t].spec.CIExyY.y = 0.4000;
    APLRT[t].spec.CIExyY.Y = 1.20 * 0.01;
    APLRT[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &APLRT[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFD[t].spec.CIExyY.x = 0.2800;
    UINFD[t].spec.CIExyY.y = 0.3100;
    UINFD[t].spec.CIExyY.Y = 2.46 * 0.01;
    UINFD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFF[t].spec.CIExyY.x = 0.2800;
    UINFF[t].spec.CIExyY.y = 0.3100;
    UINFF[t].spec.CIExyY.Y = 1.20 * 0.01;
    UINFF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UIBCK[t].spec.CIExyY.x = 0.2800;
    UIBCK[t].spec.CIExyY.y = 0.3100;
    UIBCK[t].spec.CIExyY.Y = 0.00 * 0.01;
    UIBCK[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UIBCK[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UIAFD[t].spec.CIExyY.x = 0.1600;
    UIAFD[t].spec.CIExyY.y = 0.0800;
    UIAFD[t].spec.CIExyY.Y = 0.04 * 0.01;
    UIAFD[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UIAFD[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFR[t].spec.CIExyY.x = 0.5800;
    UINFR[t].spec.CIExyY.y = 0.3500;
    UINFR[t].spec.CIExyY.Y = 1.00 * 0.01;
    UINFR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFG[t].spec.CIExyY.x = 0.3400;
    UINFG[t].spec.CIExyY.y = 0.5400;
    UINFG[t].spec.CIExyY.Y = 1.00 * 0.01;
    UINFG[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFG[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFO[t].spec.CIExyY.x = 0.5000;
    UINFO[t].spec.CIExyY.y = 0.4000;
    UINFO[t].spec.CIExyY.Y = 1.20 * 0.01;
    UINFO[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFO[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFB[t].spec.CIExyY.x = 0.1800;
    UINFB[t].spec.CIExyY.y = 0.1300;
    UINFB[t].spec.CIExyY.Y = 1.20 * 0.01;
    UINFB[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFB[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UINFM[t].spec.CIExyY.x = 0.3000;
    UINFM[t].spec.CIExyY.y = 0.1700;
    UINFM[t].spec.CIExyY.Y = 1.10 * 0.01;
    UINFM[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UINFM[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UIBDR[t].spec.CIExyY.x = 0.2800;
    UIBDR[t].spec.CIExyY.y = 0.3100;
    UIBDR[t].spec.CIExyY.Y = 1.20 * 0.01;
    UIBDR[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UIBDR[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    UIAFF[t].spec.CIExyY.x = 0.3600;
    UIAFF[t].spec.CIExyY.y = 0.3600;
    UIAFF[t].spec.CIExyY.Y = 0.10 * 0.01;
    UIAFF[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &UIAFF[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    OUTLW[t].spec.CIExyY.x = 0.2800;
    OUTLW[t].spec.CIExyY.y = 0.3100;
    OUTLW[t].spec.CIExyY.Y = 0.00 * 0.01;
    OUTLW[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &OUTLW[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    OUTLL[t].spec.CIExyY.x = 0.3600;
    OUTLL[t].spec.CIExyY.y = 0.3600;
    OUTLL[t].spec.CIExyY.Y = 0.10 * 0.01;
    OUTLL[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &OUTLL[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RES01[t].spec.CIExyY.x = 0.2800;
    RES01[t].spec.CIExyY.y = 0.3100;
    RES01[t].spec.CIExyY.Y = 0.00 * 0.01;
    RES01[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RES01[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RES02[t].spec.CIExyY.x = 0.2800;
    RES02[t].spec.CIExyY.y = 0.3100;
    RES02[t].spec.CIExyY.Y = 0.00 * 0.01;
    RES02[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RES02[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    RES03[t].spec.CIExyY.x = 0.2800;
    RES03[t].spec.CIExyY.y = 0.3100;
    RES03[t].spec.CIExyY.Y = 0.00 * 0.01;
    RES03[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &RES03[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    BKAJ1[t].spec.CIExyY.x = 0.2800;
    BKAJ1[t].spec.CIExyY.y = 0.3100;
    BKAJ1[t].spec.CIExyY.Y = 0.00 * 0.01;
    BKAJ1[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &BKAJ1[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    BKAJ2[t].spec.CIExyY.x = 0.2800;
    BKAJ2[t].spec.CIExyY.y = 0.3100;
    BKAJ2[t].spec.CIExyY.Y = 0.05 * 0.01;
    BKAJ2[t].format = XcmsCIExyYFormat;
    if (XcmsAllocColor(display, cmap, &BKAJ2[t], XcmsRGBFormat) == 0) {
	return 0;
    }
    return 0;
}
