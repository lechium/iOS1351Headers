/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotoEditToolController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class CEKBadgeTextView, NSArray, UITapGestureRecognizer, NSMutableArray, PURedeyeToolControllerSpec, NSString;

@interface PURedeyeToolController : PUPhotoEditToolController <UIGestureRecognizerDelegate> {

	CEKBadgeTextView* _instructionLabel;
	NSArray* _instructionLabelConstraints;
	CEKBadgeTextView* _failureLabel;
	NSArray* _failureLabelConstraints;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSMutableArray* _knownCorrections;
	BOOL _failureAnimationIsInProgress;
	BOOL _isModelChangeLocal;

}

@property (nonatomic,readonly) PURedeyeToolControllerSpec * toolControllerSpec; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)localizedName;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_handleTapGesture:(id)arg1 ;
-(void)updateViewConstraints;
-(BOOL)wantsSecondaryToolbarVisible;
-(id)toolbarIcon;
-(id)centerToolbarView;
-(BOOL)wantsZoomAndPanEnabled;
-(void)didBecomeActiveTool;
-(long long)toolControllerTag;
-(void)compositionControllerDidChangeForAdjustments:(id)arg1 ;
-(void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didResignActiveTool;
-(id)selectedToolbarIcon;
-(CGPoint)_extractRedEyePointFromCorrectionDictionary:(id)arg1 ;
-(void)flashAutoRedEyeCorrections;
-(void)_loadCorrectionsFromModelAnimated:(BOOL)arg1 ;
-(void)_showChangeIndicatorAtPoint:(CGPoint)arg1 isFailure:(BOOL)arg2 ;
-(void)_animateFailureAppearance;
-(void)_animateInstructionAppearance;
-(void)_handleRedeyeButton:(id)arg1 ;
-(BOOL)_removeCorrectionAtPoint:(CGPoint)arg1 ;
-(void)_correctRedEyeAtPoint:(CGPoint)arg1 ;
@end

