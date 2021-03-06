//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PLPTPAssetHandle, PTPDataSource, PTPObjectInfoDataset;

@interface PTPFile : NSObject
{
    unsigned int _storageID;	// 8 = 0x8
    unsigned int _objectHandle;	// 12 = 0xc
    PLPTPAssetHandle *_plAssetHandle;	// 16 = 0x10
    PTPDataSource *_dataSource;	// 24 = 0x18
    PTPObjectInfoDataset *_objectInfoDataset;	// 32 = 0x20
    unsigned long long _serialNumber;	// 40 = 0x28
    struct timespec _captureTimeSpec;	// 48 = 0x30
    long long _size;	// 64 = 0x40
    id _parent;	// 72 = 0x48
    NSString *_baseName;	// 80 = 0x50
    unsigned int _desiredOrientation;	// 88 = 0x58
    _Bool _irisAsset;	// 92 = 0x5c
    unsigned int _fourCharCode;	// 96 = 0x60
}

@property _Bool irisAsset; // @synthesize irisAsset=_irisAsset;
@property unsigned int fourCharCode; // @synthesize fourCharCode=_fourCharCode;
@property unsigned int desiredOrientation; // @synthesize desiredOrientation=_desiredOrientation;
@property(readonly, retain) PLPTPAssetHandle *plAssetHandle; // @synthesize plAssetHandle=_plAssetHandle;
@property(readonly, copy) NSString *baseName; // @synthesize baseName=_baseName;
@property id parent; // @synthesize parent=_parent;
@property long long size; // @synthesize size=_size;
@property struct timespec captureTimeSpec; // @synthesize captureTimeSpec=_captureTimeSpec;
@property unsigned long long serialNumber; // @synthesize serialNumber=_serialNumber;
@property unsigned int objectHandle; // @synthesize objectHandle=_objectHandle;
@property unsigned int storageID; // @synthesize storageID=_storageID;
- (void)dealloc;	// IMP=0x0000000100028114
- (id)dataSource;	// IMP=0x0000000100028084
- (id)metadata;	// IMP=0x0000000100027ed0
- (id)thumbnailForWidth:(unsigned int)arg1 compressedSize:(unsigned long long *)arg2;	// IMP=0x0000000100027c30
- (_Bool)hasThumbnail;	// IMP=0x0000000100027bdc
@property(readonly, copy) PTPObjectInfoDataset *objectInfoDataset;
- (void)assignPTPObjectFormatCode:(const char *)arg1;	// IMP=0x000000010002770c
- (id)initWithPLPTPAsset:(id)arg1 andParent:(id)arg2;	// IMP=0x0000000100026ff0

@end

