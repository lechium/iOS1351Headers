/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
@class NSDate;

@interface SUManagedDeviceUpdateDelay : NSObject {

	BOOL _isDelayed;
	NSDate* _delayedStartDate;
	unsigned long long _delayPeriod;

}

@property (assign,nonatomic) BOOL isDelayed;                              //@synthesize isDelayed=_isDelayed - In the implementation block
@property (nonatomic,retain) NSDate * delayedStartDate;                   //@synthesize delayedStartDate=_delayedStartDate - In the implementation block
@property (assign,nonatomic) unsigned long long delayPeriod;              //@synthesize delayPeriod=_delayPeriod - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIsDelayed:(BOOL)arg1 ;
-(BOOL)isDelayed;
-(unsigned long long)delayPeriod;
-(void)setDelayPeriod:(unsigned long long)arg1 ;
-(id)initWithDelay:(id)arg1 ;
-(NSDate *)delayedStartDate;
-(unsigned long long)delayUnit;
-(id)delayEndDate;
-(void)setDelayedStartDate:(NSDate *)arg1 ;
@end
