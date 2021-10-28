/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/AKPopoverAnnotationEditor.h>

@protocol AKAnnotationEditorDelegate;
@class AKTouchOutsideViewGestureRecognizer, AKAnnotation, AKPageController, AKAnnotationTheme, UIView, NSString, IMTheme;

@interface AKAnnotationPopoverViewController : UIViewController <UIGestureRecognizerDelegate, AKPopoverAnnotationEditor> {

	AKTouchOutsideViewGestureRecognizer* mHideOnTouchGestureRecognizer;
	AKAnnotation* mAnnotation;
	AKPageController* mAnnotationPageController;
	AKAnnotationTheme* mAnnotationTheme;
	int mPosition;
	id mObserver;
	BOOL _editsOnLaunch;
	UIView* _presentationView;
	id<AKAnnotationEditorDelegate> _delegate;
	CGRect _presentationRect;

}

@property (nonatomic,retain) UIView * presentationView;                                   //@synthesize presentationView=_presentationView - In the implementation block
@property (assign,nonatomic) CGRect presentationRect;                                     //@synthesize presentationRect=_presentationRect - In the implementation block
@property (assign,nonatomic,__weak) id<AKAnnotationEditorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int position; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AKAnnotation * annotation; 
@property (nonatomic,retain) AKPageController * annotationPageController; 
@property (nonatomic,retain) AKAnnotationTheme * annotationTheme; 
@property (assign,nonatomic) BOOL editsOnLaunch;                                          //@synthesize editsOnLaunch=_editsOnLaunch - In the implementation block
@property (nonatomic,retain) IMTheme * theme; 
-(id)init;
-(void)dealloc;
-(id<AKAnnotationEditorDelegate>)delegate;
-(void)setDelegate:(id<AKAnnotationEditorDelegate>)arg1 ;
-(int)position;
-(void)setPosition:(int)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)viewDidLoad;
-(void)didReceiveMemoryWarning;
-(void)hide;
-(UIView *)presentationView;
-(void)didShow;
-(void)willShow;
-(AKAnnotation *)annotation;
-(CGRect)presentationRect;
-(void)setAnnotation:(AKAnnotation *)arg1 ;
-(void)releaseOutlets;
-(AKAnnotationTheme *)annotationTheme;
-(void)presentFromRect:(CGRect)arg1 view:(id)arg2 ;
-(void)setAnnotationTheme:(AKAnnotationTheme *)arg1 ;
-(BOOL)canPresentInPosition:(int)arg1 ;
-(void)setAnnotationPageController:(AKPageController *)arg1 ;
-(CGRect)p_containerFrameForView:(id)arg1 ;
-(void)setPresentationView:(UIView *)arg1 ;
-(void)setPresentationRect:(CGRect)arg1 ;
-(void)popInAnimation:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)willHide;
-(void)hideAnimation:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)didHide;
-(AKPageController *)annotationPageController;
-(BOOL)editsOnLaunch;
-(void)setEditsOnLaunch:(BOOL)arg1 ;
-(int)willPresentInPosition:(CGRect)arg1 view:(id)arg2 ;
@end
