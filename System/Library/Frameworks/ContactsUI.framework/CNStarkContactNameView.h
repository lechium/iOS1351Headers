/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class CNContact, UILabel, CNAvatarViewController;

@interface CNStarkContactNameView : UIView {

	CNContact* _contact;
	UILabel* _nameLabel;
	CNAvatarViewController* _avatarViewController;

}

@property (nonatomic,readonly) CNContact * contact;                                        //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                                        //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) CNAvatarViewController * avatarViewController;              //@synthesize avatarViewController=_avatarViewController - In the implementation block
-(id)initWithName:(id)arg1 ;
-(CNContact *)contact;
-(UILabel *)nameLabel;
-(void)setupConstraints;
-(CNAvatarViewController *)avatarViewController;
-(void)setupNameLabel;
-(void)setupAvatar;
@end

