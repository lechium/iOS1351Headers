/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFDrawerDragTracking.h>

@class WFDrawerGestureCoordinator, NSString;

@interface WFDrawerDragTracker : NSObject <WFDrawerDragTracking> {

	BOOL _tracking;
	double _minTranslationY;
	double _maxTranslationY;
	WFDrawerGestureCoordinator* _gestureCoordinator;
	double _initialHeight;

}

@property (nonatomic,__weak,readonly) WFDrawerGestureCoordinator * gestureCoordinator;              //@synthesize gestureCoordinator=_gestureCoordinator - In the implementation block
@property (nonatomic,readonly) double initialHeight;                                                //@synthesize initialHeight=_initialHeight - In the implementation block
@property (assign,nonatomic) BOOL tracking;                                                         //@synthesize tracking=_tracking - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double minTranslationY;                                                        //@synthesize minTranslationY=_minTranslationY - In the implementation block
@property (readonly) double maxTranslationY;                                                        //@synthesize maxTranslationY=_maxTranslationY - In the implementation block
-(double)currentHeight;
-(void)setTracking:(BOOL)arg1 ;
-(BOOL)tracking;
-(double)initialHeight;
-(void)beginDragging;
-(void)endDraggingWithAnimation:(id)arg1 ;
-(void)endDragging;
-(void)updateDragForVerticalTranslation:(double)arg1 ;
-(double)minTranslationY;
-(double)maxTranslationY;
-(id)initWithGestureCoordinator:(id)arg1 ;
-(WFDrawerGestureCoordinator *)gestureCoordinator;
@end

