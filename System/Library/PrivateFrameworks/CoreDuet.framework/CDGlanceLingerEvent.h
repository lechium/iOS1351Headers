/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate;

@interface CDGlanceLingerEvent : NSObject {

	NSString* _bundle;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (retain) NSString * bundle;               //@synthesize bundle=_bundle - In the implementation block
@property (retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
-(id)description;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)bundle;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setBundle:(NSString *)arg1 ;
@end

