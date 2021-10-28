/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UITextDropPasteSession.h>

@protocol UITextPasteSessionDelegate, _UITextPasteProgressSupport;
@class UITextPasteController, UITextPasteCoordinator, UITextRange, NSAttributedString, NSArray, NSString;

@interface _UITextPasteSession : NSObject <UITextDropPasteSession> {

	BOOL _animating;
	id<UITextPasteSessionDelegate> _delegate;
	UITextPasteController* _controller;
	UITextPasteCoordinator* _coordinator;
	UITextRange* _range;
	id<_UITextPasteProgressSupport> _progressSupport;
	NSAttributedString* _pasteResult;
	NSArray* _originalItems;
	UITextRange* _hiddenRange;

}

@property (assign,nonatomic,__weak) UITextPasteController * controller;                    //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) UITextPasteCoordinator * coordinator;                         //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) UITextRange * range;                                          //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) id<_UITextPasteProgressSupport> progressSupport;              //@synthesize progressSupport=_progressSupport - In the implementation block
@property (nonatomic,retain) NSAttributedString * pasteResult;                             //@synthesize pasteResult=_pasteResult - In the implementation block
@property (nonatomic,copy) NSArray * originalItems;                                        //@synthesize originalItems=_originalItems - In the implementation block
@property (nonatomic,retain) UITextRange * hiddenRange;                                    //@synthesize hiddenRange=_hiddenRange - In the implementation block
@property (getter=isAnimating,nonatomic,readonly) BOOL animating;                          //@synthesize animating=_animating - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<UITextPasteSessionDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(id<UITextPasteSessionDelegate>)delegate;
-(void)setDelegate:(id<UITextPasteSessionDelegate>)arg1 ;
-(UITextRange *)range;
-(BOOL)isAnimating;
-(void)setRange:(UITextRange *)arg1 ;
-(void)setController:(UITextPasteController *)arg1 ;
-(UITextPasteController *)controller;
-(NSArray *)originalItems;
-(void)animationCompleted;
-(NSAttributedString *)pasteResult;
-(id)positionedPasteResult;
-(void)setCoordinator:(UITextPasteCoordinator *)arg1 ;
-(void)setProgressSupport:(id<_UITextPasteProgressSupport>)arg1 ;
-(void)setOriginalItems:(NSArray *)arg1 ;
-(void)animationStarted;
-(void)setPasteResult:(NSAttributedString *)arg1 ;
-(void)setHiddenRange:(UITextRange *)arg1 ;
-(UITextPasteCoordinator *)coordinator;
-(UITextRange *)hiddenRange;
-(id<_UITextPasteProgressSupport>)progressSupport;
@end
