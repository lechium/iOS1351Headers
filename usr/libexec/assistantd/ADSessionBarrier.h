//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SiriCoreSessionObject-Protocol.h"
#import "SiriCoreThunking-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface ADSessionBarrier : NSObject <SiriCoreSessionObject, SiriCoreThunking>
{
    CDUnknownBlockType _thunkBlock;	// 8 = 0x8
    CDUnknownBlockType _barrierBlock;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_barrierQueue;	// 24 = 0x18
    NSString *aceId;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010018525c
@property(copy, nonatomic) NSString *aceId; // @synthesize aceId;
- (_Bool)siriCore_supportedByLocalSession;	// IMP=0x0000000100185240
- (void)siriCore_setSessionRequestId:(id)arg1;	// IMP=0x000000010018523c
- (id)siriCore_requestId;	// IMP=0x0000000100185234
- (id)siriCore_serializedAceDataError:(id *)arg1;	// IMP=0x000000010018522c
- (void)siriCore_logDiagnostics;	// IMP=0x0000000100185228
- (_Bool)siriCore_isProvisional;	// IMP=0x0000000100185220
- (_Bool)siriCore_isRestartable;	// IMP=0x0000000100185218
- (_Bool)siriCore_isRetryable;	// IMP=0x0000000100185210
- (_Bool)siriCore_bufferingAllowedDuringActiveSession;	// IMP=0x0000000100185208
@property(copy, nonatomic) NSString *refId;
- (void)siriCore_invokeThunk;	// IMP=0x00000001001851e4
- (void)barrierResultReturnedWithSuccess:(_Bool)arg1;	// IMP=0x0000000100185134
- (void)dealloc;	// IMP=0x00000001001850e0
- (id)initWithThunk:(CDUnknownBlockType)arg1 barrier:(CDUnknownBlockType)arg2;	// IMP=0x0000000100185014

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
