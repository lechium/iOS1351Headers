/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VTUIDictationDataSharingOptInPresentationDelegate;
@interface VTUIDictationDataSharingOptInPresenter : NSObject {

	id<VTUIDictationDataSharingOptInPresentationDelegate> _presentationDelegate;

}

@property (assign,nonatomic,__weak) id<VTUIDictationDataSharingOptInPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(id)dataSharingOptInView;
-(void)setPresentationDelegate:(id<VTUIDictationDataSharingOptInPresentationDelegate>)arg1 ;
-(id<VTUIDictationDataSharingOptInPresentationDelegate>)presentationDelegate;
-(void)_optInButtonTapped;
-(void)_optOutButtonTapped;
-(void)_learnMoreButtonTapped;
-(id)dataSharingOptInAlertController;
-(id)dataSharingReminderAlertController;
-(id)dictationDataSharingOptInAlertViewModel;
-(id)dictationDataSharingOptInReminderViewModel;
@end
