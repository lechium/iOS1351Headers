/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>

@class CAShapeLayer;

@interface SFToggleBackgroundView : UIView {

	CGSize _shapeSize;
	long long _cornerRoundingMode;

}

@property (assign,nonatomic) long long cornerRoundingMode;              //@synthesize cornerRoundingMode=_cornerRoundingMode - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * shapeLayer; 
+(Class)layerClass;
-(void)layoutSubviews;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)tintColorDidChange;
-(void)_dynamicUserInterfaceTraitDidChange;
-(CAShapeLayer *)shapeLayer;
-(void)_updateShape;
-(void)setCornerRoundingMode:(long long)arg1 ;
-(long long)cornerRoundingMode;
@end

