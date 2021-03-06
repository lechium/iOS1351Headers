/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class PXGLayout;


@protocol PXGAccessibilityRendererDelegate <NSObject>
@property (nonatomic,readonly) PXGLayout * accessibilityRootLayout; 
@property (nonatomic,readonly) BOOL canSelectAccessibilityGroupElements; 
@property (nonatomic,readonly) BOOL canSelectAccessibilityGroupElementsChildren; 
@required
-(BOOL)canSelectAccessibilityGroupElements;
-(BOOL)canSelectAccessibilityGroupElementsChildren;
-(id)accessibilityViewForSpriteIndex:(unsigned)arg1;
-(PXGLayout *)accessibilityRootLayout;
-(void)selectAssets:(id)arg1;
-(BOOL)itemWasDoubleClickedWithHitTestResult:(id)arg1;
-(BOOL)itemWasRightClickedWithHitTestResult:(id)arg1 location:(CGPoint)arg2;
-(BOOL)itemDidShowAlternateUIAtLocation:(CGPoint)arg1;
-(BOOL)itemDidShowDefaultUIAtLocation:(CGPoint)arg1;
-(id)accessibilityHitTestResultAtPoint:(CGPoint)arg1;
-(id)assetClosestToAsset:(id)arg1 inDirection:(unsigned long long)arg2;
-(void)axScrollToAsset:(id)arg1;
-(void)notifySelectedCellsChanged;

@end

