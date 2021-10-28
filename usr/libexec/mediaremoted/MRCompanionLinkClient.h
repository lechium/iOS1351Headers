//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, RPCompanionLinkClient;

@interface MRCompanionLinkClient : NSObject
{
    NSMutableSet *_pendingRegisteredEvents;	// 8 = 0x8
    NSMutableSet *_registeredEvents;	// 16 = 0x10
    NSMutableArray *_pendingEvents;	// 24 = 0x18
    NSMutableSet *_pendingRegisteredRequests;	// 32 = 0x20
    NSMutableSet *_registeredRequests;	// 40 = 0x28
    NSMutableArray *_pendingRequests;	// 48 = 0x30
    RPCompanionLinkClient *_connection;	// 56 = 0x38
    NSMutableDictionary *_eventCallbacks;	// 64 = 0x40
    NSMutableDictionary *_requestCallbacks;	// 72 = 0x48
}

+ (void)rapportCompanionLinkClient:(CDUnknownBlockType)arg1;	// IMP=0x0000000100097f0c
+ (id)sharedIDSCompanionLinkClient;	// IMP=0x0000000100097e90
+ (id)sharedCompanionLinkClient;	// IMP=0x0000000100097e14
- (void).cxx_destruct;	// IMP=0x000000010009be90
@property(retain, nonatomic) NSMutableDictionary *requestCallbacks; // @synthesize requestCallbacks=_requestCallbacks;
@property(retain, nonatomic) NSMutableDictionary *eventCallbacks; // @synthesize eventCallbacks=_eventCallbacks;
@property(retain, nonatomic) RPCompanionLinkClient *connection; // @synthesize connection=_connection;
- (id)_resolveEventID:(id)arg1;	// IMP=0x000000010009bdfc
- (void)_handleRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 response:(CDUnknownBlockType)arg4;	// IMP=0x000000010009b6e0
- (void)_handleEventID:(id)arg1 event:(id)arg2 options:(id)arg3;	// IMP=0x000000010009b0a8
- (void)_enqueueRequest:(id)arg1 userInfo:(id)arg2 destination:(id)arg3 uid:(id)arg4 date:(id)arg5 response:(CDUnknownBlockType)arg6;	// IMP=0x000000010009ae74
- (void)_sendRequest:(id)arg1 userInfo:(id)arg2 destination:(id)arg3 uid:(id)arg4 date:(id)arg5 response:(CDUnknownBlockType)arg6;	// IMP=0x000000010009aae8
- (void)_enqueueEvent:(id)arg1 userInfo:(id)arg2 destination:(id)arg3 uid:(id)arg4;	// IMP=0x000000010009a914
- (void)_sendEvent:(id)arg1 userInfo:(id)arg2 destination:(id)arg3 uid:(id)arg4;	// IMP=0x000000010009a57c
- (void)sendRequest:(id)arg1 destination:(id)arg2 userInfo:(id)arg3 timeout:(double)arg4 response:(CDUnknownBlockType)arg5;	// IMP=0x0000000100099ff4
- (void)sendEvent:(id)arg1 destination:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000100099e9c
- (void)sendEventToCompanion:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000100099e40
- (void)sendEventToHome:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000100099de4
- (void)_registerRequest:(id)arg1;	// IMP=0x0000000100099af8
- (void)_registerEvent:(id)arg1;	// IMP=0x00000001000998fc
- (void)registerRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100099778
- (void)registerEvent:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000001000995d4
- (id)nameForUID:(id)arg1;	// IMP=0x00000001000992b4
- (id)rapportUIDForDeviceUID:(id)arg1;	// IMP=0x0000000100098e30
- (id)deviceUIDForRapportUID:(id)arg1;	// IMP=0x00000001000989ac
- (id)initWithOptions:(int)arg1;	// IMP=0x00000001000982c8

@end
