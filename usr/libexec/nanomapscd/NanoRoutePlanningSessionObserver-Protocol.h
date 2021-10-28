//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NanoRoutePlanningRequest, NanoRoutePlanningResponse, NanoRoutePlanningSession;

@protocol NanoRoutePlanningSessionObserver <NSObject>
- (void)routePlanningSessionDidInvalidate:(NanoRoutePlanningSession *)arg1;
- (void)routePlanningSession:(NanoRoutePlanningSession *)arg1 didFailWithResponse:(NanoRoutePlanningResponse *)arg2;
- (void)routePlanningSession:(NanoRoutePlanningSession *)arg1 didUpdateWithResponse:(NanoRoutePlanningResponse *)arg2;
- (void)routePlanningSession:(NanoRoutePlanningSession *)arg1 didStartLoadingWithRequest:(NanoRoutePlanningRequest *)arg2;
@end
