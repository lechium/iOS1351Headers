//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface SUBPairedUnlockManager : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 8 = 0x8
}

+ (int)lockState;	// IMP=0x000000010000fc44
- (void).cxx_destruct;	// IMP=0x000000010000fc4c
- (void)stageStashBagWithManifest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000f614
- (void)supportsPairedUnlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010000f34c
- (id)init;	// IMP=0x000000010000f2c4

@end
