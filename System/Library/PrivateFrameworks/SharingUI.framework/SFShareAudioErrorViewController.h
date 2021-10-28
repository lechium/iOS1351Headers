/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SharingUI/SFShareAudioBaseViewController.h>

@class UILabel, UIButton, NSError;

@interface SFShareAudioErrorViewController : SFShareAudioBaseViewController {

	UILabel* _infoLabel;
	UILabel* _internalLabel;
	UIButton* _dismissButton;
	NSError* _error;

}

@property (nonatomic,retain) UILabel * infoLabel;                   //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) UILabel * internalLabel;               //@synthesize internalLabel=_internalLabel - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;              //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,copy) NSError * error;                         //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setDismissButton:(UIButton *)arg1 ;
-(UIButton *)dismissButton;
-(UILabel *)infoLabel;
-(void)setInfoLabel:(UILabel *)arg1 ;
-(void)eventDismiss:(id)arg1 ;
-(UILabel *)internalLabel;
-(void)setInternalLabel:(UILabel *)arg1 ;
@end
