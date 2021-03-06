//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATElementManagerViewController.h"

#import "SCATMenuObserver-Protocol.h"
#import "SCATModernMenuGestureFreehandSheetDelegate-Protocol.h"

@class NSArray, NSString, NSTimer, SCATGestureDrawingElementManager, SCATGestureDrawingView, SCATMenu;
@protocol SCATGestureDrawingViewDelegate;

@interface SCATGestureDrawingViewController : SCATElementManagerViewController <SCATMenuObserver, SCATModernMenuGestureFreehandSheetDelegate>
{
    SCATMenu *_menu;	// 8 = 0x8
    _Bool _pressesOnMoveStart;	// 16 = 0x10
    _Bool _liftsOnMoveEnd;	// 17 = 0x11
    _Bool _areFingersPressed;	// 18 = 0x12
    _Bool _isRotating;	// 19 = 0x13
    _Bool _isCurving;	// 20 = 0x14
    id <SCATGestureDrawingViewDelegate> _delegate;	// 24 = 0x18
    double _angle;	// 32 = 0x20
    double _velocity;	// 40 = 0x28
    double _curvature;	// 48 = 0x30
    NSArray *_fingerPositions;	// 56 = 0x38
    NSTimer *_moveTimer;	// 64 = 0x40
    NSTimer *_generalTimer;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000a71b4
@property(nonatomic) _Bool isCurving; // @synthesize isCurving=_isCurving;
@property(nonatomic) _Bool isRotating; // @synthesize isRotating=_isRotating;
@property(retain, nonatomic) NSTimer *generalTimer; // @synthesize generalTimer=_generalTimer;
@property(retain, nonatomic) NSTimer *moveTimer; // @synthesize moveTimer=_moveTimer;
@property(retain, nonatomic) NSArray *fingerPositions; // @synthesize fingerPositions=_fingerPositions;
@property(nonatomic) double curvature; // @synthesize curvature=_curvature;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) _Bool areFingersPressed; // @synthesize areFingersPressed=_areFingersPressed;
@property(nonatomic) _Bool liftsOnMoveEnd; // @synthesize liftsOnMoveEnd=_liftsOnMoveEnd;
@property(nonatomic) _Bool pressesOnMoveStart; // @synthesize pressesOnMoveStart=_pressesOnMoveStart;
@property(nonatomic) __weak id <SCATGestureDrawingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_canShowWhileLocked;	// IMP=0x00000001000a7080
- (_Bool)allowsDwellSelection;	// IMP=0x00000001000a7000
- (void)scannerWillMakeManagerInactive:(id)arg1;	// IMP=0x00000001000a6fac
- (void)scannerWillMakeManagerActive:(id)arg1;	// IMP=0x00000001000a6ea0
- (id)elementBefore:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x00000001000a6e08
- (id)elementAfter:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x00000001000a6d70
- (id)lastElementWithOptions:(int *)arg1;	// IMP=0x00000001000a6d14
- (id)firstElementWithOptions:(int *)arg1;	// IMP=0x00000001000a6cb8
- (id)_currentElementProvider;	// IMP=0x00000001000a6c30
- (void)menuDidFinishTransition:(id)arg1;	// IMP=0x00000001000a6c24
- (void)menuWillDisappear:(id)arg1;	// IMP=0x00000001000a6bdc
- (void)toggleTouchForFreehandSheet:(id)arg1;	// IMP=0x00000001000a6ba4
- (void)decreaseVelocityForFreehandSheet:(id)arg1;	// IMP=0x00000001000a6b58
- (void)increaseVelocityForFreehandSheet:(id)arg1;	// IMP=0x00000001000a6b10
- (void)bendLeftForFreehandSheet:(id)arg1;	// IMP=0x00000001000a6ab0
- (void)bendRightForFreehandSheet:(id)arg1;	// IMP=0x00000001000a6a50
- (void)straightenForFreehandSheet:(id)arg1;	// IMP=0x00000001000a6a40
- (void)rotate90ClockwiseForFreehandSheet:(id)arg1;	// IMP=0x00000001000a6a00
- (void)rotate90CounterclockwiseForFreehandSheet:(id)arg1;	// IMP=0x00000001000a69c0
- (void)rotateClockwiseForFreehandSheet:(id)arg1;	// IMP=0x00000001000a6960
- (void)rotateCounterclockwiseForFreehandSheet:(id)arg1;	// IMP=0x00000001000a6900
- (void)bendForFreehandSheet:(id)arg1;	// IMP=0x00000001000a6884
- (void)rotateForFreehandSheet:(id)arg1;	// IMP=0x00000001000a67cc
- (void)stopForFreehandSheet:(id)arg1;	// IMP=0x00000001000a6740
- (void)autoLiftToggledForFreehandSheet:(id)arg1;	// IMP=0x00000001000a6708
- (void)autoPressToggledForFreehandSheet:(id)arg1;	// IMP=0x00000001000a66d0
- (void)moveForFreehandSheet:(id)arg1;	// IMP=0x00000001000a6574
- (void)moveToolbarForFreehandSheet:(id)arg1;	// IMP=0x00000001000a651c
- (void)freehandSheet:(id)arg1 didHighlightStraighten:(_Bool)arg2;	// IMP=0x00000001000a64ac
- (void)freehandSheet:(id)arg1 didHighlightBendLeft:(_Bool)arg2;	// IMP=0x00000001000a643c
- (void)freehandSheet:(id)arg1 didHighlightBendRight:(_Bool)arg2;	// IMP=0x00000001000a63cc
- (void)freehandSheet:(id)arg1 didHighlightRotateCW90:(_Bool)arg2;	// IMP=0x00000001000a62fc
- (void)freehandSheet:(id)arg1 didHighlightRotateCCW90:(_Bool)arg2;	// IMP=0x00000001000a622c
- (void)freehandSheet:(id)arg1 didHighlightRotateCW:(_Bool)arg2;	// IMP=0x00000001000a61bc
- (void)freehandSheet:(id)arg1 didHighlightRotateCCW:(_Bool)arg2;	// IMP=0x00000001000a614c
- (void)freehandSheet:(id)arg1 didHighlightBend:(_Bool)arg2;	// IMP=0x00000001000a5fdc
- (void)freehandSheet:(id)arg1 didHighlightRotate:(_Bool)arg2;	// IMP=0x00000001000a5eb8
- (void)freehandSheet:(id)arg1 didHighlightMove:(_Bool)arg2;	// IMP=0x00000001000a5e4c
- (void)didPopFreehandSheet:(id)arg1;	// IMP=0x00000001000a5d50
- (double)curvatureForFreehandSheet:(id)arg1;	// IMP=0x00000001000a5d44
- (double)angleForFreehandSheet:(id)arg1;	// IMP=0x00000001000a5d38
- (_Bool)isAutoLiftOnForFreehandSheet:(id)arg1;	// IMP=0x00000001000a5d2c
- (_Bool)isAutoPressOnForFreehandSheet:(id)arg1;	// IMP=0x00000001000a5d20
- (_Bool)isTouchOnForFreehandSheet:(id)arg1;	// IMP=0x00000001000a5d14
- (void)_cleanUp;	// IMP=0x00000001000a5c94
- (void)_move;	// IMP=0x00000001000a5c00
- (void)_curveOnLeft:(_Bool)arg1 withCurveRadius:(double)arg2;	// IMP=0x00000001000a591c
- (void)_moveStraight;	// IMP=0x00000001000a5694
- (struct CGPoint)_fingerCenter;	// IMP=0x00000001000a5510
- (void)_endMovementAndForceLift:(_Bool)arg1;	// IMP=0x00000001000a5494
- (void)_cancelMoveTimerAndEndMove:(_Bool)arg1;	// IMP=0x00000001000a53e8
- (_Bool)_isPerformingMove;	// IMP=0x00000001000a53ac
- (void)_decreaseCurvature;	// IMP=0x00000001000a539c
- (void)_increaseCurvature;	// IMP=0x00000001000a538c
- (void)_adjustCurvatureWithDirection:(double)arg1;	// IMP=0x00000001000a52ac
- (void)_rotateCounterclockwise;	// IMP=0x00000001000a526c
- (void)_rotateClockwise;	// IMP=0x00000001000a522c
- (void)_endGeneralTimer;	// IMP=0x00000001000a5108
- (void)_startGeneralTimerWithSelector:(SEL)arg1 actionName:(id)arg2;	// IMP=0x00000001000a500c
- (void)_uninstallStopButton;	// IMP=0x00000001000a4f14
- (void)_installStopButtonForActionName:(id)arg1;	// IMP=0x00000001000a4db8
- (double)_previewDistance;	// IMP=0x00000001000a47d4
@property(readonly, nonatomic) SCATGestureDrawingElementManager *drawingElementManager;
- (void)_pushFreehandSheetOfClass:(Class)arg1;	// IMP=0x00000001000a472c
@property(readonly, nonatomic) SCATGestureDrawingView *mainView;
- (void)viewDidLoad;	// IMP=0x00000001000a461c
- (void)loadView;	// IMP=0x00000001000a45d8
- (void)orientationDidChange:(id)arg1;	// IMP=0x00000001000a45cc
- (void)_updateMainViewToolbarFrame;	// IMP=0x00000001000a44f4
- (void)dealloc;	// IMP=0x00000001000a4498
- (id)initWithElementManager:(id)arg1 startingFingerPositions:(id)arg2 menu:(id)arg3;	// IMP=0x00000001000a41cc
- (id)init;	// IMP=0x00000001000a4180

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

