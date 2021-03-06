/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AnnotationKit/AnnotationKit-Structs.h>
@class AKPageController, AKAnnotation;

@interface AKAnnotationEventHandler : NSObject {

	BOOL _draggingHorizontalOnly;
	BOOL _draggingVerticalOnly;
	AKPageController* _pageController;
	AKAnnotation* _annotation;
	unsigned long long _initiallyDraggedArea;
	CGPoint _initialDraggedPoint;
	CGPoint _initialOtherPoint;
	CGPoint _initialCenter;
	CGPoint _lastPositionInModel;
	CGPoint _lastPositionInWindow;

}

@property (__weak) AKPageController * pageController;                    //@synthesize pageController=_pageController - In the implementation block
@property (retain) AKAnnotation * annotation;                            //@synthesize annotation=_annotation - In the implementation block
@property (assign) unsigned long long initiallyDraggedArea;              //@synthesize initiallyDraggedArea=_initiallyDraggedArea - In the implementation block
@property (assign) CGPoint initialDraggedPoint;                          //@synthesize initialDraggedPoint=_initialDraggedPoint - In the implementation block
@property (assign) CGPoint initialOtherPoint;                            //@synthesize initialOtherPoint=_initialOtherPoint - In the implementation block
@property (assign) CGPoint initialCenter;                                //@synthesize initialCenter=_initialCenter - In the implementation block
@property (assign) BOOL draggingHorizontalOnly;                          //@synthesize draggingHorizontalOnly=_draggingHorizontalOnly - In the implementation block
@property (assign) BOOL draggingVerticalOnly;                            //@synthesize draggingVerticalOnly=_draggingVerticalOnly - In the implementation block
@property (assign) CGPoint lastPositionInModel;                          //@synthesize lastPositionInModel=_lastPositionInModel - In the implementation block
@property (assign) CGPoint lastPositionInWindow;                         //@synthesize lastPositionInWindow=_lastPositionInWindow - In the implementation block
+(BOOL)allowsDragging;
+(CGRect)annotationRectangleForDraggingBounds:(CGRect)arg1 forAnnotation:(id)arg2 onPageController:(id)arg3 withOriginalCenter:(CGPoint)arg4 ;
+(Class)_handlerClassForPlatformForAnnotation:(id)arg1 ;
+(id)newAnnotationEventHandlerForCurrentPlatformForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(BOOL)allowsDraggingOfAnnotation:(id)arg1 ;
-(AKPageController *)pageController;
-(void)setPageController:(AKPageController *)arg1 ;
-(AKAnnotation *)annotation;
-(void)setAnnotation:(AKAnnotation *)arg1 ;
-(unsigned long long)initiallyDraggedArea;
-(void)getInitialDraggedPoint:(CGPoint*)arg1 otherPoint:(CGPoint*)arg2 center:(CGPoint*)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5 ;
-(void)updateModelWithCurrentPoint:(CGPoint)arg1 ;
-(CGPoint)initialCenter;
-(CGPoint)initialOtherPoint;
-(CGPoint)lastPositionInModel;
-(CGPoint)initialDraggedPoint;
-(double)naturalAspectRatioForAnnotation;
-(BOOL)lockAspectRatioByDefault;
-(CGSize)naturalSizeForAnnotation;
-(BOOL)handleDownEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(BOOL)enterDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(BOOL)continueDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(void)setupDraggingConstraints;
-(id)_initWithAnnotation:(id)arg1 andPageController:(id)arg2 ;
-(void)setDraggingHorizontalOnly:(BOOL)arg1 ;
-(void)setDraggingVerticalOnly:(BOOL)arg1 ;
-(BOOL)draggingHorizontalOnly;
-(BOOL)draggingVerticalOnly;
-(BOOL)canLockAspectRatio;
-(BOOL)alwaysLockAspectRatio;
-(void)setInitialDraggedPoint:(CGPoint)arg1 ;
-(void)setInitialOtherPoint:(CGPoint)arg1 ;
-(void)setInitialCenter:(CGPoint)arg1 ;
-(CGPoint)windowPointFromEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(void)setLastPositionInWindow:(CGPoint)arg1 ;
-(CGPoint)lastPositionInWindow;
-(CGPoint)modelPointFromPointInWindow:(CGPoint)arg1 ;
-(void)setLastPositionInModel:(CGPoint)arg1 ;
-(void)setInitiallyDraggedArea:(unsigned long long)arg1 ;
@end

