#ifndef _GDMA_HAL_GAL_EXPORT_USER_H_
#define _GDMA_HAL_GAL_EXPORT_USER_H_

#include "kadp_hal_gal.h"


#define GDMA_HAL_GAL_SUCCESS  0
#define GDMA_HAL_GAL_FAIL    -1

/* data structure for RPC call */
#define GDMA_DRV_GAL_IOC_MAGIC  'f'

#define GDMA_DRV_GAL_INIT                          _IOW(GDMA_DRV_GAL_IOC_MAGIC, 0, int)
#define GDMA_DRV_GAL_FINALIZE                      _IOW(GDMA_DRV_GAL_IOC_MAGIC, 1, int)
#define GDMA_DRV_GAL_GETSURFACEPALETTE             _IOR(GDMA_DRV_GAL_IOC_MAGIC, 2, int)
#define GDMA_DRV_GAL_SETSURFACEPALETTE             _IOW(GDMA_DRV_GAL_IOC_MAGIC, 3, int)

#define GDMA_DRV_GAL_SETFRAMEBUFFER                _IOW(GDMA_DRV_GAL_IOC_MAGIC, 4, int)
#define GDMA_DRV_GAL_RESETFRAMEBUFFER              _IOW(GDMA_DRV_GAL_IOC_MAGIC, 5, int)

#define GDMA_DRV_GAL_SETFBHWCONTROLLERVSYNC        _IOW(GDMA_DRV_GAL_IOC_MAGIC, 6, int)

#define GDMA_DRV_GAL_SETFBHWCONTROLLERVISIBILITY   _IOW(GDMA_DRV_GAL_IOC_MAGIC, 7, int)
#define GDMA_DRV_GAL_MOVECURSOR                    _IOW(GDMA_DRV_GAL_IOC_MAGIC, 8, int)
#define GDMA_DRV_GAL_SETSCREENMIRRORMODE           _IOW(GDMA_DRV_GAL_IOC_MAGIC, 9, int)
#define GDMA_DRV_GAL_SETFBHWCONTROLLERPATHMODE     _IOW(GDMA_DRV_GAL_IOC_MAGIC, 10, int)
#define GDMA_DRV_GAL_SET3DMODE                     _IOW(GDMA_DRV_GAL_IOC_MAGIC, 11, int)

#define GDMA_DRV_GAL_GETGRAPHICMEMORYINFO          _IOR(GDMA_DRV_GAL_IOC_MAGIC, 12, int)
#define GDMA_DRV_GAL_SETFBHWCONTROLLERSTEREOSCOPE  _IOW(GDMA_DRV_GAL_IOC_MAGIC, 13, int)
#define GDMA_DRV_GAL_SETFRAMEBUFFERPIXELFORMAT     _IOW(GDMA_DRV_GAL_IOC_MAGIC, 14, int)
#define GDMA_DRV_GAL_GETFRAMEBUFFERPIXELFORMAT     _IOR(GDMA_DRV_GAL_IOC_MAGIC, 15, int)
#define GDMA_DRV_GAL_SETFRAMEBUFFERPROPERTY        _IOW(GDMA_DRV_GAL_IOC_MAGIC, 16, int)
#define GDMA_DRV_GAL_SETFRAMEBUFFERWITHPROPERTY    _IOW(GDMA_DRV_GAL_IOC_MAGIC, 17, int)
#define GDMA_DRV_GAL_GETFRAMEBUFFERLIST            _IOR(GDMA_DRV_GAL_IOC_MAGIC, 18, int)
#define GDMA_DRV_GAL_GETFBHWCONTROLLERVISIBILITY   _IOR(GDMA_DRV_GAL_IOC_MAGIC, 19, int)
#define GDMA_DRV_GAL_SETOSDROTATIONMODE            _IOW(GDMA_DRV_GAL_IOC_MAGIC, 20, int)
#define GDMA_DRV_GAL_GETOSDOUTPUTRESOLUTION        _IOR(GDMA_DRV_GAL_IOC_MAGIC, 21, int)

#define DRV_GAL_SURFACE_CREATE        				_IOR(GDMA_DRV_GAL_IOC_MAGIC, 22, int)
#define DRV_GAL_SURFACE_DESTROY						_IOR(GDMA_DRV_GAL_IOC_MAGIC, 23, int)
#define DRV_GAL_MEMINFO_GRAPHICS					_IOR(GDMA_DRV_GAL_IOC_MAGIC, 24, int)
#define DRV_GAL_SETGRAPHICOUTPUTRESOLUTION		    _IOR(GDMA_DRV_GAL_IOC_MAGIC, 25, int)
#define GDMA_DRV_GAL_SETCURSORRESOLUTION		    _IOW(GDMA_DRV_GAL_IOC_MAGIC, 26, int)
#define GDMA_DRV_GAL_SETCURSORPOSITION              _IOW(GDMA_DRV_GAL_IOC_MAGIC, 27, int)
#define GDMA_DRV_GAL_IOC_MAXNR                 27


#define MAX_PALETTE_SIZE 256
#define MAX_FRAMEBUFFER_NUMBER 3
#define CURSOR_TO_FRAMEBUFFER_INDEX 2 /*0,1,2*/
#define MAX_SURFACE_IN_FRAMEBUFFER_NUMBER 4
#define MAX_SURFACE_INFO_NUMBER 10
#define MAX_SURFACE_LINK_PALETTE 32


typedef struct {
	KADP_HAL_GAL_SURFACE_INFO_T   Surface;
	KADP_HAL_GAL_PALETTE_INFO_T   palette;
} KDRV_GAL_PALETTE_SURFACE_INFO_T;


