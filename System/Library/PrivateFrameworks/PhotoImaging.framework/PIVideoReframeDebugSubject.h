/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIReframeSubject.h>

@interface PIVideoReframeDebugSubject : PIReframeSubject {

	CGVector _velocity;
	CGVector _acceleration;

}

@property (assign) CGVector velocity;                  //@synthesize velocity=_velocity - In the implementation block
@property (assign) CGVector acceleration;              //@synthesize acceleration=_acceleration - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGVector)velocity;
-(void)setVelocity:(CGVector)arg1 ;
-(CGVector)acceleration;
-(void)setAcceleration:(CGVector)arg1 ;
@end

