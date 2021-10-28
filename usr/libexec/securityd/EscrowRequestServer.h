//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EscrowRequestXPCProtocol-Protocol.h"
#import "SecEscrowRequestable-Protocol.h"

@class EscrowRequestController, NSString;

__attribute__((visibility("hidden")))
@interface EscrowRequestServer : NSObject <EscrowRequestXPCProtocol, SecEscrowRequestable>
{
    EscrowRequestController *_controller;	// 8 = 0x8
}

+ (id)request:(id *)arg1;	// IMP=0x00000001000392e8
+ (id)server;	// IMP=0x00000001000392a8
- (void).cxx_destruct;	// IMP=0x000000010003904c
@property(retain) EscrowRequestController *controller; // @synthesize controller=_controller;
- (void)setupAnalytics;	// IMP=0x0000000100038fcc
- (void)storePrerecordsInEscrow:(CDUnknownBlockType)arg1;	// IMP=0x0000000100038f04
- (void)resetAllRequests:(CDUnknownBlockType)arg1;	// IMP=0x0000000100038b50
- (void)fetchRequestStatuses:(CDUnknownBlockType)arg1;	// IMP=0x0000000100038694
- (void)triggerEscrowUpdate:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100038578
- (void)fetchRequestWaitingOnPasscode:(CDUnknownBlockType)arg1;	// IMP=0x00000001000380f4
- (void)fetchPrerecord:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100037e70
- (void)cachePrerecord:(id)arg1 serializedPrerecord:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100037b70
- (_Bool)pendingEscrowUpload:(id *)arg1;	// IMP=0x0000000100037844
- (id)fetchStatuses:(id *)arg1;	// IMP=0x000000010003771c
- (_Bool)triggerEscrowUpdate:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000375d0
- (id)initWithLockStateTracker:(id)arg1;	// IMP=0x0000000100037544

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
