/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusGuideRegion.h>

@protocol _UIFocusRegionContainer;
@interface _UIFocusContainerGuideRegion : _UIFocusGuideRegion {

	id<_UIFocusRegionContainer> _contentFocusRegionContainer;

}

@property (assign,nonatomic,__weak) id<_UIFocusRegionContainer> contentFocusRegionContainer;              //@synthesize contentFocusRegionContainer=_contentFocusRegionContainer - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1 ;
-(void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setContentFocusRegionContainer:(id<_UIFocusRegionContainer>)arg1 ;
-(id<_UIFocusRegionContainer>)contentFocusRegionContainer;
-(id)_fallbackFocusItemForMovementRequest:(id)arg1 inFocusMap:(id)arg2 ;
-(id)_visualRepresentationColor;
-(unsigned long long)_focusableBoundaries;
@end

