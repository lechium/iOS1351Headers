/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIClickPresentationInteractionDelegate <NSObject>
@optional
-(void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(BOOL)arg2;
-(BOOL)clickPresentationInteractionShouldBegin:(id)arg1;
-(BOOL)clickPresentationInteractionShouldPresent:(id)arg1;
-(id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2;

@required
-(id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;

@end

