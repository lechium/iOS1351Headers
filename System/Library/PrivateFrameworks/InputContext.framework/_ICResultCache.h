/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSDate;

@interface _ICResultCache : NSObject {

	NSArray* _cachedResults;
	NSDate* _start;
	double _ttlInSeconds;

}
-(void)clear;
-(id)initWithTTL:(double)arg1 ;
-(void)addResults:(id)arg1 ;
-(id)searchWithTrigger:(id)arg1 ;
-(id)searchWithValue:(id)arg1 ;
-(BOOL)fuzzyMatchItem:(id)arg1 withValue:(id)arg2 ;
@end
