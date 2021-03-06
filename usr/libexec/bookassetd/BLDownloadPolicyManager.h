//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BLDatabaseManager, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BLDownloadPolicyManager : NSObject
{
    BLDatabaseManager *_databaseManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSMutableDictionary *_policies;	// 24 = 0x18
    NSMutableDictionary *_sizeLimitOverrides;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010001e698
@property(retain, nonatomic) NSMutableDictionary *sizeLimitOverrides; // @synthesize sizeLimitOverrides=_sizeLimitOverrides;
@property(retain, nonatomic) NSMutableDictionary *policies; // @synthesize policies=_policies;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) __weak BLDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
- (long long)_sizeLimitForPolicy:(id)arg1 networkType:(long long)arg2;	// IMP=0x000000010001e328
- (_Bool)_isPolicyRuleSatisfied:(id)arg1 forPolicy:(id)arg2 networkType:(long long)arg3;	// IMP=0x000000010001e2a8
- (_Bool)_isPolicyRuleNetworkTypeAllowed:(id)arg1 networkType:(long long)arg2;	// IMP=0x000000010001e204
- (_Bool)_isPolicyRuleCellularDataAllowed:(id)arg1 networkType:(long long)arg2;	// IMP=0x000000010001dfe4
- (void)dq_initializePolicy;	// IMP=0x000000010001dcec
- (void)dq_addPolicy:(id)arg1;	// IMP=0x000000010001db98
- (void)setOverrideDownloadSizeLimit:(long long)arg1 forDownloadIdentifier:(id)arg2;	// IMP=0x000000010001da58
- (void)removeOverrideDownloadSizeLimitForDownloadIdentifier:(id)arg1;	// IMP=0x000000010001d92c
- (id)overrideDownloadSizeLimitForDownloadIdentifier:(id)arg1;	// IMP=0x000000010001d7b0
- (long long)downloadSizeLimitForPolicyWithID:(id)arg1 networkType:(long long)arg2;	// IMP=0x000000010001d604
- (long long)downloadSizeLimitForPolicyWithID:(id)arg1;	// IMP=0x000000010001d570
- (id)downloadPolicyForID:(id)arg1;	// IMP=0x000000010001d3c0
- (_Bool)addDownloadPolicy:(id)arg1 withPolicyID:(id)arg2;	// IMP=0x000000010001ce10
- (id)initWithDatabaseManager:(id)arg1;	// IMP=0x000000010001cce0

@end

