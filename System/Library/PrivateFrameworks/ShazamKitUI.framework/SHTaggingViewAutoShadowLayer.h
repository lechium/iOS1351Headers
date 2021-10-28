/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKitUI.framework/ShazamKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/CALayer.h>

@class CALayer, CAShapeLayer;

@interface SHTaggingViewAutoShadowLayer : CALayer {

	CALayer* _autoShadowBackgroundLayer;
	CAShapeLayer* _autoShadowOuterLayer;

}

@property (nonatomic,retain) CALayer * autoShadowBackgroundLayer;              //@synthesize autoShadowBackgroundLayer=_autoShadowBackgroundLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * autoShadowOuterLayer;              //@synthesize autoShadowOuterLayer=_autoShadowOuterLayer - In the implementation block
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSublayers;
-(void)setupSublayers;
-(void)setAutoShadowBackgroundLayer:(CALayer *)arg1 ;
-(CALayer *)autoShadowBackgroundLayer;
-(void)setAutoShadowOuterLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)autoShadowOuterLayer;
@end
