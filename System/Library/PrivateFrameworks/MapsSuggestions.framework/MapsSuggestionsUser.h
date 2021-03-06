/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:06 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol MapsSuggestionsMeCardReader;
@class MapsSuggestionsRoutine, NSString;

@interface MapsSuggestionsUser : NSObject <MapsSuggestionsObject> {

	Queue _queue;
	id<MapsSuggestionsMeCardReader> _meCardReader;
	MapsSuggestionsRoutine* _routine;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(NSString *)uniqueName;
-(id)routine;
-(id)initWithMeCardReader:(id)arg1 routine:(id)arg2 ;
-(BOOL)meCardForProminentPlacesAroundCoordinate:(CLLocationCoordinate2D)arg1 maxDistance:(double)arg2 maxAge:(double)arg3 minVisits:(long long)arg4 handler:(/*^block*/id)arg5 ;
-(id)meCardReader;
@end

