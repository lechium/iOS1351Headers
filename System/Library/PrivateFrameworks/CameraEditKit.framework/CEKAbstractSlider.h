/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CEKAbstractSlider <NSObject>
@property (assign,nonatomic) long long sliderVerticalAlignment; 
@property (assign,nonatomic) double sliderVerticalOffset; 
@property (assign,nonatomic) double labelVerticalPadding; 
@property (assign,nonatomic) BOOL useLegibilityShadows; 
@property (assign,nonatomic) BOOL useTickMarkLegibilityShadows; 
@property (assign,nonatomic) long long textOrientation; 
@property (assign,nonatomic) long long titleAlignment; 
@property (assign,nonatomic) CGPoint gradientInsets; 
@property (assign,nonatomic) unsigned long long fontStyle; 
@required
-(void)setTitleAlignment:(long long)arg1;
-(long long)titleAlignment;
-(void)setFontStyle:(unsigned long long)arg1;
-(unsigned long long)fontStyle;
-(BOOL)useTickMarkLegibilityShadows;
-(void)setUseTickMarkLegibilityShadows:(BOOL)arg1;
-(long long)textOrientation;
-(double)labelVerticalPadding;
-(long long)sliderVerticalAlignment;
-(double)sliderVerticalOffset;
-(CGPoint)gradientInsets;
-(void)setTextOrientation:(long long)arg1 animated:(BOOL)arg2;
-(void)removeGradients;
-(void)setTransparentGradients;
-(void)setOpaqueGradientsWithColor:(id)arg1;
-(void)setSliderVerticalAlignment:(long long)arg1;
-(void)setSliderVerticalOffset:(double)arg1;
-(void)setLabelVerticalPadding:(double)arg1;
-(BOOL)useLegibilityShadows;
-(void)setUseLegibilityShadows:(BOOL)arg1;
-(void)setTextOrientation:(long long)arg1;
-(void)setGradientInsets:(CGPoint)arg1;

@end
