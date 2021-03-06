/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIKeyboardTextSelectionGestureControllerDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, UITextMagnifierTimeWeightedPoint, UIDelayedAction, _UIStatesFeedbackGenerator;

@interface _UIKeyboardTextSelectionGestureController : NSObject {

	NSMutableArray* _deallocHandlers;
	BOOL _wasScrollingEnabled;
	BOOL _wasNestedPinchingDisabled;
	BOOL _suppressTwoFingerPan;
	BOOL _didSuppressSelectionGrabbers;
	BOOL _isLongPressing;
	BOOL _isPanning;
	BOOL _isSpacePan;
	BOOL _hadAddedTouch;
	BOOL _didFloatCursor;
	int _previousForcePressCount;
	id<_UIKeyboardTextSelectionGestureControllerDelegate> _delegate;
	double _lastPressTimestamp;
	UITextMagnifierTimeWeightedPoint* _weightedPoint;
	double _twoFingerTapTimestamp;
	long long _previousRepeatedGranularity;
	long long _panGestureState;
	double _spacePanDistance;
	NSMutableArray* _activeGestures;
	UIDelayedAction* _tapLogTimer;
	UIDelayedAction* _longForcePressAction;
	_UIStatesFeedbackGenerator* _feedbackBehaviour;
	CGPoint _lastPanTranslation;
	CGPoint _accumulatedAcceleration;
	CGPoint _accumulatedBounding;
	CGPoint _cursorLocationBase;

}

