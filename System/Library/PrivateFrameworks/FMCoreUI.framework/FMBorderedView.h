/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UIColor;

@interface FMBorderedView : UIView {

	BOOL _hairlineBorder;

}

@property (assign,nonatomic) BOOL hairlineBorder;                //@synthesize hairlineBorder=_hairlineBorder - In the implementation block
@property (assign,nonatomic) double borderWidth; 
@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,retain) UIColor * borderColor; 
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(UIColor *)borderColor;
-(void)setHairlineBorder:(BOOL)arg1 ;
-(BOOL)hairlineBorder;
@end

