/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:32 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRoute, GEORouteRoadMatcher;

@interface GEORouteMatcher : NSObject {

	GEOComposedRoute* _route;
	BOOL _useStrictInitialOnRouteCriteria;
	GEORouteRoadMatcher* _routeRoadMatcher;
	BOOL _shouldSnapRouteMatchToRoute;

}

@property (assign,nonatomic) BOOL useStrictInitialOnRouteCriteria;              //@synthesize useStrictInitialOnRouteCriteria=_useStrictInitialOnRouteCriteria - In the implementation block
@property (assign,nonatomic) BOOL shouldSnapRouteMatchToRoute;                  //@synthesize shouldSnapRouteMatchToRoute=_shouldSnapRouteMatchToRoute - In the implementation block
-(void)dealloc;
-(id)initWithRoute:(id)arg1 ;
-(id)matchToClosestPointOnRouteWithLocation:(id)arg1 ;
-(void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3 ;
-(BOOL)_supportsSnapping;
-(id)matchToRouteWithLocation:(id)arg1 previousRouteMatch:(id)arg2 ;
-(id)matchToRouteWithLocation:(id)arg1 ;
-(void)_startRouteMatch;
-(void)_considerCandidateMatch:(id)arg1 ;
-(void)_forEachSegmentNearLocation:(id)arg1 previousRouteMatch:(id)arg2 handler:(/*^block*/id)arg3 ;
-(double)distanceToRouteFrom:(SCD_Struct_GE32)arg1 startDistance:(double)arg2 endDistance:(double)arg3 ;
-(id)_startStepForPreviousRouteMatch:(id)arg1 ;
-(id)_stepForPointIndex:(unsigned)arg1 previousStep:(id)arg2 ;
-(BOOL)_shouldConsiderCourseForLocation:(id)arg1 ;
-(double)_scoreModifierForStep:(id)arg1 previousStep:(id)arg2 ;
-(void)_snapRouteMatchToRoad:(id)arg1 ;
-(double)distanceToRouteFrom:(SCD_Struct_GE32)arg1 ;
-(BOOL)useStrictInitialOnRouteCriteria;
-(void)setUseStrictInitialOnRouteCriteria:(BOOL)arg1 ;
-(BOOL)shouldSnapRouteMatchToRoute;
-(void)setShouldSnapRouteMatchToRoute:(BOOL)arg1 ;
@end

