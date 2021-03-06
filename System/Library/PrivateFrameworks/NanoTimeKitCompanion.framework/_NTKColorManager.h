/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CALayer, UIColor;

@interface _NTKColorManager : NSObject {

	CALayer* _layer;
	UIColor* _color;

}

@property (nonatomic,retain) CALayer * layer;                       //@synthesize layer=_layer - In the implementation block
@property (nonatomic,retain) UIColor * color;                       //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) UIColor * contentColor; 
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(CALayer *)layer;
-(void)setLayer:(CALayer *)arg1 ;
-(UIColor *)contentColor;
-(BOOL)shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)_updateFilterColor;
@end

