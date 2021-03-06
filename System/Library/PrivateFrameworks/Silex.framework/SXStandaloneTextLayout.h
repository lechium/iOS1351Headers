/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <Silex/SXContainerLayout.h>
#import <libobjc.A.dylib/TSWPLayoutParent.h>
#import <libobjc.A.dylib/TSWPColumnMetrics.h>

@protocol SXStandaloneTextLayoutDelegate;
@class TSWPPadding;

@interface SXStandaloneTextLayout : SXContainerLayout <TSWPLayoutParent, TSWPColumnMetrics> {

	id<SXStandaloneTextLayoutDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SXStandaloneTextLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize adjustedInsets; 
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) BOOL alwaysStartsNewTarget; 
@property (nonatomic,readonly) BOOL shrinkTextToFit; 
@property (nonatomic,readonly) BOOL columnsAreLeftToRight; 
@property (nonatomic,readonly) double textScaleFactor; 
-(id<SXStandaloneTextLayoutDelegate>)delegate;
-(void)setDelegate:(id<SXStandaloneTextLayoutDelegate>)arg1 ;
-(unsigned long long)columnCount;
-(TSWPPadding *)layoutMargins;
-(id)p_wpLayoutParent;
-(id)styleProviderForLayout:(id)arg1 ;
-(unsigned)autosizeFlagsForTextLayout:(id)arg1 ;
-(unsigned)verticalAlignmentForTextLayout:(id)arg1 ;
-(void)invalidateForAutosizingTextLayout:(id)arg1 ;
-(CGRect)nonAutosizedFrameForTextLayout:(id)arg1 ;
-(CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(id)dependentsOfTextLayout:(id)arg1 ;
-(Class)repClassForTextLayout:(id)arg1 ;
-(double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double*)arg3 outGap:(double*)arg4 ;
-(CGSize)adjustedInsets;
-(BOOL)alwaysStartsNewTarget;
-(BOOL)shrinkTextToFit;
-(BOOL)columnsAreLeftToRight;
-(Class)repClassOverride;
-(id)computeLayoutGeometry;
-(id)childInfosForLayout;
@end

