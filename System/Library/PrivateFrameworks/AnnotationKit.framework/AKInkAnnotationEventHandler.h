/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKRectangularAnnotationEventHandler.h>

@interface AKInkAnnotationEventHandler : AKRectangularAnnotationEventHandler
+(BOOL)allowsDraggingOfAnnotation:(id)arg1 ;
-(CGSize)naturalSizeForAnnotation;
-(BOOL)handleDownEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(BOOL)enterDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(BOOL)alwaysLockAspectRatio;
@end

