/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/OccurrenceCacheDataSource.h>

@class EKOccurrenceCacheSearch, NSMutableArray;

@interface OccurrenceCacheSearchDataSource : OccurrenceCacheDataSource {

	EKOccurrenceCacheSearch* _search;
	NSMutableArray* _processingCachedDays;
	opaque_pthread_mutex_t _resultsLock;

}
-(void)dealloc;
-(void)invalidate;
-(id)_cachedDays;
-(id)initWithEventStore:(id)arg1 calendars:(id)arg2 ;
-(BOOL)supportsInvitations;
-(BOOL)supportsFakeTodaySection;
-(long long)countOfOccurrencesAtDayIndex:(long long)arg1 ;
-(void)invalidateCachedOccurrences;
-(void)searchWithTerm:(id)arg1 ;
-(void)stopSearching;
-(void)_setCachedDaysAndNotify:(id)arg1 ;
@end
