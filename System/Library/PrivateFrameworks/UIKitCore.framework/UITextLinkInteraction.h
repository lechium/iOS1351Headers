/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UITextLinkInteraction
@optional
-(BOOL)interactionDidStartWithLinkAtPoint:(CGPoint)arg1;
-(void)_requestTextItemConstrainedToLineAtPoint:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2;

@required
-(void)cancelInteractionWithLink;
-(BOOL)mightHaveLinks;
-(void)tapLinkAtPoint:(CGPoint)arg1;
-(BOOL)isInteractingWithLink;
-(void)startInteractionWithLinkAtPoint:(CGPoint)arg1;
-(void)updateInteractionWithLinkAtPoint:(CGPoint)arg1;
-(void)validateInteractionWithLinkAtPoint:(CGPoint)arg1;
-(void)startLongInteractionWithLinkAtPoint:(CGPoint)arg1;
-(BOOL)willInteractWithLinkAtPoint:(CGPoint)arg1;

@end