@property (assign,nonatomic) CGPoint lastPanTranslation;                                                  //@synthesize lastPanTranslation=_lastPanTranslation - In the implementation block
@property (assign,nonatomic) CGPoint accumulatedAcceleration;                                             //@synthesize accumulatedAcceleration=_accumulatedAcceleration - In the implementation block
@property (assign,nonatomic) CGPoint accumulatedBounding;                                                 //@synthesize accumulatedBounding=_accumulatedBounding - In the implementation block
@property (assign,nonatomic) double lastPressTimestamp;                                                   //@synthesize lastPressTimestamp=_lastPressTimestamp - In the implementation block
@property (nonatomic,retain) UITextMagnifierTimeWeightedPoint * weightedPoint;                            //@synthesize weightedPoint=_weightedPoint - In the implementation block
@property (assign,nonatomic) double twoFingerTapTimestamp;                                                //@synthesize twoFingerTapTimestamp=_twoFingerTapTimestamp - In the implementation block
@property (assign,nonatomic) long long previousRepeatedGranularity;                                       //@synthesize previousRepeatedGranularity=_previousRepeatedGranularity - In the implementation block
@property (assign,nonatomic) long long panGestureState;                                                   //@synthesize panGestureState=_panGestureState - In the implementation block
@property (assign,nonatomic) BOOL wasScrollingEnabled;                                                    //@synthesize wasScrollingEnabled=_wasScrollingEnabled - In the implementation block
@property (assign,nonatomic) BOOL wasNestedPinchingDisabled;                                              //@synthesize wasNestedPinchingDisabled=_wasNestedPinchingDisabled - In the implementation block
@property (assign,nonatomic) BOOL suppressTwoFingerPan;                                                   //@synthesize suppressTwoFingerPan=_suppressTwoFingerPan - In the implementation block
@property (assign,nonatomic) BOOL didSuppressSelectionGrabbers;                                           //@synthesize didSuppressSelectionGrabbers=_didSuppressSelectionGrabbers - In the implementation block
@property (assign,nonatomic) BOOL isLongPressing;                                                         //@synthesize isLongPressing=_isLongPressing - In the implementation block
@property (assign,nonatomic) BOOL isPanning;                                                              //@synthesize isPanning=_isPanning - In the implementation block
@property (assign,nonatomic) BOOL isSpacePan;                                                             //@synthesize isSpacePan=_isSpacePan - In the implementation block
@property (assign,nonatomic) BOOL hadAddedTouch;                                                          //@synthesize hadAddedTouch=_hadAddedTouch - In the implementation block
@property (assign,nonatomic) double spacePanDistance;                                                     //@synthesize spacePanDistance=_spacePanDistance - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeGestures;                                             //@synthesize activeGestures=_activeGestures - In the implementation block
@property (assign,nonatomic) BOOL didFloatCursor;                                                         //@synthesize didFloatCursor=_didFloatCursor - In the implementation block
@property (assign,nonatomic) CGPoint cursorLocationBase;                                                  //@synthesize cursorLocationBase=_cursorLocationBase - In the implementation block
@property (nonatomic,retain) UIDelayedAction * tapLogTimer;                                               //@synthesize tapLogTimer=_tapLogTimer - In the implementation block
@property (assign,nonatomic) int previousForcePressCount;                                                 //@synthesize previousForcePressCount=_previousForcePressCount - In the implementation block
@property (nonatomic,retain) UIDelayedAction * longForcePressAction;                                      //@synthesize longForcePressAction=_longForcePressAction - In the implementation block
@property (nonatomic,retain) _UIStatesFeedbackGenerator * feedbackBehaviour;                              //@synthesize feedbackBehaviour=_feedbackBehaviour - In the implementation block
@property (assign,nonatomic) id<_UIKeyboardTextSelectionGestureControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id<_UIKeyboardTextSelectionGestureControllerDelegate>)delegate;
-(void)setDelegate:(id<_UIKeyboardTextSelectionGestureControllerDelegate>)arg1 ;
-(void)setTwoFingerTapTimestamp:(double)arg1 ;
-(void)willRemoveSelectionController;
-(void)didRemoveSelectionController;
-(id)addTwoFingerTextSelectionInteractionsToView:(id)arg1 ;
-(id)addOneFingerTextSelectionInteractionsToView:(id)arg1 ;
-(id)addLongPressTextSelectionInteractionsToView:(id)arg1 ;
-(void)configureOneFingerForcePressRecognizer:(id)arg1 ;
-(void)configureTwoFingerPanGestureRecognizer:(id)arg1 ;
-(void)configureTwoFingerTapGestureRecognizer:(id)arg1 ;
-(void)removeDeallocationHandler:(id)arg1 ;
-(id)addDeallocationHandler:(/*^block*/id)arg1 ;
-(BOOL)oneFingerForcePressShouldFailWithoutForce;
-(BOOL)oneFingerForcePressShouldCancelTouchesInView;
-(void)enableEnclosingScrollViewNestedPinching;
-(double)oneFingerForcePressMinimumDuration;
-(double)oneFingerForcePressAllowableMovement;
-(BOOL)isPanning;
-(id)selectionController;
-(BOOL)didFloatCursor;
-(void)setIsLongPressing:(BOOL)arg1 ;
-(void)setIsPanning:(BOOL)arg1 ;
-(void)setIsSpacePan:(BOOL)arg1 ;
-(void)setDidFloatCursor:(BOOL)arg1 ;
-(NSMutableArray *)activeGestures;
-(long long)panGestureState;
-(void)setPanGestureState:(long long)arg1 ;
-(void)setPreviousForcePressCount:(int)arg1 ;
-(CGPoint)lastPanTranslation;
-(CGPoint)accumulatedAcceleration;
-(void)setAccumulatedAcceleration:(CGPoint)arg1 ;
-(CGPoint)cursorLocationBase;
-(CGPoint)accumulatedBounding;
-(void)setAccumulatedBounding:(CGPoint)arg1 ;
-(_UIStatesFeedbackGenerator *)feedbackBehaviour;
-(UITextMagnifierTimeWeightedPoint *)weightedPoint;
-(long long)previousRepeatedGranularity;
-(void)setCursorLocationBase:(CGPoint)arg1 ;
-(UIDelayedAction *)longForcePressAction;
-(void)setLongForcePressAction:(UIDelayedAction *)arg1 ;
-(void)setPreviousRepeatedGranularity:(long long)arg1 ;
-(int)previousForcePressCount;
-(UIDelayedAction *)tapLogTimer;
-(void)setTapLogTimer:(UIDelayedAction *)arg1 ;
-(void)setLastPanTranslation:(CGPoint)arg1 ;
-(double)twoFingerTapTimestamp;
-(void)setHadAddedTouch:(BOOL)arg1 ;
-(BOOL)suppressTwoFingerPan;
-(void)setSuppressTwoFingerPan:(BOOL)arg1 ;
-(void)setSpacePanDistance:(double)arg1 ;
-(BOOL)isSpacePan;
-(double)spacePanDistance;
-(BOOL)hadAddedTouch;
-(BOOL)isLongPressing;
-(double)lastPressTimestamp;
-(void)setLastPressTimestamp:(double)arg1 ;
-(void)redisableEnclosingScrollViewNestedPinching;
-(BOOL)didSuppressSelectionGrabbers;
-(void)setDidSuppressSelectionGrabbers:(BOOL)arg1 ;
-(void)_cleanupDeadGesturesIfNecessary;
-(void)setWasNestedPinchingDisabled:(BOOL)arg1 ;
-(BOOL)wasNestedPinchingDisabled;
-(BOOL)shouldAddForceGesture;
-(BOOL)_longPressAllowedForView:(id)arg1 ;
-(Class)textInteractionClass;
-(BOOL)allowOneFingerDeepPress;
-(void)setWeightedPoint:(UITextMagnifierTimeWeightedPoint *)arg1 ;
-(BOOL)wasScrollingEnabled;
-(void)setWasScrollingEnabled:(BOOL)arg1 ;
-(void)setActiveGestures:(NSMutableArray *)arg1 ;
-(void)setFeedbackBehaviour:(_UIStatesFeedbackGenerator *)arg1 ;
@end

