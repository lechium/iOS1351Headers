/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDragGestureRecognizer.h>

@interface UISpringLoadedGestureRecognizer : UIDragGestureRecognizer
-(CGPoint)locationInView:(id)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)_shouldReceiveDragEvent:(id)arg1 ;
-(void)_draggingEnteredWithEvent:(id)arg1 ;
-(void)_draggingUpdatedWithEvent:(id)arg1 ;
-(void)_draggingExitedWithEvent:(id)arg1 ;
-(void)_draggingEndedWithEvent:(id)arg1 ;
-(void)spring;
@end
