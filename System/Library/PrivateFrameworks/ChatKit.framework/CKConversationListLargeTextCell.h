/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:38 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/CKConversationListCell.h>

@class UILayoutGuide, NSLayoutConstraint, NSArray, NSTextAttachment, UIColor;

@interface CKConversationListLargeTextCell : CKConversationListCell {

	UILayoutGuide* _firstLineLayoutGuide;
	NSLayoutConstraint* _editingDependentConstraint;
	NSArray* _contentSizeCategoryDependentConstraints;
	NSTextAttachment* _unreadIndicatorAttachment;
	UIColor* _unreadIndicatorColor;

}

@property (nonatomic,retain) UILayoutGuide * firstLineLayoutGuide;                           //@synthesize firstLineLayoutGuide=_firstLineLayoutGuide - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * editingDependentConstraint;                //@synthesize editingDependentConstraint=_editingDependentConstraint - In the implementation block
@property (nonatomic,retain) NSArray * contentSizeCategoryDependentConstraints;              //@synthesize contentSizeCategoryDependentConstraints=_contentSizeCategoryDependentConstraints - In the implementation block
@property (nonatomic,retain) NSTextAttachment * unreadIndicatorAttachment;                   //@synthesize unreadIndicatorAttachment=_unreadIndicatorAttachment - In the implementation block
@property (nonatomic,retain) UIColor * unreadIndicatorColor;                                 //@synthesize unreadIndicatorColor=_unreadIndicatorColor - In the implementation block
+(id)identifierForConversation:(id)arg1 ;
+(double)cellHeight;
+(id)hyphenationParagraphStyle;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIColor *)unreadIndicatorColor;
-(void)contentSizeCategoryDidChange;
-(void)updateUnreadIndicatorWithImage:(id)arg1 tintColor:(id)arg2 ;
-(void)updateFromLabelWithText:(id)arg1 ;
-(void)updateForEditing:(BOOL)arg1 ;
-(void)setFirstLineLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)firstLineLayoutGuide;
-(id)_constraintForEditing:(BOOL)arg1 ;
-(void)setEditingDependentConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)editingDependentConstraint;
-(id)_contentSizeCategoryDependentConstraints;
-(void)setContentSizeCategoryDependentConstraints:(NSArray *)arg1 ;
-(NSArray *)contentSizeCategoryDependentConstraints;
-(NSTextAttachment *)unreadIndicatorAttachment;
-(void)setUnreadIndicatorColor:(UIColor *)arg1 ;
-(void)setUnreadIndicatorAttachment:(NSTextAttachment *)arg1 ;
@end

