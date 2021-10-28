/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class CAShapeLayer;

@interface WFLibraryCancelButton : UIControl {

	CAShapeLayer* _outlineLayer;
	CAShapeLayer* _glyphLayer;

}

@property (nonatomic,readonly) CAShapeLayer * outlineLayer;              //@synthesize outlineLayer=_outlineLayer - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * glyphLayer;                //@synthesize glyphLayer=_glyphLayer - In the implementation block
-(void)reset;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(CAShapeLayer *)outlineLayer;
-(CAShapeLayer *)glyphLayer;
-(void)finishWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
@end
