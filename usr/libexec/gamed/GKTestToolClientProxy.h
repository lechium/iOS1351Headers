//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKClientProxy.h"

@class GKGameInternal;

@interface GKTestToolClientProxy : GKClientProxy
{
    GKGameInternal *_testGame;	// 8 = 0x8
}

@property(retain, nonatomic) GKGameInternal *testGame; // @synthesize testGame=_testGame;
- (id)externalVersion;	// IMP=0x000000010012e50c
- (id)adamID;	// IMP=0x000000010012e4d0
- (id)bundleShortVersion;	// IMP=0x000000010012e484
- (id)bundleVersion;	// IMP=0x000000010012e448
- (id)bundleIdentifier;	// IMP=0x000000010012e40c
- (id)transportWithCredential:(id)arg1;	// IMP=0x000000010012e388
- (void)dealloc;	// IMP=0x000000010012e338
- (oneway void)setTestGame:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010012e018

@end
