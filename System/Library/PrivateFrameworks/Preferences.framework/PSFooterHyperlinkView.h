/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>
#import <UIKit/UITextViewDelegate.h>

@class NSString, NSURL, UITextView, NSLayoutConstraint;

@interface PSFooterHyperlinkView : UITableViewHeaderFooterView <PSHeaderFooterView, UITextViewDelegate> {

	NSString* _text;
	NSURL* _URL;
	id _target;
	SEL _action;
	UITextView* _textView;
	NSLayoutConstraint* _textViewLeadingConstraint;
	NSLayoutConstraint* _textViewTrailingConstraint;
	NSRange _linkRange;

}

@property (nonatomic,retain) UITextView * textView;                                        //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textViewLeadingConstraint;               //@synthesize textViewLeadingConstraint=_textViewLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textViewTrailingConstraint;              //@synthesize textViewTrailingConstraint=_textViewTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSString * text;                                              //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) NSRange linkRange;                                            //@synthesize linkRange=_linkRange - In the implementation block
@property (assign,nonatomic,__weak) id target;                                             //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                                   //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                  //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(SEL)action;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(void)updateConstraints;
-(void)setAction:(SEL)arg1 ;
-(void)setTableView:(id)arg1 ;
-(void)_accessibilitySetInterfaceStyleIntent:(unsigned long long)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(void)setupSubviewsAndContstraints;
-(void)setLinkRange:(NSRange)arg1 ;
-(void)_linkify;
-(void)setTextViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textViewLeadingConstraint;
-(void)setTextViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textViewTrailingConstraint;
-(NSRange)linkRange;
-(BOOL)isValidLinkRange;
@end

