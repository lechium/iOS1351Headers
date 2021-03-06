/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSNumber;

@interface VNCreateImageprintRequestConfiguration : VNImageBasedRequestConfiguration {

	NSNumber* _timeStamp;

}

@property (nonatomic,copy) NSNumber * timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)timeStamp;
-(void)setTimeStamp:(NSNumber *)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
@end

