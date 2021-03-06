/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:27 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVRoutingSessionManager, ATXAVRouteInfo;

@interface ATXAVRoutingSessionHelper : NSObject {

	float _threshold;
	AVRoutingSessionManager* _avRoutingSessionManager;
	ATXAVRouteInfo* _internalPredictedRouteInfo;

}

@property (nonatomic,readonly) float acceptThreshod; 
@property (nonatomic,readonly) ATXAVRouteInfo * predictedRouteInfo; 
-(id)init;
-(id)initWithAcceptThreshold:(float)arg1 avRoutingSessionManager:(id)arg2 ;
-(ATXAVRouteInfo *)predictedRouteInfo;
-(float)acceptThreshod;
-(id)_predictedRouteInfoWithAcceptThreshold:(float)arg1 prefersLikelyDestinationsOverCurrentRoutingSession:(BOOL)arg2 ;
-(id)_predictedRouteWithAcceptThreshold:(float)arg1 ;
-(id)_selectedOrPendingRoute;
-(id)_filterTopRouteFromRoutes:(id)arg1 withAcceptThreshold:(float)arg2 ;
-(id)_atxAVRouteInfoWithRoute:(id)arg1 ;
@end

