//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDPersonalizationServiceProtocol-Protocol.h"

@class NSString;

@interface PersonalizationService : NSObject <ASDPersonalizationServiceProtocol>
{
}

+ (id)defaultService;	// IMP=0x000000010015f3ec
- (id)_currentClient;	// IMP=0x0000000100160bf4
- (void)tasteProfileFeatureEnabledWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100160b88
- (void)setClusterMappings:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100160964
- (void)setClusterMapping:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010016070c
- (void)sendMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010016055c
- (void)resetMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001603ac
- (void)resetActorIDWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001601fc
- (void)reloadClusterMappingsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010016004c
- (void)reportAppEvent:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010015fe80
- (void)recordLaunchesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010015fcd0
- (void)recordMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010015fb20
- (void)getAppEventsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010015f970
- (void)getClusterMappingsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010015f7c0
- (void)getGroupingToken:(CDUnknownBlockType)arg1;	// IMP=0x000000010015f610
- (void)flushMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010015f458

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

