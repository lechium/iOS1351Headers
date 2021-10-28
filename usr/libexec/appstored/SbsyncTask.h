//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

#import "AMSURLProtocolDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class ACAccount, AMSURLSession, NSNumber, NSString;

@interface SbsyncTask : Task <NSURLSessionDelegate, AMSURLProtocolDelegate>
{
    _Bool _displayingDialog;	// 8 = 0x8
    long long _syncType;	// 16 = 0x10
    long long _initialSubscriptionStatus;	// 24 = 0x18
    _Bool _userInitiated;	// 32 = 0x20
    ACAccount *_account;	// 40 = 0x28
    NSString *_logUUID;	// 48 = 0x30
    double _timeout;	// 56 = 0x38
    long long _subscriptionStatus;	// 64 = 0x40
    NSNumber *_subscriptionDuration;	// 72 = 0x48
    double _startTime;	// 80 = 0x50
    AMSURLSession *_urlSession;	// 88 = 0x58
}

+ (id)_subscriptionStatusFromFPSubscriptionInfoList:(struct FPSubscriptionInfo_ *)arg1 subscriptionInfoListLength:(unsigned int)arg2;	// IMP=0x00000001000cf8b0
+ (id)_subscriptionStatusReturningError:(id *)arg1;	// IMP=0x00000001000cf740
+ (long long)_subscriptionStatusForAccountID:(id)arg1 dictionary:(id)arg2 returningError:(id *)arg3;	// IMP=0x00000001000cf6ac
+ (_Bool)_importSubscriptionKeyBagData:(id)arg1 accountID:(id)arg2 logKey:(id)arg3 subscriptionStatus:(long long *)arg4 returningError:(id *)arg5;	// IMP=0x00000001000cf118
+ (id)sbsyncDataForAccountID:(id)arg1 sbsyncType:(long long)arg2 logKey:(id)arg3 returningError:(id *)arg4;	// IMP=0x00000001000ceacc
+ (id)sbsyncDataForAccountID:(id)arg1 sbsyncType:(long long)arg2 returningError:(id *)arg3;	// IMP=0x00000001000cea54
+ (long long)subscriptionStatusForAccountID:(id)arg1 returningError:(id *)arg2;	// IMP=0x00000001000ce9c4
+ (_Bool)importSubscriptionKeyBagData:(id)arg1 subscriptionStatus:(long long *)arg2 returningError:(id *)arg3;	// IMP=0x00000001000ce8d0
- (void).cxx_destruct;	// IMP=0x00000001000cfa7c
@property(retain, nonatomic) AMSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic, getter=isUserInitiated) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(copy, nonatomic) NSNumber *subscriptionDuration; // @synthesize subscriptionDuration=_subscriptionDuration;
@property(readonly, nonatomic) long long subscriptionStatus; // @synthesize subscriptionStatus=_subscriptionStatus;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *logUUID; // @synthesize logUUID=_logUUID;
@property(copy, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_requestURL:(id *)arg1;	// IMP=0x00000001000cf5f0
- (id)_newBaseRequestBodyDictionaryWithError:(id *)arg1;	// IMP=0x00000001000cf418
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000ced94
- (void)main;	// IMP=0x00000001000cd754
- (id)initWithSyncType:(long long)arg1;	// IMP=0x00000001000cd5d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
