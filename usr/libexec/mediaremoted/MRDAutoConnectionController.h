//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRDNowPlayingServer, NSArray, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface MRDAutoConnectionController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    MRDNowPlayingServer *_nowPlayingServer;	// 16 = 0x10
    NSMutableDictionary *_pendingReconSessions;	// 24 = 0x18
    NSMutableDictionary *_pendingReconSessionCompletions;	// 32 = 0x20
    NSMutableSet *_connectedEndpoints;	// 40 = 0x28
    NSMutableDictionary *_connectingEndpoints;	// 48 = 0x30
    NSMutableDictionary *_pendingConnectingEndpointCompletions;	// 56 = 0x38
}

+ (id)sharedConnectionController;	// IMP=0x00000001000797b0
- (void).cxx_destruct;	// IMP=0x000000010007d1b0
- (void)_handleActiveSystemEndpointDidChangeNotification:(id)arg1;	// IMP=0x000000010007d048
- (void)_handleEndpointDidInvalidateNotification:(id)arg1;	// IMP=0x000000010007cf08
- (void)_onSerialQueue_removeConnectedEndpoint:(id)arg1;	// IMP=0x000000010007cc78
- (void)_onSerialQueue_addConnectedEndpoint:(id)arg1;	// IMP=0x000000010007c850
- (void)_onSerialQueue_connectToEndpoint:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010007bb9c
- (void)_onSerialQueue_discoverOutputDevice:(id)arg1 connect:(_Bool)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010007b348
- (void)_discoverOutputDevice:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010007b230
- (void)_connectToOutputDevice:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010007b118
- (void)_connectToAllOutputDevicesForReason:(id)arg1 comparator:(CDUnknownBlockType)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010007a88c
- (void)discoverOutputDevice:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010007a664
- (void)connectToOutputDevice:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010007a43c
- (void)connectToAllOutputDevicesForReason:(id)arg1 comparator:(CDUnknownBlockType)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010007a1b4
@property(readonly, nonatomic) NSArray *autoConnectedEndpoints;
@property(readonly, nonatomic) NSArray *autoConnectingEndpoints;
- (id)_init;	// IMP=0x0000000100079828

@end

