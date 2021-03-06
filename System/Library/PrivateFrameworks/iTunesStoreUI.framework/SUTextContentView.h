/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITextContentView.h>

@class UILabel, NSString;

@interface SUTextContentView : UITextContentView {

	UILabel* _placeholderLabel;

}

@property (nonatomic,retain) NSString * placeholder; 
-(void)dealloc;
-(void)setText:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholder:(NSString *)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(NSString *)placeholder;
-(void)keyboardInputChangedSelection:(id)arg1 ;
@end

