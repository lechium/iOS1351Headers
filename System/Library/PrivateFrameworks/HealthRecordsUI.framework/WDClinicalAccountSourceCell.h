/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:22 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthRecordsUI/WDClinicalLocationCell.h>

@class UIButton, HKClinicalAccount;

@interface WDClinicalAccountSourceCell : WDClinicalLocationCell {

	UIButton* _webLinkButton;
	HKClinicalAccount* _account;

}

@property (nonatomic,retain) UIButton * webLinkButton;                        //@synthesize webLinkButton=_webLinkButton - In the implementation block
@property (nonatomic,copy,readonly) HKClinicalAccount * account;              //@synthesize account=_account - In the implementation block
-(HKClinicalAccount *)account;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setupSubviews;
-(void)_updateForContentSizeCategory:(id)arg1 ;
-(void)_handleWebLinkTapped;
-(UIButton *)webLinkButton;
-(void)willDisplay;
-(void)setAccount:(id)arg1 dataProvider:(id)arg2 ;
-(void)setWebLinkButton:(UIButton *)arg1 ;
@end

