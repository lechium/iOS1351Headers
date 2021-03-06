/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:55 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateSettingsUI.framework/SoftwareUpdateSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SUSUISoftwareUpdateManagerDelegate <NSObject>
@optional
-(void)manager:(id)arg1 scanFoundUpdate:(id)arg2 error:(id)arg3;
-(void)manager:(id)arg1 downloadFinished:(id)arg2;
-(void)manager:(id)arg1 download:(id)arg2 failedWithError:(id)arg3;
-(void)manager:(id)arg1 installStartedForUpdate:(id)arg2;
-(void)manager:(id)arg1 installFailedWithError:(id)arg2;

@required
-(void)manager:(id)arg1 didTransitionToState:(int)arg2 fromState:(int)arg3 error:(id)arg4;
-(void)manager:(id)arg1 downloadProgressChanged:(id)arg2 displayStyle:(int)arg3;
-(void)manager:(id)arg1 promptForDevicePasscodeWithCompletion:(/*^block*/id)arg2;

@end

