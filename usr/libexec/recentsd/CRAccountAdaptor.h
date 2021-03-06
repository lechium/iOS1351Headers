//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CRAccountAdaptor-Protocol.h"

@class ACAccountStore, CRMailAccountAnalyzer, NSString, NSUserDefaults;
@protocol CNCancelable, CRAccountAdaptorDelegate;

@interface CRAccountAdaptor : NSObject <CRAccountAdaptor>
{
    CRMailAccountAnalyzer *_analyzer;	// 8 = 0x8
    id <CNCancelable> _mailAccountListener;	// 16 = 0x10
    id <CNCancelable> _appleAccountListener;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    NSUserDefaults *_userDefaults;	// 40 = 0x28
    ACAccountStore *_accountStore;	// 48 = 0x30
    NSString *_iCloudAccountPersonID;	// 56 = 0x38
    _Bool _iCloudAccountWasLoggedIn;	// 64 = 0x40
    id <CRAccountAdaptorDelegate> _delegate;	// 72 = 0x48
}

@property(nonatomic) id <CRAccountAdaptorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)refresh;	// IMP=0x0000000100019b18
- (void)_delegateAccountChanges;	// IMP=0x000000010001992c
- (_Bool)isUsingiCloud;	// IMP=0x00000001000198fc
- (id)_primaryiCloudAccountPersonID;	// IMP=0x00000001000198a0
- (void)_resetCachedAccountInfo;	// IMP=0x0000000100019818
- (id)_analyzeMailAccounts;	// IMP=0x0000000100019764
- (void)_runWithAnalyzerLock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000196d4
- (id)senderEmailAddresses;	// IMP=0x0000000100019614
- (_Bool)isSyncingDisabledForAccountWithAddress:(id)arg1;	// IMP=0x0000000100019528
- (void)dealloc;	// IMP=0x0000000100019498
- (id)initWithUserDefaults:(id)arg1 accountStore:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000100019218
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000001000191b0
- (id)init;	// IMP=0x0000000100019120

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

