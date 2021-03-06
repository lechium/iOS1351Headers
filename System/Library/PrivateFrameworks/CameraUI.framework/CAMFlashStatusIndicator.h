/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMFlashStatusIndicator : CAMControlStatusIndicator {

	BOOL _flashActive;
	BOOL _flashUnavailable;
	long long _flashMode;

}

@property (assign,nonatomic) long long flashMode;                                          //@synthesize flashMode=_flashMode - In the implementation block
@property (assign,getter=isFlashActive,nonatomic) BOOL flashActive;                        //@synthesize flashActive=_flashActive - In the implementation block
@property (assign,getter=isFlashUnavailable,nonatomic) BOOL flashUnavailable;              //@synthesize flashUnavailable=_flashUnavailable - In the implementation block
-(long long)flashMode;
-(void)setFlashMode:(long long)arg1 ;
-(BOOL)isFlashActive;
-(BOOL)isFlashUnavailable;
-(BOOL)shouldUseOutline;
-(id)imageNameForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(void)setFlashActive:(BOOL)arg1 ;
-(void)setFlashUnavailable:(BOOL)arg1 ;
@end

