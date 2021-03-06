/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface APRequestHandler : NSObject
+(void)addRequestWithURL:(id)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)localApproveRequestWithItemIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)updateRequestWithIdentifier:(id)arg1 action:(long long)arg2 completion:(/*^block*/id)arg3 ;
+(void)resetAccountWithType:(long long)arg1 ;
+(void)presentProductPageWithTitle:(id)arg1 body:(id)arg2 approve:(id)arg3 decline:(id)arg4 itemIdentifier:(id)arg5 previewURL:(id)arg6 ;
+(void)didReceiveStorePushNotificationWithPayload:(id)arg1 ;
+(void)startDaemon;
@end

