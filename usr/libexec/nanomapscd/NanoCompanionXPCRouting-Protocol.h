//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GEOCompanionRouteContext, NSData, NanoRoutePlanningRequest, NanoRoutePlanningResponse;

@protocol NanoCompanionXPCRouting <NSObject>
- (void)clearRoutePlanningWithContext:(GEOCompanionRouteContext *)arg1 completionHandler:(void (^)(void))arg2;
- (void)failRoutePlanningRequest:(NanoRoutePlanningRequest *)arg1 withResponse:(NanoRoutePlanningResponse *)arg2 completionHandler:(void (^)(void))arg3;
- (void)updateRoutePlanningRequest:(NanoRoutePlanningRequest *)arg1 withSelectedRouteID:(NSData *)arg2 completionHandler:(void (^)(void))arg3;
- (void)updateRoutePlanningRequest:(NanoRoutePlanningRequest *)arg1 withResponse:(NanoRoutePlanningResponse *)arg2 completionHandler:(void (^)(void))arg3;
- (void)anticipateRoutePlanningRequest:(NanoRoutePlanningRequest *)arg1 completionHandler:(void (^)(void))arg2;
- (void)checkinForRoutePlanning;
@end

