//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class GEOComposedRoute, MNTraceRecordingData, NSArray, NSDictionary, NSError, NSUUID;

__attribute__((visibility("hidden")))
@interface NanoRoutePlanningResponse : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSDictionary *_userInfoByRouteID;	// 8 = 0x8
    NSArray *_routeIDs;	// 16 = 0x10
    NSArray *_routes;	// 24 = 0x18
    NSArray *_companionRoutes;	// 32 = 0x20
    unsigned long long _routeOrigin;	// 40 = 0x28
    NSError *_lastError;	// 48 = 0x30
    unsigned long long _expectedNumberOfRoutes;	// 56 = 0x38
    MNTraceRecordingData *_traceRecordingData;	// 64 = 0x40
    NSUUID *_selectedRouteID;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100003cc0
+ (_Bool)_canRunNavigationForRoute:(id)arg1;	// IMP=0x0000000100002530
- (void).cxx_destruct;	// IMP=0x00000001000043d4
@property(retain, nonatomic) NSUUID *selectedRouteID; // @synthesize selectedRouteID=_selectedRouteID;
@property(retain, nonatomic) MNTraceRecordingData *traceRecordingData; // @synthesize traceRecordingData=_traceRecordingData;
@property(nonatomic) unsigned long long expectedNumberOfRoutes; // @synthesize expectedNumberOfRoutes=_expectedNumberOfRoutes;
@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(nonatomic) unsigned long long routeOrigin; // @synthesize routeOrigin=_routeOrigin;
@property(readonly, nonatomic) NSArray *routeIDs; // @synthesize routeIDs=_routeIDs;
@property(retain, nonatomic) NSArray *companionRoutes; // @synthesize companionRoutes=_companionRoutes;
@property(retain, nonatomic) NSArray *routes; // @synthesize routes=_routes;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000420c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100003cc8
- (void)_populateCopy:(id)arg1;	// IMP=0x0000000100003c20
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100003bdc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100003b98
- (id)snapshot;	// IMP=0x0000000100003a04
- (_Bool)canNavigateRouteWithID:(id)arg1;	// IMP=0x0000000100003988
- (id)userInfoForRouteWithID:(id)arg1;	// IMP=0x000000010000394c
- (id)routeWithID:(id)arg1;	// IMP=0x0000000100003764
@property(readonly, nonatomic) GEOComposedRoute *selectedRoute;
@property(readonly, nonatomic) _Bool hasReceivedAllExpectedRoutes;
@property(readonly, nonatomic) unsigned long long numberOfRoutes;
- (id)_generateCompanionRouteFromComposedRoute:(id)arg1;	// IMP=0x00000001000033e8
- (void)_generateCompanionRoutesFromComposedRoutes;	// IMP=0x0000000100003278
- (id)companionRouteWithID:(id)arg1;	// IMP=0x0000000100002e4c
- (id)selectedCompanionRoute;	// IMP=0x0000000100002de0
- (void)setObject:(id)arg1 forUserInfoKey:(id)arg2 forRouteID:(id)arg3;	// IMP=0x0000000100002a54
- (void)_setRoutes:(id)arg1 withRouteIDs:(id)arg2;	// IMP=0x00000001000026c0
- (id)init;	// IMP=0x00000001000024f0

@end

