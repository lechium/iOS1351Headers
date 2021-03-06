//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRWatchConsuming-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface CompanionTestObject : NSObject <FRWatchConsuming>
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
}

+ (id)sharedObject;	// IMP=0x0000000100005844
- (void).cxx_destruct;	// IMP=0x0000000100006a00
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void)markWatchAnalyticsEvents:(id)arg1 asConsumedWithReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000068b8
- (void)fetchWatchAnalyticsEventsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001000067b8
- (void)consumeSeenArticleIdentifiers:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006590
- (void)markArticleIdentifiersAsSaved:(id)arg1 articleIdentifiersAsNotSaved:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100006120
- (void)setPreferredRefreshDates:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005f3c
- (void)setSavedArticleIdentifiers:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005db0
- (void)clearAllSeenArticleIdentifiersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005cbc
- (void)fetchHeadlineMetadataWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005a38
- (void)updateAndSyncHeadlinesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005974
- (id)init;	// IMP=0x00000001000058e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

