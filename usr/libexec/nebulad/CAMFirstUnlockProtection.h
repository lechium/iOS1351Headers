//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CAMFirstUnlockProtection : NSObject
{
    _Bool _isLocked;	// 8 = 0x8
    NSMutableArray *_pendingBlocks;	// 16 = 0x10
    _Bool _isWatchingForUnlock;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000100002ae4
- (void).cxx_destruct;	// IMP=0x0000000100003314
- (_Bool)checkFirstUnlock;	// IMP=0x0000000100003128
- (void)performAfterFirstUnlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100002cf0
- (void)_performPendingBlocksAfterFirstUnlock;	// IMP=0x0000000100002bbc
- (id)init;	// IMP=0x0000000100002b50

@end

