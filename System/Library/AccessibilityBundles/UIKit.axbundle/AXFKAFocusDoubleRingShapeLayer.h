/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIKit-Structs.h>
#import <UIKit/AXFKAFocusRingShapeLayer.h>

@class AXFKAFocusRingBorderShapeLayer;

@interface AXFKAFocusDoubleRingShapeLayer : AXFKAFocusRingShapeLayer {

	AXFKAFocusRingBorderShapeLayer* _topBorderLayer;

}

@property (nonatomic,retain) AXFKAFocusRingBorderShapeLayer * topBorderLayer;              //@synthesize topBorderLayer=_topBorderLayer - In the implementation block
-(id)init;
-(void)setPath:(CGPathRef)arg1 ;
-(void)updateAppearance;
-(AXFKAFocusRingBorderShapeLayer *)topBorderLayer;
-(void)setTopBorderLayer:(AXFKAFocusRingBorderShapeLayer *)arg1 ;
-(void)_updateTopLayerPath;
-(double)lineWidthForTopLayer;
-(CGColorRef)strokeColorForTopLayer;
-(id)topLayerFocusRingColorForTintColor:(id)arg1 ;
@end

