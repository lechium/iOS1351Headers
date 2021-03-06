/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSMutableSet, NSDate;

@interface _DKLocationHistoryCache : NSObject {

	NSMutableArray* _visits;
	NSMutableSet* _visitSet;
	double _earliestTime;
	double _latestTime;
	unsigned long long _index;
	BOOL _needsSorting;

}

@property (readonly) NSDate * oldestEntryDate; 
@property (readonly) NSDate * newestExitDate; 
@property (readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(void)clear;
-(void)sortIfNecessary;
-(NSDate *)oldestEntryDate;
-(NSDate *)newestExitDate;
-(void)addVisitWithEntryDate:(id)arg1 exitDate:(id)arg2 locationId:(id)arg3 ;
-(id)lookupLocationIdforDate:(id)arg1 ;
-(void)clearOldest:(unsigned long long)arg1 ;
@end

