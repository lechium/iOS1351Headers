/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BLTBulletinSendQueueDelegate;
@interface BLTBulletinSendQueuePassthrough : NSObject {

	id<BLTBulletinSendQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BLTBulletinSendQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<BLTBulletinSendQueueDelegate>)delegate;
-(void)setDelegate:(id<BLTBulletinSendQueueDelegate>)arg1 ;
-(void)sendNow;
-(void)sendRequest:(id)arg1 withTimeout:(id)arg2 isTrafficRestricted:(BOOL)arg3 didSend:(/*^block*/id)arg4 ;
-(BOOL)handleFileURL:(id)arg1 ;
-(void)queuePending;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(/*^block*/id)arg3 didQueue:(/*^block*/id)arg4 ;
@end
