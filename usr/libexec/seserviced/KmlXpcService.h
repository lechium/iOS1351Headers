//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "KmlManagerProtocol-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface KmlXpcService : NSObject <KmlManagerProtocol>
{
    int _deviceClass;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010003dbf8
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (oneway void)unregisterSharingTestHandlers;	// IMP=0x000000010003db64
- (oneway void)registerFriendSideSharingTestCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003da50
- (oneway void)registerFriendSideSharingTestInvitationHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003d93c
- (oneway void)registerOwnerSideInvitationRequestHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003d828
- (oneway void)registerOwnerSideSharingTestInvitations:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x000000010003d6dc
- (oneway void)queueManagementSession:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x000000010003d54c
- (oneway void)queueSharingSession:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x000000010003d3bc
- (oneway void)queueOwnerPairingSession:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x000000010003d0d4
- (oneway void)isSupported:(CDUnknownBlockType)arg1;	// IMP=0x000000010003cf98
- (_Bool)_isProductSupported;	// IMP=0x000000010003ce6c
- (id)init;	// IMP=0x000000010003ce10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
