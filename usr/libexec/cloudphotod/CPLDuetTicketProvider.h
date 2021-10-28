//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDAttribute, NSString;

@interface CPLDuetTicketProvider : NSObject
{
    NSString *_clientBundlerIdentifier;	// 8 = 0x8
    CDAttribute *_mandatoryAttribute;	// 16 = 0x10
    CDAttribute *_discretionaryAttribute;	// 24 = 0x18
    unsigned long long _significantWorkRetainCount;	// 32 = 0x20
}

+ (id)duetStatuses;	// IMP=0x00000001000a1acc
+ (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a175c
+ (void)setShouldOverride:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;	// IMP=0x00000001000a163c
+ (void)popSignificantWorkIsPending;	// IMP=0x00000001000a1560
+ (void)pushSignificantWorkIsPending;	// IMP=0x00000001000a1484
+ (id)delegate;	// IMP=0x00000001000a1468
+ (void)setDelegate:(id)arg1;	// IMP=0x00000001000a1458
- (void).cxx_destruct;	// IMP=0x00000001000a29d0
@property(nonatomic) unsigned long long significantWorkRetainCount; // @synthesize significantWorkRetainCount=_significantWorkRetainCount;
@property(readonly, nonatomic) CDAttribute *discretionaryAttribute; // @synthesize discretionaryAttribute=_discretionaryAttribute;
@property(readonly, nonatomic) CDAttribute *mandatoryAttribute; // @synthesize mandatoryAttribute=_mandatoryAttribute;
@property(readonly, nonatomic) NSString *clientBundlerIdentifier; // @synthesize clientBundlerIdentifier=_clientBundlerIdentifier;
- (void)setShouldOverride:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;	// IMP=0x00000001000a2708
- (void)overrideHasSignificantWork:(_Bool)arg1;	// IMP=0x00000001000a25cc
- (_Bool)hasSignificantWork;	// IMP=0x00000001000a2574
- (_Bool)isBlocked;	// IMP=0x00000001000a251c
- (void)_setupCallbacks;	// IMP=0x00000001000a2230
- (id)_significantWorkKeyPath;	// IMP=0x00000001000a2214
- (id)_isBlockedKeyPath;	// IMP=0x00000001000a21f8
- (id)_budgetOverrideKeyPath;	// IMP=0x00000001000a21dc
- (id)duetStatuses;	// IMP=0x00000001000a1e9c
- (id)_blockedReasonStatus;	// IMP=0x00000001000a1d50
- (unsigned long long)_blockedReason;	// IMP=0x00000001000a1ccc
- (_Bool)_boolValueForDuetKeyPath:(id)arg1;	// IMP=0x00000001000a1c78
- (id)initWithClientBundlerIdentifier:(id)arg1;	// IMP=0x00000001000a1bcc

@end
