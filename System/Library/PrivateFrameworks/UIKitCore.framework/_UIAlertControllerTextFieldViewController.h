/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewController.h>

@protocol _UIAlertControllerTextFieldViewControllerContaining;
@class NSMutableArray, UIAlertControllerVisualStyle, UICollectionViewFlowLayout, NSArray;

@interface _UIAlertControllerTextFieldViewController : UICollectionViewController {

	NSMutableArray* textFieldViews;
	NSMutableArray* textFields;
	BOOL _textFieldsCanBecomeFirstResponder;
	UIAlertControllerVisualStyle* _visualStyle;
	UICollectionViewFlowLayout* _collectionViewLayout;
	BOOL _hidden;
	id<_UIAlertControllerTextFieldViewControllerContaining> _container;

}

@property (assign,nonatomic,__weak) id<_UIAlertControllerTextFieldViewControllerContaining> container;              //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) BOOL textFieldsCanBecomeFirstResponder; 
@property (assign,nonatomic) UIAlertControllerVisualStyle * visualStyle; 
@property (readonly) NSArray * textFields; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                                           //@synthesize hidden=_hidden - In the implementation block
-(id)init;
-(id<_UIAlertControllerTextFieldViewControllerContaining>)container;
-(void)setContainer:(id<_UIAlertControllerTextFieldViewControllerContaining>)arg1 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(void)setTextFieldsCanBecomeFirstResponder:(BOOL)arg1 ;
-(NSArray *)textFields;
-(id)textFieldAtIndex:(long long)arg1 ;
-(UIAlertControllerVisualStyle *)visualStyle;
-(void)setVisualStyle:(UIAlertControllerVisualStyle *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)textFieldsCanBecomeFirstResponder;
-(void)viewWillLayoutSubviews;
-(void)updateTextFieldStyle;
-(void)_returnKeyPressedInTextField:(id)arg1 ;
-(void)_updatePreferredContentSize;
-(long long)numberOfTextFields;
-(double)_bottomMarginForTextFields;
-(BOOL)resignFirstResponder;
-(id)addTextFieldWithPlaceholder:(id)arg1 ;
-(id)textFieldContainerViews;
-(void)removeAllTextFields;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
@end

