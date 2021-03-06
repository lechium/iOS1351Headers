/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class GEOComposedWaypoint, GEOURLRouteHandle;


@protocol MSPHistoryEntryRoute <MSPHistoryEntry>
@property (nonatomic,readonly) long long transportType; 
@property (nonatomic,readonly) GEOComposedWaypoint * startWaypoint; 
@property (nonatomic,readonly) GEOComposedWaypoint * endWaypoint; 
@property (nonatomic,readonly) GEOURLRouteHandle * routeHandle; 
@property (nonatomic,readonly) BOOL navigationWasInterrupted; 
@required
-(long long)transportType;
-(GEOURLRouteHandle *)routeHandle;
-(GEOComposedWaypoint *)startWaypoint;
-(GEOComposedWaypoint *)endWaypoint;
-(BOOL)navigationWasInterrupted;

@end

