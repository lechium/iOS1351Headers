/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/CKConversationListCell.h>

@class UIImageView, CKAvatarView;

@interface CKConversationListStandardCell : CKConversationListCell {

	UIImageView* _unreadIndicatorImageView;
	CKAvatarView* _avatarView;

}
+(id)identifierForConversation:(id)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(BOOL)avatarView:(id)arg1 shouldShowContact:(id)arg2 ;
-(id)contactsForPreviewInteractionForAvatarView:(id)arg1 suggestedKeysToFetch:(id)arg2 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(id)avatarView;
-(void)_updateAvatarView;
-(void)updateContentsForConversation:(id)arg1 ;
-(void)increaseContrastDidChange;
-(void)updateContentsForConversation:(id)arg1 fastPreview:(BOOL)arg2 ;
-(void)updateUnreadIndicatorWithImage:(id)arg1 tintColor:(id)arg2 ;
-(void)updateFromLabelWithText:(id)arg1 ;
-(void)updateForEditing:(BOOL)arg1 ;
-(id)chevronImageView;
-(double)leadingLayoutMargin;
-(void)_calculateLayoutFrames;
-(BOOL)_shouldShowAvatarForWidth:(double)arg1 ;
@end

