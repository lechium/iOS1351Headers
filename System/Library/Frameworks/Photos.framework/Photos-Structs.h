/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:05 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct CGImage* CGImageRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _NSZone* NSZoneRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct _xpc_type_s* xpc_type_sRef;

typedef struct atomic_flag {
	AB _Value;
} atomic_flag;

typedef struct FigPhotoDecompressionContainer* FigPhotoDecompressionContainerRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_PH9;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct {
	SCD_Struct_PH9 start;
	SCD_Struct_PH9 duration;
} SCD_Struct_PH11;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;

typedef struct options_bits {
	unsigned preserveFolderStructure : 1;
	unsigned hideProgress : 1;
	unsigned skipAlertWhenFinished : 1;
	unsigned referencedImport : 1;
	unsigned allowDuplicates : 1;
	unsigned skipDiskSpaceCheck : 1;
	unsigned deleteAfterImport : 1;
	unsigned metadataAddMode : 1;
	unsigned omitImportComplete : 1;
	unsigned allowUnsupported : 1;
	unsigned fileOperation : 3;
	unsigned importedBy : 8;
} options_bits;

typedef struct __CFString* CFStringRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_PH15;

typedef struct __CFArray* CFArrayRef;

