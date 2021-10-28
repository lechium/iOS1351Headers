/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:50 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIImageView, SKUISettingDescriptionView;

@interface SKUISettingsTableViewCell : UITableViewCell {

	UIEdgeInsets _contentInset;
	UIImageView* _disclosureChevron;
	BOOL _hasDisclosureChevron;
	SKUISettingDescriptionView* _settingDescriptionView;

}

@property (nonatomic,readonly) SKUISettingDescriptionView * settingDescriptionView; 
-(void)prepareForReuse;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(void)displaySettingDescriptionView:(id)arg1 ;
-(SKUISettingDescriptionView *)settingDescriptionView;
@end
