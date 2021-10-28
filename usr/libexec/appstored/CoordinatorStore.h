//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PIDMapTable;

@interface CoordinatorStore : NSObject
{
    PIDMapTable *_map;	// 8 = 0x8
    NSMutableDictionary *_uniqueIDToAgent;	// 16 = 0x10
}

+ (id)defaultStore;	// IMP=0x0000000100299e10
- (void).cxx_destruct;	// IMP=0x000000010029b23c
- (void)_removeCoordinatorForJobID:(long long)arg1;	// IMP=0x000000010029af5c
- (id)_agentForCoordinator:(id)arg1;	// IMP=0x000000010029aea0
- (void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x000000010029abec
- (void)coordinatorDidCompleteSuccessfully:(id)arg1;	// IMP=0x000000010029a7b8
- (id)coordinatorForJobID:(long long)arg1;	// IMP=0x000000010029a744
- (_Bool)cancelCoordinatorForJobID:(long long)arg1 bundleID:(id)arg2 withReason:(id)arg3;	// IMP=0x0000000100299f0c
- (id)init;	// IMP=0x0000000100299e7c

@end
