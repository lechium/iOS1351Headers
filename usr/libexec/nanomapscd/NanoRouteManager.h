//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsRequestFeedback, GEOLocation, GEORouteAttributes, NSDate;
@protocol GEODirectionServiceTicket;

__attribute__((visibility("hidden")))
@interface NanoRouteManager : NSObject
{
    id <GEODirectionServiceTicket> _ticket;	// 8 = 0x8
    double _requestTimestamp;	// 16 = 0x10
    GEODirectionsRequest *_request;	// 24 = 0x18
    GEORouteAttributes *_routeAttributes;	// 32 = 0x20
    _Bool _fromCurrentLocation;	// 40 = 0x28
    int _desiredTransportType;	// 44 = 0x2c
    unsigned int _routeState;	// 48 = 0x30
    GEOComposedWaypoint *_origin;	// 56 = 0x38
    GEOComposedWaypoint *_destination;	// 64 = 0x40
    GEOLocation *_currentLocation;	// 72 = 0x48
    CDUnknownBlockType _completionHandler;	// 80 = 0x50
    NSDate *_departureDate;	// 88 = 0x58
    NSDate *_arrivalDate;	// 96 = 0x60
    GEODirectionsRequestFeedback *_feedback;	// 104 = 0x68
    unsigned long long _maximumNumberOfRoutes;	// 112 = 0x70
    GEOApplicationAuditToken *_auditToken;	// 120 = 0x78
}

+ (id)defaultRouteAttributesForNavigation;	// IMP=0x000000010001e4ec
+ (id)defaultRouteAttributes;	// IMP=0x000000010001e4d8
- (void).cxx_destruct;	// IMP=0x000000010001f904
@property(nonatomic) unsigned int routeState; // @synthesize routeState=_routeState;
@property(retain, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) unsigned long long maximumNumberOfRoutes; // @synthesize maximumNumberOfRoutes=_maximumNumberOfRoutes;
@property(retain, nonatomic) GEODirectionsRequestFeedback *feedback; // @synthesize feedback=_feedback;
@property(retain, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
@property(retain, nonatomic) NSDate *departureDate; // @synthesize departureDate=_departureDate;
@property(nonatomic) _Bool fromCurrentLocation; // @synthesize fromCurrentLocation=_fromCurrentLocation;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) GEOLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(readonly, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) GEOComposedWaypoint *origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) int desiredTransportType; // @synthesize desiredTransportType=_desiredTransportType;
- (void)_handleDirectionsResponse:(id)arg1 error:(id)arg2 directionsError:(id)arg3;	// IMP=0x000000010001f170
- (void)cancel;	// IMP=0x000000010001f0b8
- (void)loadNewRouteSet;	// IMP=0x000000010001ecc4
- (void)_addTimepointIfNeededToRouteAttributes:(id)arg1;	// IMP=0x000000010001ebb0
- (id)_requestTicketWithWaypoints:(id)arg1;	// IMP=0x000000010001e710
- (void)_setupFeedbackIfNeeded;	// IMP=0x000000010001e62c
- (id)initWithDirectionsFrom:(id)arg1 to:(id)arg2 type:(int)arg3 currentLocation:(id)arg4 fromCurrentLocation:(_Bool)arg5 withFeedback:(id)arg6;	// IMP=0x000000010001e3d8
- (id)init;	// IMP=0x000000010001e398
- (void)dealloc;	// IMP=0x000000010001e33c

@end
