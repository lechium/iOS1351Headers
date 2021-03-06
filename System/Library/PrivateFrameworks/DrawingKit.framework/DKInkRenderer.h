/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIColor;


@protocol DKInkRenderer <NSObject>
@property (nonatomic,retain) UIColor * inkColor; 
@property (assign,nonatomic,__weak) id<DKInkRendererDelegate> delegate; 
@property (assign,nonatomic) BOOL scaleDrawingToFitCanvas; 
@property (assign,nonatomic) double drawingScale; 
@property (assign,nonatomic) unsigned long long mode; 
@property (assign,nonatomic) BOOL drawingEnabled; 
@property (nonatomic,readonly) BOOL supportsBleedAnimation; 
@property (nonatomic,readonly) BOOL initialized; 
@property (nonatomic,readonly) unsigned long long maximumPointsForBleedAnimation; 
@required
-(void)clear;
-(id<DKInkRendererDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)initialized;
-(void)setMode:(unsigned long long)arg1;
-(unsigned long long)mode;
-(void)flush;
-(void)teardown;
-(void)addPoint:(SCD_Struct_DK0)arg1;
-(void)force;
-(void)endStroke;
-(UIColor *)inkColor;
-(void)setInkColor:(id)arg1;
-(void)beginStroke;
-(BOOL)drawingEnabled;
-(void)setDrawingEnabled:(BOOL)arg1;
-(double)drawingScale;
-(void)display;
-(id)snapshotImage;
-(void)removeLastStroke;
-(void)resetRendererState;
-(void)completeAnimationsImmediately;
-(BOOL)scaleDrawingToFitCanvas;
-(void)setScaleDrawingToFitCanvas:(BOOL)arg1;
-(void)setDrawingScale:(double)arg1;
-(BOOL)supportsBleedAnimation;
-(unsigned long long)maximumPointsForBleedAnimation;

@end

