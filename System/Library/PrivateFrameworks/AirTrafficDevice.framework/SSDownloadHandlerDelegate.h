/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:01 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SSDownloadHandlerDelegate <NSObject>
@optional
-(void)downloadHandlerDidDisconnect:(id)arg1;
-(void)downloadHandler:(id)arg1 handleSession:(id)arg2;
-(void)downloadHandler:(id)arg1 cancelSession:(id)arg2;
-(BOOL)downloadHandler:(id)arg1 pauseSession:(id)arg2;
-(void)downloadHandler:(id)arg1 handleAuthenticationSession:(id)arg2;

@end

