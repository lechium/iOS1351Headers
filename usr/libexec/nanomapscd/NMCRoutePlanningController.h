//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GEOTransitRouteUpdaterDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"
#import "NanoCompanionXPCRouting-Protocol.h"
#import "NanoRoutePlanningSessionObserver-Protocol.h"

@class GEOCompanionRouteContext, GEOTransitRouteUpdater, NMCRPCGizmoPreviewState, NSMutableSet, NSString, NSXPCListener, NanoRoutePlanningSession;
@protocol NanoRoutePlanningResponseSnapshot, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NMCRoutePlanningController : NSObject <NanoRoutePlanningSessionObserver, NanoCompanionXPCRouting, GEOTransitRouteUpdaterDelegate, NSXPCListenerDelegate>
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 16 = 0x10
    NSMutableSet *_connections;	// 24 = 0x18
    NanoRoutePlanningSession *_routePlanningSession;	// 32 = 0x20
    GEOCompanionRouteContext *_lastInvalidatedCompanionRouteContext;	// 40 = 0x28
    NMCRPCGizmoPreviewState *_gizmoPreviewState;	// 48 = 0x30
    _Bool _sendAllUpdates;	// 56 = 0x38
    GEOTransitRouteUpdater *_transitRouteUpdater;	// 64 = 0x40
    unsigned long long _currentSessionInputOrigin;	// 72 = 0x48
    id <NanoRoutePlanningResponseSnapshot> _snapshot;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010002b124
- (void)_notifyMapsRoutePlanningSessionDidInvalidate:(id)arg1;	// IMP=0x000000010002ae98
- (void)_notifyMapsRoutePlanningSessionDidFail:(id)arg1;	// IMP=0x000000010002ab84
- (void)_notifyMapsRoutePlanningSessionDidSelectRoute:(id)arg1;	// IMP=0x000000010002a858
- (void)_notifyMapsRoutePlanningSessionDidUpdateResponse:(id)arg1;	// IMP=0x000000010002a57c
- (void)_notifyMapsRoutePlanningSessionDidStartLoading:(id)arg1;	// IMP=0x000000010002a2e8
- (void)_checkinForRoutePlanningWithConnection:(id)arg1;	// IMP=0x000000010002a2e0
- (void)clearRoutePlanningWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100029ec8
- (void)updateRoutePlanningRequest:(id)arg1 withSelectedRouteID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100029e10
- (void)failRoutePlanningRequest:(id)arg1 withResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100029ab0
- (void)_updateRoutePlanningRequest:(id)arg1 withResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000296b0
- (void)updateRoutePlanningRequest:(id)arg1 withResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100029540
- (void)anticipateRoutePlanningRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000293f0
- (void)checkinForRoutePlanning;	// IMP=0x00000001000292fc
- (void)_enumerateMapsConnectionsUnderAssertionNamed:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100029274
- (void)_forgetConnection:(id)arg1 reason:(id)arg2;	// IMP=0x0000000100029150
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100028dac
- (void)_registerXPCRoutes;	// IMP=0x0000000100028cc4
- (id)_replyForMessage:(id)arg1 withSafetyWarning:(long long)arg2 error:(id)arg3;	// IMP=0x0000000100028b80
- (id)_messageForNoRoutesWithError:(id)arg1 routeContextData:(id)arg2;	// IMP=0x0000000100028a3c
- (id)_messageForRouteDetailsData:(id)arg1 index:(unsigned long long)arg2 count:(unsigned long long)arg3 routeContextData:(id)arg4;	// IMP=0x0000000100028874
- (void)_sendClearPreviewWithContext:(id)arg1;	// IMP=0x00000001000286cc
- (void)_sendRouteUpdates:(id)arg1 context:(id)arg2;	// IMP=0x00000001000283fc
- (void)_sendSelectedPreviewRouteIndex:(unsigned long long)arg1 context:(id)arg2;	// IMP=0x00000001000281c8
- (void)_sendPreviewRoutes:(id)arg1 error:(id)arg2 companionRouteContext:(id)arg3 includeSyntheticRoute:(_Bool)arg4;	// IMP=0x0000000100027b04
- (void)_notifyNanoMapsRoutePlanningSessionDidInvalidate:(id)arg1;	// IMP=0x0000000100027940
- (void)_notifyNanoMapsRoutePlanningSessionDidFail:(id)arg1;	// IMP=0x0000000100027604
- (void)_notifyNanoMapsRoutePlanningSessionDidSelectRoute:(id)arg1;	// IMP=0x00000001000272c4
- (void)_notifyNanoMapsRoutePlanningSession:(id)arg1 didReceiveRouteUpdatesForRoutes:(id)arg2;	// IMP=0x0000000100027004
- (void)_notifyNanoMapsRoutePlanningSessionDidUpdateResponse:(id)arg1;	// IMP=0x0000000100026cfc
- (void)_notifyNanoMapsRoutePlanningSessionDidStartLoading:(id)arg1;	// IMP=0x0000000100026afc
- (void)_handleIncomingMessage:(id)arg1;	// IMP=0x0000000100025224
- (void)_registerIDSMessageObservers;	// IMP=0x0000000100024eb8
- (void)_setCurrentSessionInputOrigin:(unsigned long long)arg1;	// IMP=0x0000000100024dd0
- (void)routePlanningSessionDidInvalidate:(id)arg1;	// IMP=0x0000000100024cb8
- (void)routePlanningSession:(id)arg1 didFailWithResponse:(id)arg2;	// IMP=0x0000000100024bd0
- (void)routePlanningSession:(id)arg1 didUpdateWithResponse:(id)arg2;	// IMP=0x00000001000249d4
- (void)routePlanningSession:(id)arg1 didStartLoadingWithRequest:(id)arg2;	// IMP=0x00000001000248f8
- (void)transitRouteUpdater:(id)arg1 didUpdateTransitRoutes:(id)arg2;	// IMP=0x00000001000243e4
- (void)_prepareTransitRouteUpdaterIfNeeded;	// IMP=0x0000000100023eb0
- (void)_clearLocally;	// IMP=0x0000000100023dec
- (void)clearLocally;	// IMP=0x0000000100023d20
- (void)_clearPreviewRoutesIfNeeded;	// IMP=0x0000000100023bd4
- (void)clearPreviewRoutesIfNeeded;	// IMP=0x0000000100023b08
- (void)_sendPreviewRoutesIfAvailable;	// IMP=0x00000001000238d8
- (void)sendPreviewRoutesIfAvailable;	// IMP=0x000000010002380c
- (void)_previewDirectionsFromOrigin:(id)arg1 toDestination:(id)arg2 viaTransportType:(unsigned long long)arg3 departureDate:(id)arg4 arrivalDate:(id)arg5 routeContext:(id)arg6;	// IMP=0x0000000100023370
- (id)startNavigationDetailsForRouteID:(id)arg1;	// IMP=0x0000000100022bdc
- (id)companionRouteWithRouteID:(id)arg1;	// IMP=0x0000000100022908
- (id)companionRouteAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100022754
- (unsigned long long)selectedRouteIndex;	// IMP=0x0000000100022618
@property(readonly, nonatomic) GEOCompanionRouteContext *companionRouteContext;
- (id)init;	// IMP=0x0000000100022440

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
