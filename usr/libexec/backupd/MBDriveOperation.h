//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MBDriveOperation : NSObject
{
    int _type;	// 8 = 0x8
    int _count;	// 12 = 0xc
    long long _size;	// 16 = 0x10
    double _duration;	// 24 = 0x18
}

+ (id)operationWithType:(int)arg1 count:(long long)arg2 size:(long long)arg3 duration:(double)arg4;	// IMP=0x00000001000ea484
+ (id)operationWithType:(int)arg1 count:(long long)arg2 duration:(double)arg3;	// IMP=0x00000001000ea430
+ (id)operationWithType:(int)arg1 duration:(double)arg2;	// IMP=0x00000001000ea3e0
+ (id)operationToC0pyItemWithCount:(long long)arg1 size:(long long)arg2;	// IMP=0x00000001000ea390
+ (id)operationToRemoveItemsWithCount:(long long)arg1;	// IMP=0x00000001000ea358
+ (id)operationToRemoveItem;	// IMP=0x00000001000ea340
+ (id)operationToMoveItemsWithCount:(long long)arg1;	// IMP=0x00000001000ea308
+ (id)operationToMoveItem;	// IMP=0x00000001000ea2f0
+ (id)operationToDownloadFilesWithCount:(long long)arg1 size:(long long)arg2;	// IMP=0x00000001000ea2a0
+ (id)operationToDownloadFileWithSize:(long long)arg1;	// IMP=0x00000001000ea284
+ (id)operationToUploadFilesWithCount:(long long)arg1 size:(long long)arg2;	// IMP=0x00000001000ea234
+ (id)operationToUploadFileWithSize:(long long)arg1;	// IMP=0x00000001000ea218
+ (id)operationForContentsOfDirectory;	// IMP=0x00000001000ea1f8
+ (id)operationToCreateDirectory;	// IMP=0x00000001000ea1d8
+ (id)stringForType:(int)arg1;	// IMP=0x00000001000ea15c
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) long long size; // @synthesize size=_size;
@property(readonly, nonatomic) int count; // @synthesize count=_count;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (id)description;	// IMP=0x00000001000ea6bc
- (id)initWithType:(int)arg1 count:(long long)arg2 size:(long long)arg3 duration:(double)arg4;	// IMP=0x00000001000ea4e4

@end

