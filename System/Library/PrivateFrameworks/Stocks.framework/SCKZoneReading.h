/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol SCKZoneReading
@property (nonatomic,copy,readonly) NSArray * allRecords; 
@required
-(id)recordWithName:(id)arg1;
-(id)recordOfType:(id)arg1 passingTest:(/*^block*/id)arg2;
-(id)recordsOfType:(id)arg1;
-(id)recordOfType:(id)arg1;
-(NSArray *)allRecords;

@end
