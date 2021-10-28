/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMRampToVideoZoomFactorCommand : CAMCaptureCommand {

	float __rate;
	double __videoZoomFactor;
	double __duration;

}

@property (nonatomic,readonly) double _videoZoomFactor;              //@synthesize _videoZoomFactor=__videoZoomFactor - In the implementation block
@property (nonatomic,readonly) float _rate;                          //@synthesize _rate=__rate - In the implementation block
@property (nonatomic,readonly) double _duration;                     //@synthesize _duration=__duration - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)_duration;
-(float)_rate;
-(double)_videoZoomFactor;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithVideoZoomFactor:(double)arg1 rate:(float)arg2 ;
-(id)initWithVideoZoomFactor:(double)arg1 duration:(double)arg2 ;
@end
