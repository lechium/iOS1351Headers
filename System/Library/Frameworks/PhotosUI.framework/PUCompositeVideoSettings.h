/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PUCompositeVideoSettings : PXSettings {

	BOOL _useFrameBlending;
	long long _cropMode;
	double _stitchingFadeDuration;
	double _nonStitchingFadeDuration;

}

@property (assign,nonatomic) BOOL useFrameBlending;                        //@synthesize useFrameBlending=_useFrameBlending - In the implementation block
@property (assign,nonatomic) long long cropMode;                           //@synthesize cropMode=_cropMode - In the implementation block
@property (assign,nonatomic) double stitchingFadeDuration;                 //@synthesize stitchingFadeDuration=_stitchingFadeDuration - In the implementation block
@property (assign,nonatomic) double nonStitchingFadeDuration;              //@synthesize nonStitchingFadeDuration=_nonStitchingFadeDuration - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(id)parentSettings;
-(void)setCropMode:(long long)arg1 ;
-(long long)cropMode;
-(BOOL)useFrameBlending;
-(void)setUseFrameBlending:(BOOL)arg1 ;
-(double)stitchingFadeDuration;
-(void)setStitchingFadeDuration:(double)arg1 ;
-(double)nonStitchingFadeDuration;
-(void)setNonStitchingFadeDuration:(double)arg1 ;
@end
