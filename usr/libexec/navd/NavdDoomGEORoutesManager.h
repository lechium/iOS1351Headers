//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NavdDoomRoutesManager-Protocol.h"

@class GEODirectionsRequestFeedback, GEORouteAttributes, NSString;
@protocol GEODirectionServiceTicket;

@interface NavdDoomGEORoutesManager : NSObject <NavdDoomRoutesManager>
{
    id <GEODirectionServiceTicket> _routeRequestTicket;	// 8 = 0x8
    GEODirectionsRequestFeedback *_routeRequestFeedback;	// 16 = 0x10
    GEORouteAttributes *_routeRequestAttributes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100011520
- (id)_routeAttributes;	// IMP=0x0000000100011424
- (_Bool)requestWaypointForMapsSuggestionsEntry:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100011038
- (_Bool)requestRouteFrom:(id)arg1 to:(id)arg2 routeCache:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100010b64
- (_Bool)requestRouteFrom:(id)arg1 to:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100010ae8
- (void)dealloc;	// IMP=0x0000000100010a98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

