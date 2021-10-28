//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface ADSyncFlagManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableSet *_cachedFlags;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x00000001000bf94c
- (void).cxx_destruct;	// IMP=0x00000001000c04fc
- (void)_clearSyncNeededFlagsForKeys:(id)arg1;	// IMP=0x00000001000c02c8
- (void)_setSyncNeededFlagsForKeys:(id)arg1;	// IMP=0x00000001000c0014
- (void)_fetchSyncFlagsOnDisk;	// IMP=0x00000001000bfda8
- (void)clearAllFlags;	// IMP=0x00000001000bfce0
- (void)clearFlagsForKeys:(id)arg1;	// IMP=0x00000001000bfbf8
- (void)setSyncNeededFlagForKeys:(id)arg1;	// IMP=0x00000001000bfb10
- (void)fetchKeysThatNeedToSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bfa30
- (id)init;	// IMP=0x00000001000bf9b8

@end
