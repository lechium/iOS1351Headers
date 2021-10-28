//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MFAccountsProvider;

@interface MFMailPurgeableStorage : NSObject
{
    int _previousUrgency;	// 8 = 0x8
    id <MFAccountsProvider> _accountsProvider;	// 16 = 0x10
    double _previousPurgeTime;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100096814
@property(nonatomic) int previousUrgency; // @synthesize previousUrgency=_previousUrgency;
@property(nonatomic) double previousPurgeTime; // @synthesize previousPurgeTime=_previousPurgeTime;
@property(retain, nonatomic) id <MFAccountsProvider> accountsProvider; // @synthesize accountsProvider=_accountsProvider;
- (long long)deleteBodiesForMessages:(id)arg1 inMailboxFileURL:(id)arg2;	// IMP=0x0000000100096414
- (long long)deleteAttachmentsForMessages:(id)arg1 inMailboxFileURL:(id)arg2;	// IMP=0x000000010009622c
- (void)_logAggDMetricsForSystemCondition:(id)arg1 isPeriodicPurge:(_Bool)arg2 iterationCount:(unsigned long long)arg3;	// IMP=0x000000010009618c
- (void)_batchEnumeratePurgeableMessagesWithUrgency:(int)arg1 isPeriodicPurge:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100095960
- (id)_periodicPurgeSystemCondition;	// IMP=0x00000001000958b8
- (id)_purgeableAccountsCriterion;	// IMP=0x0000000100095748
- (id)_startDateCriterionForPurgeableMessagesWithUrgency:(int)arg1 isPeriodicPurge:(_Bool)arg2;	// IMP=0x00000001000955c4
- (_Bool)_shouldUseStartDateCriterionWithUrgency:(int)arg1;	// IMP=0x0000000100095548
- (id)_criterionForPurgeableMessagesWithUrgency:(int)arg1 isPeriodicPurge:(_Bool)arg2;	// IMP=0x00000001000952b4
- (long long)purgeSpaceWithUrgency:(int)arg1 spaceTarget:(long long)arg2 isPeriodicPurge:(_Bool)arg3;	// IMP=0x0000000100094a2c
- (long long)nonPurgeableSpace;	// IMP=0x0000000100094088
- (long long)purgeableSpace;	// IMP=0x0000000100093b84
- (id)library;	// IMP=0x0000000100093b70
- (id)initWithAccountsProvider:(id)arg1;	// IMP=0x0000000100093ad8

@end
