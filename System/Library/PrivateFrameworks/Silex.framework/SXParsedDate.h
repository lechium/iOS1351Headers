/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXParsedDate.h>
@class NSDate, NSTimeZone;


@protocol SXParsedDate <NSObject>
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) BOOL containedTime; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@required
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(BOOL)containedTime;

@end


@class NSDate, NSTimeZone, NSString;

@interface SXParsedDate : NSObject <SXParsedDate> {

	BOOL _containedTime;
	NSDate* _date;
	NSTimeZone* _timeZone;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * date;                       //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL containedTime;                  //@synthesize containedTime=_containedTime - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone;               //@synthesize timeZone=_timeZone - In the implementation block
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(BOOL)containedTime;
-(id)initWithDate:(id)arg1 containedTime:(BOOL)arg2 timeZone:(id)arg3 ;
@end

