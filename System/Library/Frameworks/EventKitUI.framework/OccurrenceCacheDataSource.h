/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/OccurrenceCacheDataSourceProtocol.h>

@class EKEventStore, NSSet, NSArray, NSString;

@interface OccurrenceCacheDataSource : NSObject <OccurrenceCacheDataSourceProtocol> {

	EKEventStore* _eventStore;
	NSSet* _calendars;
	NSArray* _cachedDays;
	int _cachedDaysSeed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id)_cachedDays;
-(long long)cachedDayCount;
-(id)initWithEventStore:(id)arg1 calendars:(id)arg2 ;
-(BOOL)supportsInvitations;
-(BOOL)supportsFakeTodaySection;
-(BOOL)cachedOccurrencesAreLoaded;
-(BOOL)cachedOccurrencesAreBeingGenerated;
-(long long)countOfOccurrencesAtDayIndex:(long long)arg1 ;
-(id)dateAtDayIndex:(long long)arg1 ;
-(id)cachedOccurrenceAtIndexPath:(id)arg1 ;
-(long long)sectionForCachedOccurrencesOnDate:(id)arg1 ;
-(void)invalidateCachedOccurrences;
-(void)fetchDaysInBackgroundStartingFromSection:(long long)arg1 ;
-(void)searchWithTerm:(id)arg1 ;
-(void)stopSearching;
@end

