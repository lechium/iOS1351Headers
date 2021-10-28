/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:12 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIVisualEffectSubview.h>

@class _UIVisualEffectViewBackdropCaptureGroup, CABackdropLayer;

@interface _UIVisualEffectBackdropView : _UIVisualEffectSubview {

	_UIVisualEffectViewBackdropCaptureGroup* _captureGroup;

}

@property (assign,nonatomic) long long renderMode; 
@property (nonatomic,retain) _UIVisualEffectViewBackdropCaptureGroup * captureGroup; 
@property (nonatomic,readonly) CABackdropLayer * backdropLayer; 
+(Class)layerClass;
-(CABackdropLayer *)backdropLayer;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)removeFromCurrentCaptureGroup;
-(void)setRenderMode:(long long)arg1 ;
-(void)setCaptureGroup:(_UIVisualEffectViewBackdropCaptureGroup *)arg1 ;
-(void)applyRequestedFilterEffects;
-(void)applyIdentityFilterEffects;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_applyScaleHintAsRequested:(BOOL)arg1 ;
-(long long)renderMode;
-(_UIVisualEffectViewBackdropCaptureGroup *)captureGroup;
@end
