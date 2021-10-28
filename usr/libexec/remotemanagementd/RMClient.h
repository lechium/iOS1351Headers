//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RMConduitDelegate-Protocol.h"
#import "RMStatusEngineDelegate-Protocol.h"

@class NSConditionLock, NSOperationQueue, NSString, RMActivationEngine, RMCommandEngine, RMStatusEngine;
@protocol RMClientDelegate, RMConduit;

@interface RMClient : NSObject <RMConduitDelegate, RMStatusEngineDelegate>
{
    NSObject *_needsSyncingLock;	// 8 = 0x8
    NSConditionLock *_syncLock;	// 16 = 0x10
    _Bool _needsSyncing;	// 24 = 0x18
    id <RMClientDelegate> _delegate;	// 32 = 0x20
    NSString *_managementSourceIdentifier;	// 40 = 0x28
    id <RMConduit> _conduit;	// 48 = 0x30
    RMCommandEngine *_commandEngine;	// 56 = 0x38
    RMActivationEngine *_activationEngine;	// 64 = 0x40
    RMStatusEngine *_statusEngine;	// 72 = 0x48
    NSOperationQueue *_operationQueue;	// 80 = 0x50
}

+ (id)_makeConduitWithManagementSourceObjectID:(id)arg1 inContext:(id)arg2;	// IMP=0x000000010000ced4
- (void).cxx_destruct;	// IMP=0x00000001000105b4
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) RMStatusEngine *statusEngine; // @synthesize statusEngine=_statusEngine;
@property(retain, nonatomic) RMActivationEngine *activationEngine; // @synthesize activationEngine=_activationEngine;
@property(retain, nonatomic) RMCommandEngine *commandEngine; // @synthesize commandEngine=_commandEngine;
@property(retain, nonatomic) id <RMConduit> conduit; // @synthesize conduit=_conduit;
@property(readonly, nonatomic) NSString *managementSourceIdentifier; // @synthesize managementSourceIdentifier=_managementSourceIdentifier;
@property(nonatomic) __weak id <RMClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_syncIfNeeded;	// IMP=0x0000000100010454
- (void)_setNeedsSyncing:(_Bool)arg1;	// IMP=0x00000001000101b0
- (void)statusEngineHasUnacknowledgedSubscription:(id)arg1;	// IMP=0x0000000100010140
- (void)conduitNeedsToSendStatusForKeyPaths:(id)arg1;	// IMP=0x000000010001007c
- (void)conduitNeedsToSync:(id)arg1;	// IMP=0x000000010001000c
- (void)_processConduitErrorState:(short)arg1;	// IMP=0x000000010000ff34
- (void)_handleConduitError;	// IMP=0x000000010000fe88
- (_Bool)_haltSyncing;	// IMP=0x000000010000fe34
- (void)_sendStatusQueryResultIfNeeded:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000fbf4
- (void)sendStatusForSubscriptionsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000f908
- (id)queryForStatusSubscriptionsWithIdentifiers:(id)arg1;	// IMP=0x000000010000f560
- (void)sendStatusData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000f1c8
- (void)_syncConduitOnlyIfNeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000edcc
- (void)_syncOnlyIfNeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e044
- (void)syncWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000df98
- (void)unenrollWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000dd64
- (void)reenrollWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d9b4
- (void)enrollWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d53c
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d170
- (id)initWithConduit:(id)arg1 commandEngine:(id)arg2 activationEngine:(id)arg3 statusEngine:(id)arg4 managementSourceIdentifier:(id)arg5;	// IMP=0x000000010000ccf4
- (id)initWithManagementSourceObjectID:(id)arg1 managementSourceIdentifier:(id)arg2 statusQuerier:(id)arg3 persistentContainer:(id)arg4;	// IMP=0x000000010000ca44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
