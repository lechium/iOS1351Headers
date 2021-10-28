/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UIColor;

@interface MiroCircularProgressBar : UIView

@property (assign,nonatomic) float progress; 
@property (nonatomic,retain) UIColor * progressColor; 
@property (assign,nonatomic) double circleLineWidth; 
@property (assign,nonatomic) double arcLineWidth; 
@property (assign,nonatomic) double animationDuration; 
+(Class)layerClass;
-(id)initWithCoder:(id)arg1 ;
-(float)progress;
-(void)setProgress:(float)arg1 ;
-(double)animationDuration;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setProgressColor:(UIColor *)arg1 ;
-(UIColor *)progressColor;
-(double)circleLineWidth;
-(void)setCircleLineWidth:(double)arg1 ;
-(double)arcLineWidth;
-(void)setArcLineWidth:(double)arg1 ;
@end
