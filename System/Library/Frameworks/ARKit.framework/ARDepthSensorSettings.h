/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARImageSensorSettings.h>

@class NSString;

@interface ARDepthSensorSettings : ARImageSensorSettings {

	NSString* _timeOfFlightProjectorMode;

}

@property (nonatomic,retain) NSString * timeOfFlightProjectorMode;              //@synthesize timeOfFlightProjectorMode=_timeOfFlightProjectorMode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)timeOfFlightProjectorMode;
-(void)setTimeOfFlightProjectorMode:(NSString *)arg1 ;
-(id)initWithVideoFormat:(id)arg1 ;
@end

