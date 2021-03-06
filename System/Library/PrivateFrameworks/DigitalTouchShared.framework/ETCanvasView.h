/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ETMessageDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol ETCanvasViewDelegate, ETMessageTimeSource;
@class NSMutableSet, ETGLSketchView, ETTapMessage, ETHeartbeatMessage, NSTimer, UILongPressGestureRecognizer, UITouch, NSMutableDictionary, UITapGestureRecognizer, ETKissMessage, ETAngerMessage, SKScene, DTSSceneView, UIImageView, UIView, AVPlayerLayer, UIColor, ETMessage, NSString;

@interface ETCanvasView : UIView <ETMessageDelegate, UIGestureRecognizerDelegate> {

	NSMutableSet* _playingMessages;
	ETGLSketchView* _currentSketchView;
	ETTapMessage* _currentTaps;
	ETHeartbeatMessage* _currentHeartbeat;
	NSTimer* _heartbeatDurationTimer;
	UILongPressGestureRecognizer* _heartbeatRecognizer;
	CGPoint _heartbeatStartCenter;
	double _lastActivityTimestamp;
	double _touchesBeganTimestamp;
	NSTimer* _sendMessageTimer;
	NSTimer* _idleTimer;
	BOOL _setAlwaysPaused;
	unsigned short _messageType;
	CGPoint _lastPt;
	UITouch* _drawingTouch;
	BOOL _drawingTouchStartedStroke;
	double _drawingTouchMovedDistance;
	CGRect _ignoredTouchesRect;
	BOOL _didIgnoreTouchesBegan;
	BOOL _ignoreTouchesUntilAllTouchesEnded;
	NSMutableSet* _touchesDown;
	NSMutableDictionary* _messageIdentifierToDoodleView;
	UITapGestureRecognizer* _tapRecognizer;
	NSTimer* _fastTapAllowableMovementTimer;
	double _lastFastTapTimestamp;
	UITapGestureRecognizer* _kissRecognizer;
	ETKissMessage* _currentKissMessage;
	UILongPressGestureRecognizer* _angerRecognizer;
	ETAngerMessage* _currentAnger;
	NSTimer* _angerDurationLimitTimer;
	double _wispDelay;
	BOOL _sketchDidReachSizeLimit;
	SKScene* _scene;
	DTSSceneView* _sceneView;
	UIImageView* _photoView;
	UIView* _videoView;
	AVPlayerLayer* _videoLayer;
	BOOL _canComposeHeartbeat;
	BOOL _canComposeTap;
	BOOL _canComposeKiss;
	BOOL _canComposeAnger;
	BOOL _isComposing;
	BOOL _usesMediaAppearance;
	BOOL _paused;
	BOOL _useFastVerticalWisp;
	BOOL _angerUsesForceTouch;
	id<ETCanvasViewDelegate> _canvasDelegate;
	id<ETMessageTimeSource> _timeSource;
	UIColor* _drawingColor;
	ETMessage* _parentMessage;

}

