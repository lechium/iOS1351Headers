/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSDate;

@interface RTVisitFeedBuffer : NSObject {

	/*^block*/id _comparator;
	double _minWaitInterval;
	NSMutableArray* _locations;
	NSDate* _lastMaturedLocationDate;

}

@property (nonatomic,retain) NSMutableArray * locations;                     //@synthesize locations=_locations - In the implementation block
@property (nonatomic,retain) NSDate * lastMaturedLocationDate;               //@synthesize lastMaturedLocationDate=_lastMaturedLocationDate - In the implementation block
@property (nonatomic,readonly) unsigned long long numLocations; 
@property (nonatomic,readonly) double minWaitInterval;                       //@synthesize minWaitInterval=_minWaitInterval - In the implementation block
-(id)init;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)locations;
-(void)addLocations:(id)arg1 ;
-(id)initWithMinWaitInterval:(double)arg1 ;
-(unsigned long long)numLocations;
-(double)minWaitInterval;
-(id)maturedLocations;
-(NSDate *)lastMaturedLocationDate;
-(void)setLastMaturedLocationDate:(NSDate *)arg1 ;
@end
