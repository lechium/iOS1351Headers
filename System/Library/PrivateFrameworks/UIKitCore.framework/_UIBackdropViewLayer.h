/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class _UIBackdropView;

@interface _UIBackdropViewLayer : CALayer {

	_UIBackdropView* _backdropView;

}

@property (assign,nonatomic) _UIBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
-(void)dealloc;
-(_UIBackdropView *)backdropView;
-(void)renderInContext:(CGContextRef)arg1 ;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
@end

