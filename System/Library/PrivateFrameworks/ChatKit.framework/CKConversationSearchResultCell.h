/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>
#import <libobjc.A.dylib/CKSearchResultCell.h>

@class CKAvatarView, UILabel, CKConversation, NSString;

@interface CKConversationSearchResultCell : UICollectionViewCell <CNAvatarViewDelegate, CKSearchResultCell> {

	BOOL editing;
	CKAvatarView* _avatarView;
	UILabel* _nameLabel;
	CKConversation* _conversation;
	UIEdgeInsets marginInsets;

}

@property (nonatomic,retain) CKAvatarView * avatarView;                  //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                        //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;              //@synthesize conversation=_conversation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
+(id)reuseIdentifier;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(CKConversation *)conversation;
-(void)setConversation:(CKConversation *)arg1 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(CKAvatarView *)avatarView;
-(void)setAvatarView:(CKAvatarView *)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)refreshForSearchTextIfNeeded:(id)arg1 ;
-(void)_configureAvatarViewForConversation:(id)arg1 ;
-(void)_configureNameLabelForConversation:(id)arg1 searchText:(id)arg2 ;
@end
