/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBRemoteTransientOverlaySessionHostDelegate <NSObject>
@required
-(long long)activeWallpaperVariantForRemoteTransientOverlaySession:(id)arg1;
-(void)remoteTransientOverlaySession:(id)arg1 requestsHandlingForButtonEvents:(unsigned long long)arg2 viewController:(id)arg3;
-(BOOL)remoteTransientOverlaySession:(id)arg1 shouldActivateWithContext:(id)arg2;
-(BOOL)remoteTransientOverlaySession:(id)arg1 performDismissalRequest:(id)arg2;
-(BOOL)remoteTransientOverlaySession:(id)arg1 performPresentationRequest:(id)arg2;
-(BOOL)remoteTransientOverlaySession:(id)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(id)arg2;
-(void)remoteTransientOverlaySession:(id)arg1 didInvalidateWithReason:(long long)arg2 error:(id)arg3;

@end

