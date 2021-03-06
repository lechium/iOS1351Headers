/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BRCUserNotifier <NSObject>
@required
-(void)close;
-(void)moveToFront;
-(void)showJoinDialogForShareMetadata:(id)arg1 session:(id)arg2 reply:(/*^block*/id)arg3;
-(void)showErrorSignInToiCloudForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorTurnOniCloudDriveForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorInstallNativeAppForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorNativeAppDisabledByProfileForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorReasonUnknownForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorDeviceOfflineForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorServerNotReachableForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorItemUnavailableOrAccessRestrictedForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorParticipantLimitReachedForShareMetadata:(id)arg1 reply:(/*^block*/id)arg2;
-(void)showErrorDocumentsAppNotVisibleForShareURL:(id)arg1 reply:(/*^block*/id)arg2;

@end

