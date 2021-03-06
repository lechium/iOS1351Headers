//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BTXpcSession.h"

@class CHManager, NSArray, TUCallProviderManager;

@interface XpcSession : BTXpcSession
{
    CHManager *_chManager;	// 8 = 0x8
    TUCallProviderManager *_tuCallProviderManager;	// 16 = 0x10
    NSArray *_chRecentCalls;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100006640
@property(retain, nonatomic) NSArray *chRecentCalls; // @synthesize chRecentCalls=_chRecentCalls;
@property(readonly, nonatomic) TUCallProviderManager *tuCallProviderManager; // @synthesize tuCallProviderManager=_tuCallProviderManager;
@property(readonly, nonatomic) CHManager *chManager; // @synthesize chManager=_chManager;
- (const char *)_callStatusForCall:(id)arg1;	// IMP=0x000000010000655c
- (id)_predicateForType:(id)arg1;	// IMP=0x0000000100006108
- (void)_handleGetRecentCallMsg:(id)arg1 reply:(id)arg2;	// IMP=0x0000000100005da0
- (void)_handleGetSizeMsg:(id)arg1 reply:(id)arg2;	// IMP=0x0000000100005d24
- (void)_handleOpenMsg:(id)arg1 reply:(id)arg2;	// IMP=0x0000000100005b3c
- (void)handleMsg:(id)arg1;	// IMP=0x0000000100005a00
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001000058f8

@end

