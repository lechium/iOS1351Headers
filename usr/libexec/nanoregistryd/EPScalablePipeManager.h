//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EPResource.h"

#import "CBScalablePipeManagerDelegate-Protocol.h"

@class CBScalablePipeManager, EPScalablePipeManagerManager, NSString;

@interface EPScalablePipeManager : EPResource <CBScalablePipeManagerDelegate>
{
    _Bool _isConnected;	// 8 = 0x8
}

@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
- (void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;	// IMP=0x00000001000c20c0
- (void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;	// IMP=0x00000001000c1f18
- (void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;	// IMP=0x00000001000c1d88
- (void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;	// IMP=0x00000001000c1c04
- (void)scalablePipeManagerDidUpdateState:(id)arg1;	// IMP=0x00000001000c1a50
@property(readonly, nonatomic) CBScalablePipeManager *manager;
@property(readonly, nonatomic) EPScalablePipeManagerManager *managerManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

