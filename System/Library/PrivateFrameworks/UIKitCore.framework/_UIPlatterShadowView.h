/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIShapeView, UIColor, UIBezierPath;

@interface _UIPlatterShadowView : UIView {

	BOOL _punchOut;
	_UIShapeView* _shadowMaskView;

}

@property (nonatomic,readonly) _UIShapeView * shadowMaskView;              //@synthesize shadowMaskView=_shadowMaskView - In the implementation block
@property (assign,nonatomic) BOOL punchOut;                                //@synthesize punchOut=_punchOut - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor; 
@property (assign,nonatomic) double shadowOpacity; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) double shadowRadius; 
@property (nonatomic,retain) UIBezierPath * shadowPath; 
-(double)shadowRadius;
-(void)setShadowRadius:(double)arg1 ;
-(CGSize)shadowOffset;
-(void)setShadowOffset:(CGSize)arg1 ;
-(UIColor *)shadowColor;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setShadowPath:(UIBezierPath *)arg1 ;
-(void)setPunchOut:(BOOL)arg1 ;
-(UIBezierPath *)shadowPath;
-(id)initWithShadowPath:(id)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(double)shadowOpacity;
-(_UIShapeView *)shadowMaskView;
-(BOOL)punchOut;
@end

