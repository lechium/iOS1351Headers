/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface AssistantVoiceDownloadingView : UIView {

	UIActivityIndicatorView* _indicator;
	UILabel* _downloadLabel;

}

@property (nonatomic,retain) UIActivityIndicatorView * indicator;              //@synthesize indicator=_indicator - In the implementation block
@property (nonatomic,retain) UILabel * downloadLabel;                          //@synthesize downloadLabel=_downloadLabel - In the implementation block
-(void)layoutSubviews;
-(void)sizeToFit;
-(id)initWithActivityIndicatorStyle:(long long)arg1 ;
-(UIActivityIndicatorView *)indicator;
-(void)setIndicator:(UIActivityIndicatorView *)arg1 ;
-(UILabel *)downloadLabel;
-(void)setDownloadLabel:(UILabel *)arg1 ;
@end

