//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"
#import "PSDSchedulerObserver-Protocol.h"

@class NSMutableDictionary, NSString, PSDSchedulerAWDSessionState;
@protocol OS_dispatch_queue;

@interface PSDSchedulerAWDLogger : NSObject <NSSecureCoding, PSDSchedulerObserver>
{
    NSMutableDictionary *_cumulativeStatisticsCollections;	// 8 = 0x8
    NSMutableDictionary *_segmentStartingStatisticsCollections;	// 16 = 0x10
    PSDSchedulerAWDSessionState *_sessionState;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (id)defaultLogger;	// IMP=0x0000000100008e04
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100008dfc
- (void).cxx_destruct;	// IMP=0x000000010000bb5c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) PSDSchedulerAWDSessionState *sessionState; // @synthesize sessionState=_sessionState;
- (void)accumulateStatisticsForSegment:(id)arg1;	// IMP=0x000000010000b640
- (void)bookmarkCurrentStatistics:(id)arg1;	// IMP=0x000000010000b490
- (id)AWDKeyForActivityIdentifier:(id)arg1;	// IMP=0x000000010000b458
- (void)logAWDDurationsForSync;	// IMP=0x0000000100009f74
- (void)clearSessionState;	// IMP=0x0000000100009e08
- (void)saveSessionState;	// IMP=0x0000000100009cd0
- (void)scheduler:(id)arg1 didUpdateSyncSessionWithUpdate:(id)arg2;	// IMP=0x0000000100009754
- (void)scheduler:(id)arg1 willStartSyncSession:(id)arg2;	// IMP=0x00000001000095f8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100009574
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000091ec
- (id)init;	// IMP=0x0000000100009194
- (void)initialize;	// IMP=0x00000001000090c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

