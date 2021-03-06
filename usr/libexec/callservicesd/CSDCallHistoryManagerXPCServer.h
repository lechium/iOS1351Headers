//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSDCallHistoryManagerDelegate-Protocol.h"
#import "TUCallHistoryManagerXPCServer-Protocol.h"

@class CSDCallHistoryManager, CSDClientManager, NSString;
@protocol OS_dispatch_queue;

@interface CSDCallHistoryManagerXPCServer : NSObject <CSDCallHistoryManagerDelegate, TUCallHistoryManagerXPCServer>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CSDCallHistoryManager *_callHistoryManager;	// 16 = 0x10
    CSDClientManager *_clientManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100080c6c
@property(readonly, nonatomic) CSDClientManager *clientManager; // @synthesize clientManager=_clientManager;
@property(readonly, nonatomic) CSDCallHistoryManager *callHistoryManager; // @synthesize callHistoryManager=_callHistoryManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)unregisterClient:(id)arg1;	// IMP=0x0000000100080b54
- (void)registerClient:(id)arg1;	// IMP=0x0000000100080a54
- (oneway void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithOutgoingLocalParticipantUUID:(id)arg2;	// IMP=0x00000001000808b8
- (void)invalidate;	// IMP=0x00000001000807f8
- (id)initWithManager:(id)arg1;	// IMP=0x0000000100080358

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

