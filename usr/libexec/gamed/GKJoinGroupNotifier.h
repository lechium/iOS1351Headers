//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKJoinGroup, NSError, NSLock, NSMutableArray;

@interface GKJoinGroupNotifier : NSObject
{
    GKJoinGroup *_group;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
    NSMutableArray *_updateQueue;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

@property(retain, nonatomic) NSMutableArray *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(retain) NSLock *lock; // @synthesize lock=_lock;
- (void)setResult:(CDUnknownBlockType)arg1 error:(id)arg2;	// IMP=0x000000010009f508
@property(retain) NSError *error; // @synthesize error=_error;
@property(nonatomic) GKJoinGroup *group; // @synthesize group=_group;
- (oneway void)release;	// IMP=0x000000010009f3d8
- (id)retain;	// IMP=0x000000010009f348
- (void)dealloc;	// IMP=0x000000010009f2e4
- (id)init;	// IMP=0x000000010009f27c

@end

