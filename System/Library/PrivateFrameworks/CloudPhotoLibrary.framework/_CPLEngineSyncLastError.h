/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSError;

@interface _CPLEngineSyncLastError : NSObject {

	NSDate* _date;
	NSError* _error;

}

@property (nonatomic,copy) NSDate * date;                //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
-(NSDate *)date;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
@end
