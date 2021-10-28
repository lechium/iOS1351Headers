/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol PUPhotoCommentEntryViewDelegate;
@class UILabel, UITextView, UIButton, NSString;

@interface PUPhotoCommentEntryView : UIView <UITextViewDelegate> {

	UILabel* placeholderLabel;
	UILabel* _placeholderLabel;
	UITextView* _textView;
	UIButton* _postButton;
	id<PUPhotoCommentEntryViewDelegate> _delegate;

}

@property (nonatomic,retain,readonly) UITextView * textView;                                   //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain,readonly) UILabel * placeholderLabel;                              //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,retain,readonly) UIButton * postButton;                                   //@synthesize postButton=_postButton - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoCommentEntryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PUPhotoCommentEntryViewDelegate>)delegate;
-(void)setDelegate:(id<PUPhotoCommentEntryViewDelegate>)arg1 ;
-(void)setText:(id)arg1 ;
-(UITextView *)textView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)preferredHeight;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)clearText;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(BOOL)textViewShouldEndEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(UILabel *)placeholderLabel;
-(UIButton *)postButton;
-(id)trimmedText;
@end
