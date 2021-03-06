//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSXPCReunionSync-Protocol.h"

@class IDSDuetInterface, IDSUTunDeliveryController, IDSXPCConnection, NSString;

@interface IDSDXPCReunionSync : NSObject <IDSXPCReunionSync>
{
    NSString *_clientProcessName;	// 8 = 0x8
    IDSXPCConnection *_connection;	// 16 = 0x10
    IDSUTunDeliveryController *_utunDeliveryController;	// 24 = 0x18
    IDSDuetInterface *_duetInterface;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001001ab008
@property(retain, nonatomic) IDSDuetInterface *duetInterface; // @synthesize duetInterface=_duetInterface;
@property(retain, nonatomic) IDSUTunDeliveryController *utunDeliveryController; // @synthesize utunDeliveryController=_utunDeliveryController;
@property(retain, nonatomic) IDSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSString *clientProcessName; // @synthesize clientProcessName=_clientProcessName;
- (_Bool)_isEntitledForPreferInfraWiFiForServices:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001aabf4
- (void)_defaultPeerSetPreferInfraWiFi:(_Bool)arg1 services:(id)arg2;	// IMP=0x00000001001aab34
- (void)reunionSyncCompletedForServices:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001aa7b4
- (void)reunionSyncStartedForServices:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001aa434
- (id)initWithConnection:(id)arg1 clientProcessName:(id)arg2 UTunDeliveryController:(id)arg3 duetInterface:(id)arg4;	// IMP=0x00000001001aa26c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

