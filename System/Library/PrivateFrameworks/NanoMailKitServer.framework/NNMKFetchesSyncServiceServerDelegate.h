/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NNMKFetchesSyncServiceServerDelegate <NSObject>
@required
-(void)fetchesSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestFetch:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestFetchInBatch:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessages:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessagesInBatch:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessagesForConversation:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestContent:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestFullSync:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestHaltSync:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didNotifyInitialSyncFinished:(id)arg2;
-(void)fetchesSyncServiceServer:(id)arg1 didNotifyAboutWebKitStatus:(id)arg2;

@end
