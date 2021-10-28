/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKAccountsSyncServiceServerDelegate;
@interface NNMKAccountsSyncServiceServer : NNMKSyncServiceEndpoint {

	id<NNMKAccountsSyncServiceServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKAccountsSyncServiceServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NNMKAccountsSyncServiceServerDelegate>)delegate;
-(void)setDelegate:(id<NNMKAccountsSyncServiceServerDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(id)deleteAccount:(id)arg1 ;
-(id)addOrUpdateAccount:(id)arg1 ;
-(id)sendInitialAccountsSync:(id)arg1 ;
-(id)sendStandaloneAccountIdentity:(id)arg1 ;
-(id)requestWatchAccountsStatus:(id)arg1 ;
-(id)syncVIPList:(id)arg1 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
@end
