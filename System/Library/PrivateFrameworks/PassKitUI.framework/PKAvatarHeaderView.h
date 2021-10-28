/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CNAvatarView, CNContact, NSString, UILabel;

@interface PKAvatarHeaderView : UIView {

	CNAvatarView* _avatarView;
	CNContact* _contact;
	NSString* _counterpartHandle;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;

}

@property (nonatomic,copy) CNContact * contact;                       //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy) NSString * counterpartHandle;              //@synthesize counterpartHandle=_counterpartHandle - In the implementation block
@property (nonatomic,copy) UILabel * primaryLabel;                    //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,copy) UILabel * secondaryLabel;                  //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UILabel *)primaryLabel;
-(UILabel *)secondaryLabel;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(id)initWithContact:(id)arg1 counterpartHandle:(id)arg2 ;
-(void)setCounterpartHandle:(NSString *)arg1 ;
-(CGSize)_layoutWithBounds:(CGRect)arg1 applyLayout:(BOOL)arg2 ;
-(void)configureForContact;
-(NSString *)counterpartHandle;
@end
