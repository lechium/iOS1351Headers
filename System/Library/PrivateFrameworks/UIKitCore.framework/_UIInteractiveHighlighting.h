/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIInteractiveHighlighting <NSObject>
@optional
-(BOOL)_highlightsAlongsideDefaultEffect;
-(void)_highlightDidEndForInteraction:(id)arg1;
-(void)_prepareHighlightForInteraction:(id)arg1;
-(long long)_preferredHighlightAnimationStyleForInteraction:(id)arg1;

@required
-(void)_highlightForInteraction:(id)arg1 fractionComplete:(double)arg2 ended:(BOOL)arg3;

@end