@property (assign,nonatomic,__weak) id<ETCanvasViewDelegate> canvasDelegate;              //@synthesize canvasDelegate=_canvasDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<ETMessageTimeSource> timeSource;                   //@synthesize timeSource=_timeSource - In the implementation block
@property (nonatomic,retain) UIColor * drawingColor;                                      //@synthesize drawingColor=_drawingColor - In the implementation block
@property (assign,nonatomic) BOOL canComposeHeartbeat;                                    //@synthesize canComposeHeartbeat=_canComposeHeartbeat - In the implementation block
@property (assign,nonatomic) BOOL canComposeTap;                                          //@synthesize canComposeTap=_canComposeTap - In the implementation block
@property (assign,nonatomic) BOOL canComposeKiss;                                         //@synthesize canComposeKiss=_canComposeKiss - In the implementation block
@property (assign,nonatomic) BOOL canComposeAnger;                                        //@synthesize canComposeAnger=_canComposeAnger - In the implementation block
@property (nonatomic,readonly) BOOL isComposing;                                          //@synthesize isComposing=_isComposing - In the implementation block
@property (assign,nonatomic) BOOL usesMediaAppearance;                                    //@synthesize usesMediaAppearance=_usesMediaAppearance - In the implementation block
@property (nonatomic,retain) ETMessage * parentMessage;                                   //@synthesize parentMessage=_parentMessage - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                 //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) BOOL useFastVerticalWisp;                                    //@synthesize useFastVerticalWisp=_useFastVerticalWisp - In the implementation block
@property (assign,nonatomic) BOOL angerUsesForceTouch;                                    //@synthesize angerUsesForceTouch=_angerUsesForceTouch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isPaused;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(UIColor *)drawingColor;
-(void)_tapRecognized:(id)arg1 ;
-(void)_updateVideoViewFrame;
-(void)setUseFastVerticalWisp:(BOOL)arg1 ;
-(BOOL)useFastVerticalWisp;
-(void)messageWillReachSizeLimit:(id)arg1 ;
-(id<ETMessageTimeSource>)timeSource;
-(ETMessage *)parentMessage;
-(void)messageWillStopPlaying:(id)arg1 ;
-(void)messageDidStopPlaying:(id)arg1 ;
-(void)setParentMessage:(ETMessage *)arg1 ;
-(void)_heartbeatRecognized:(id)arg1 ;
-(void)_kissRecognized:(id)arg1 ;
-(void)setForceTouchEnabled:(BOOL)arg1 ;
-(void)_configureAngerRecognizer;
-(void)_updatePhotoViewFrame;
-(BOOL)_sketchInProgress;
-(void)setTimeSource:(id<ETMessageTimeSource>)arg1 ;
-(void)_createSketchViewWithColor:(id)arg1 time:(double)arg2 message:(id)arg3 ;
-(void)_setIsComposingMessageOfType:(unsigned short)arg1 ;
-(void)endMessageComposition;
-(void)_startDoodleMessageCompositionAtTime:(double)arg1 ;
-(void)_startCheckForIdleTimer;
-(void)_updateRecognizersAtEndOfComposition;
-(void)_stopCheckForIdleTimer;
-(void)_clearSendMessageTimer;
-(BOOL)isComposing;
-(void)_startSendMessageTimer;
-(void)_setSketchesPaused:(BOOL)arg1 ;
-(void)clearCanvasAnimated:(BOOL)arg1 ;
-(void)_animateOutSketchView:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_clearDoodleViewForMessage:(id)arg1 ;
-(void)_checkForIdle;
-(BOOL)_isTapTooRecentAfterKissGesture;
-(BOOL)_canComposeExclusiveMessage;
-(void)_fastTapAllowableMovementTimerFired;
-(void)_startFastTapAllowableMovementTimer;
-(CGPoint)_viewPointNormalizedInSceneSpace:(CGPoint)arg1 ;
-(void)_endMessage:(id)arg1 withSend:(BOOL)arg2 ;
-(void)_sendAnger;
-(CGPoint)_normalizedGesturePoint:(id)arg1 ;
-(void)_showAngerAtPoint:(CGPoint)arg1 ;
-(void)_hideAnger;
-(void)_angerDurationLimitTimerFired;
-(void)_sendKiss;
-(double)_angleOfRotationBetweenTwoFingers:(id)arg1 ;
-(BOOL)_tapsInProgress;
-(void)handleTapAtX:(float)arg1 Y:(float)arg2 color:(id)arg3 time:(double)arg4 isRemote:(BOOL)arg5 ;
-(BOOL)_areRecognizersTrackingMultipleFingers;
-(void)_sendTaps;
-(void)handlePanAtX:(float)arg1 Y:(float)arg2 color:(id)arg3 time:(double)arg4 state:(long long)arg5 isRemote:(BOOL)arg6 ;
-(void)_doodleEndedWithTouches:(id)arg1 cancelled:(BOOL)arg2 ;
-(BOOL)isComposingHeartbeat;
-(void)handleDotAtX:(float)arg1 Y:(float)arg2 color:(id)arg3 time:(double)arg4 isRemote:(BOOL)arg5 ;
-(void)sendCurrentMessage;
-(id<ETCanvasViewDelegate>)canvasDelegate;
-(BOOL)_sendMessageTimerFired;
-(void)_sendHeartbeat;
-(void)_sendSketch;
-(void)_showHeartbeatAtNormalizedPoint:(CGPoint)arg1 rotation:(double)arg2 ;
-(void)_hideHeartbeat;
-(void)_hideHeartbeatTimerFired;
-(void)_angerRecognized:(id)arg1 ;
-(void)showPhotoForImage:(id)arg1 ;
-(void)hidePhoto;
-(void)showVideoForPlayer:(id)arg1 ;
-(void)hideVideo;
-(BOOL)isComposingSketch;
-(void)startDoodleMessageComposition;
-(BOOL)_sketchesPaused;
-(void)setAlwaysPaused:(BOOL)arg1 ;
-(void)wispVisibleSketchViewsWithCompletion:(/*^block*/id)arg1 ;
-(void)setDrawingColor:(UIColor *)arg1 ;
-(void)updateIgnoredTouchesRectForStatusBarSize:(CGSize)arg1 ;
-(id)composedSketchMessage;
-(void)setCanComposeTap:(BOOL)arg1 ;
-(void)setCanComposeKiss:(BOOL)arg1 ;
-(void)setCanComposeAnger:(BOOL)arg1 ;
-(void)setCanComposeHeartbeat:(BOOL)arg1 ;
-(void)updateCurrentMessageWithHeartRate:(unsigned long long)arg1 ;
-(void)playTestStrokeWithColor:(id)arg1 duration:(double)arg2 ;
-(void)playMessage:(id)arg1 ;
-(void)setUsesMediaAppearance:(BOOL)arg1 ;
-(void)setCanvasDelegate:(id<ETCanvasViewDelegate>)arg1 ;
-(BOOL)canComposeHeartbeat;
-(BOOL)canComposeTap;
-(BOOL)canComposeKiss;
-(BOOL)canComposeAnger;
-(BOOL)usesMediaAppearance;
-(BOOL)angerUsesForceTouch;
-(void)setAngerUsesForceTouch:(BOOL)arg1 ;
@end

