/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PDFPageLayerInterface <NSObject>
@required
-(BOOL)isVisible;
-(id)page;
-(void)clearTiles;
-(long long)displayBox;
-(void)setEnableTileUpdates:(BOOL)arg1;
-(id)renderingProperties;
-(void)setNeedsTilesUpdate;
-(id)initWithPage:(id)arg1 geometryInterface:(id)arg2 andRenderingProperties:(id)arg3;
-(id)geometryInterface;
-(unsigned long long)visibilityDelegateIndex;
-(void)updatePageLayerEffectForID:(id)arg1;
-(id)pageLayerEffectForID:(id)arg1;
-(CGAffineTransform*)layerEffectTransform;
-(void)updatePageLayerEffects;
-(void)addPageLayerEffect:(id)arg1;
-(void)removePageLayerEffectForID:(id)arg1;
-(void)scalePageLayerEffects:(double)arg1;
-(BOOL)enablesTileUpdates;
-(void)forceTileUpdate;
-(void)saveOriginalTileLayout;
-(void)restoreOriginalTileLayout;
-(void)applyTileLayoutScale:(double)arg1;
-(void)willStartLiveResize;
-(void)willEndStartLiveResize;
-(void)setVisibilityDelegateIndex:(unsigned long long)arg1;

@end