typedef struct {
	UINT16 width;
	UINT16 height;
	KADP_HAL_GAL_PIXEL_FORMAT_T pixelFormat;
	KADP_HAL_GAL_SURFACE_INFO_T surfaceInfo;
} KDRV_GAL_SURFACE_HANDLING_T;

typedef struct {
	KADP_HAL_GAL_GRAPHIC_MEM_INFO_T memInfo;
	/*for HAL_GAL_GetDeviceCapability()*/
	UINT32						physicalAddrOfBase;
	/**< whether the FBC (Frame Buffer Compression) is supported, or not (if supported, then this value is TRUE otherwise FALSE.) */
	UINT8 bFBCSupported;
} KDRV_GAL_GRAPHICS_MEM_T;


typedef struct {
	KADP_HAL_GAL_SURFACE_INFO_T   Surface;
	unsigned int fbHWControllerIndex;
} KDRV_GAL_SURFACE_FRAMEBUFFER_INFO_T;

typedef struct {
	KADP_HAL_GAL_SURFACE_INFO_T   Surface;
	UINT32 fbHWControllerIndex;
    KADP_HAL_GAL_FRAMEBUFFER_PROPERTY_FLAGS_T flag;
    KADP_HAL_GAL_FRAMEBUFFER_PROPERTY_EXTENDED_INFO_T extend_info;
} KDRV_GAL_SURFACE_FRAMEBUFFER_PROPERTY_FLAG_INFO_T;

typedef struct {
	UINT32 fbHWControllerIndex;
    KADP_HAL_GAL_FRAMEBUFFER_PROPERTY_FLAGS_T flag;
    KADP_HAL_GAL_FRAMEBUFFER_PROPERTY_INFO_T info;
} KDRV_GAL_FRAMEBUFFER_PROPERTY_FLAG_INFO_T;


typedef struct {
    UINT32 fbHWControllerIndex;
    BOOLEAN bVsync;
} KDRV_GAL_FRAMEBUFFER_VSYNC_INFO_T;

typedef struct {
    unsigned int fbHWControllerIndex;
    KADP_HAL_GAL_CURSOR_PROPERTY_INFO_T CursorProperty;
} KDRV_GAL_FRAMEBUFFER_CURSORPROPERTY_INFO_T;

typedef struct {
    UINT32 fbHWControllerIndex;
	unsigned char bStereoscope;
	KADP_HAL_GAL_STEREOSCOPE_TYPE_T stereoscopeType;
} KDRV_GAL_FRAMEBUFFER_STEREOSCOPE_T;

typedef struct {
    UINT32 fbHWControllerIndex;
	KADP_HAL_GAL_PIXEL_FORMAT_EX_T pixelFormat;
} KDRV_GAL_FRAMEBUFFER_PIXELFORMAT_T;

typedef struct {
	KADP_HAL_GAL_SURFACE_INFO_T pSurfaceList[MAX_SURFACE_INFO_NUMBER];
	UINT32 NumOfSurface;
} KDRV_GAL_FRAMEBUFFER_LIST_T;

typedef struct {
    UINT32 fbHWControllerIndex;
	BOOLEAN bVisibility;
} KDRV_GAL_FRAMEBUFFER_VISIBILITY_T;

typedef struct {
	KADP_HAL_GAL_FRAMEBUFFER_VISIBILITY_INFO_T list[MAX_FRAMEBUFFER_NUMBER];
	UINT32 changedFbNum;
} KDRV_GAL_FRAMEBUFFER_VISIBILITY_LIST_INFO_T;


typedef struct {
	KADP_HAL_GAL_PIXEL_FORMAT_T pixelFormat;
    UINT16  maxWidth;           /**< window's max width */
    UINT16  maxHeight;          /**< window's max height */
    unsigned char bStereoscope;
    KADP_HAL_GAL_STEREOSCOPE_TYPE_T stereoscopeType; /**< This enumeration describes flags for stereoscope mode setting */
    UINT32 bVisibility;
    UINT32 bVsync;
	UINT32 palette_used_index;/* 0 --> no use 1--> used index table 1, ...*/
	SINT32 used_mouse;
    KADP_HAL_GAL_RECT_T  viewRect;   /**< viewRect region on the framebuffer */
    KADP_HAL_GAL_RECT_T  dispRect;   /**< dispRect region on the framebuffer */
	KADP_HAL_GAL_SURFACE_INFO_T pSurfaceList[MAX_SURFACE_IN_FRAMEBUFFER_NUMBER];
} KDRV_GAL_GLOBE_FRAMEBUFFER_INFO_T;

typedef struct {
	KADP_HAL_GAL_CURSOR_PROPERTY_INFO_T    cursor_info[MAX_FRAMEBUFFER_NUMBER];
	KADP_HAL_GAL_OSD_ROTATE_TYPE_T         rorate_type;
	KDRV_GAL_GLOBE_FRAMEBUFFER_INFO_T gFrameBuffer_data[MAX_FRAMEBUFFER_NUMBER];
} KDRV_GAL_GLOBE_GAL_INFO_T;
typedef struct {
	KADP_HAL_GAL_SUR_LINK_PALETTE_INFO_T    gSurLinkPal[MAX_SURFACE_LINK_PALETTE];
}KDRV_GAL_GLOBE_GAL_SUR_LINK_PALETTE_INFO_T;

#endif/*KADP_GDMA_HAL_GAL_EXPORT_USER_H_*/
