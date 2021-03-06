/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:28 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEOAnalyticsPipelineStateData.h>

@class geo_isolater;

@interface GEOAnalyticsPipelineSharedStateData : GEOAnalyticsPipelineStateData {

	geo_isolater* _placeIso;
	geo_isolater* _mapViewIso;

}
+(id)sharedData;
-(id)init;
-(void)_performSyncStateUpdateWithIsolator:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(void)_populateWithGEOTransitPlaceCard:(id)arg1 ;
-(void)_populateWithGEOTransitDepartureSequenceUsage:(id)arg1 ;
-(void)populateWithPlaceActionDetails:(id)arg1 ;
-(BOOL)hasPlaceCard_PlaceActionDetails;
-(BOOL)hasPlaceCard_PlaceActionDetails_TransitPlaceCard;
-(BOOL)hasPlaceCard_PlaceActionDetails_TransitPlaceCard_TransitDepartureSequence;
-(void)performMapViewStateUpdate:(/*^block*/id)arg1 ;
-(void)performPlaceCardStateUpdate:(/*^block*/id)arg1 ;
-(void)clearPlaceCardStateData;
-(void)populateWithPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 ;
-(void)populateWithChildPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 ;
-(BOOL)hasPlaceCardStateData;
-(BOOL)hasMapsServerData;
-(BOOL)hasSuggestionsData;
-(void)clearSuggestionsData;
-(BOOL)hasMapRestoreData;
-(BOOL)hasMapLaunchData;
@end

