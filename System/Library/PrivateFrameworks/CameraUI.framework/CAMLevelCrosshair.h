/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface CAMLevelCrosshair : UIView {

	BOOL _highlighted;

}

@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
+(void)_drawCrosshairInContext:(CGContextRef)arg1 withBounds:(CGRect)arg2 strokeWidth:(double)arg3 color:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)_commonCAMLevelCrosshairInitialization;
@end
