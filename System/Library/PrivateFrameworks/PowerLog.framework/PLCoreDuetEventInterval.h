/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface PLCoreDuetEventInterval : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
-(id)description;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(BOOL)intersects:(id)arg1 ;
-(id)joinWithInterval:(id)arg1 ;
@end

