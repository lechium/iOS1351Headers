/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class UITextView, UIBarButtonItem;

@interface _PXConsoleViewController : UIViewController {

	BOOL _toolBarWasHidden;
	UITextView* __textView;
	UIBarButtonItem* __shareBarButtonItem;

}

@property (nonatomic,readonly) UITextView * _textView;                             //@synthesize _textView=__textView - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * _shareBarButtonItem;              //@synthesize _shareBarButtonItem=__shareBarButtonItem - In the implementation block
@property (assign,nonatomic) BOOL toolBarWasHidden;                                //@synthesize toolBarWasHidden=_toolBarWasHidden - In the implementation block
-(id)init;
-(UITextView *)_textView;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)appendOutput:(id)arg1 ;
-(void)_presentSharingViewController:(id)arg1 ;
-(BOOL)toolBarWasHidden;
-(void)setToolBarWasHidden:(BOOL)arg1 ;
-(UIBarButtonItem *)_shareBarButtonItem;
@end
