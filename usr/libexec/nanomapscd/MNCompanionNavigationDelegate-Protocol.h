//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GEOCompanionRouteDetails, GEOCompanionRouteStatus, GEOCompanionRouteUpdate;

@protocol MNCompanionNavigationDelegate <NSObject>
- (void)updateNavigationRouteWithUpdate:(GEOCompanionRouteUpdate *)arg1;
- (void)updateNavigationRouteStatus:(GEOCompanionRouteStatus *)arg1;
- (void)updateNavigationRouteDetails:(GEOCompanionRouteDetails *)arg1 routeStatus:(GEOCompanionRouteStatus *)arg2;
@end
