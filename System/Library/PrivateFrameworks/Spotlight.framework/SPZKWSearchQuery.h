/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Spotlight/SPQueryTask.h>

@class NSArray;

@interface SPZKWSearchQuery : SPQueryTask {

	NSArray* _mutableSections;
	unsigned long long _queryID;

}

@property (assign) unsigned long long queryID;              //@synthesize queryID=_queryID - In the implementation block
+(void)initialize;
-(void)start;
-(unsigned long long)queryID;
-(void)setQueryID:(unsigned long long)arg1 ;
-(void)startAtUIPriority:(BOOL)arg1 ;
-(void)addApplicationResultsFromPredictionResponse:(id)arg1 toSection:(id)arg2 queryIdent:(unsigned long long)arg3 ;
-(void)startAtUIPriority;
-(id)unsafeSections;
-(id)unsafeSessionEntityString;
@end
