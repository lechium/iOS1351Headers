/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView, UILabel;

@interface HUBadgeAndDisclosureAccessoryView : UIView {

	long long _badgeCount;
	UIView* _badgeContainerView;
	UIImageView* _badgeImageView;
	UILabel* _badgeLabel;
	UIImageView* _disclosureImageView;

}

@property (nonatomic,retain) UIView * badgeContainerView;                    //@synthesize badgeContainerView=_badgeContainerView - In the implementation block
@property (nonatomic,retain) UIImageView * badgeImageView;                   //@synthesize badgeImageView=_badgeImageView - In the implementation block
@property (nonatomic,retain) UILabel * badgeLabel;                           //@synthesize badgeLabel=_badgeLabel - In the implementation block
@property (nonatomic,retain) UIImageView * disclosureImageView;              //@synthesize disclosureImageView=_disclosureImageView - In the implementation block
@property (assign,nonatomic) long long badgeCount;                           //@synthesize badgeCount=_badgeCount - In the implementation block
+(id)_disclosureImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)badgeImageView;
-(void)setBadgeImageView:(UIImageView *)arg1 ;
-(long long)badgeCount;
-(UIView *)badgeContainerView;
-(void)setBadgeContainerView:(UIView *)arg1 ;
-(void)setBadgeCount:(long long)arg1 ;
-(UIImageView *)disclosureImageView;
-(UILabel *)badgeLabel;
-(void)setBadgeLabel:(UILabel *)arg1 ;
-(void)setDisclosureImageView:(UIImageView *)arg1 ;
@end
