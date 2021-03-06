/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/FigPiPableLayer.h>

@interface FigBaseCALayer : CALayer <FigPiPableLayer> {

	BOOL _preventsChangesToSublayerHierarchy;

}

@property (assign,nonatomic) BOOL preventsChangesToSublayerHierarchy;              //@synthesize preventsChangesToSublayerHierarchy=_preventsChangesToSublayerHierarchy - In the implementation block
+(id)defaultActionForKey:(id)arg1 ;
-(id)init;
-(void)removeFromSuperlayer;
-(void)addSublayer:(id)arg1 ;
-(void)setNeedsDisplay;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)actionForKey:(id)arg1 ;
-(void)insertSublayer:(id)arg1 above:(id)arg2 ;
-(void)setSublayers:(id)arg1 ;
-(void)insertSublayer:(id)arg1 below:(id)arg2 ;
-(void)replaceSublayer:(id)arg1 with:(id)arg2 ;
-(id)getLayerDisplay;
-(float)getDisplayScale;
-(BOOL)preventsChangesToSublayerHierarchy;
-(void)setPreventsChangesToSublayerHierarchy:(BOOL)arg1 ;
@end

