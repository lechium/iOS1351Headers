/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:46 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRoutine/RTSourceMapsSupport.h>

@class NSDate;

@interface RTSourceMapsSupportHistoryEntry : RTSourceMapsSupport {

	NSDate* _usageDate;

}

@property (nonatomic,readonly) NSDate * usageDate;              //@synthesize usageDate=_usageDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUsageDate:(id)arg1 ;
-(NSDate *)usageDate;
@end

