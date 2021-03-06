/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMDAccessoryBrowserHapProtocol
@required
-(void)updateStateForIdentifier:(id)arg1 stateNumber:(id)arg2;
-(void)updateBroadcastKeyForIdentifer:(id)arg1 key:(id)arg2 keyUpdatedStateNumber:(id)arg3 keyUpdatedTime:(double)arg4;
-(void)retrieveCurrentStateForIdentifer:(id)arg1 onQueue:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)configureAccessory:(id)arg1 trackState:(BOOL)arg2 connectionPriority:(BOOL)arg3;

@end

