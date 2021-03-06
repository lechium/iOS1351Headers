/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, CAShapeLayer, UILabel, UIColor;

@interface HUColorSwatchView : UIView {

	BOOL _labelHidden;
	unsigned long long _selectionState;
	NSString* _text;
	CAShapeLayer* _circleLayer;
	CAShapeLayer* _selectedCircleLayer;
	CAShapeLayer* _selectedCircleInnerLayer;
	CAShapeLayer* _selectedCircleOuterLayer;
	UILabel* _label;

}

@property (nonatomic,retain) CAShapeLayer * circleLayer;                           //@synthesize circleLayer=_circleLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * selectedCircleLayer;                   //@synthesize selectedCircleLayer=_selectedCircleLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * selectedCircleInnerLayer;              //@synthesize selectedCircleInnerLayer=_selectedCircleInnerLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * selectedCircleOuterLayer;              //@synthesize selectedCircleOuterLayer=_selectedCircleOuterLayer - In the implementation block
@property (nonatomic,retain) UILabel * label;                                      //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) unsigned long long selectionState;                    //@synthesize selectionState=_selectionState - In the implementation block
@property (assign,nonatomic) BOOL labelHidden;                                     //@synthesize labelHidden=_labelHidden - In the implementation block
@property (nonatomic,retain) NSString * text;                                      //@synthesize text=_text - In the implementation block
+(Class)layerClass;
-(UIColor *)color;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(void)setColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(unsigned long long)selectionState;
-(void)setSelectionState:(unsigned long long)arg1 ;
-(void)_updateLayout;
-(void)_updateTextColor;
-(void)setLabelHidden:(BOOL)arg1 ;
-(CAShapeLayer *)circleLayer;
-(void)setCircleLayer:(CAShapeLayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 text:(id)arg2 ;
-(CAShapeLayer *)selectedCircleLayer;
-(CAShapeLayer *)selectedCircleInnerLayer;
-(CAShapeLayer *)selectedCircleOuterLayer;
-(BOOL)labelHidden;
-(void)setSelectedCircleLayer:(CAShapeLayer *)arg1 ;
-(void)setSelectedCircleInnerLayer:(CAShapeLayer *)arg1 ;
-(void)setSelectedCircleOuterLayer:(CAShapeLayer *)arg1 ;
@end

