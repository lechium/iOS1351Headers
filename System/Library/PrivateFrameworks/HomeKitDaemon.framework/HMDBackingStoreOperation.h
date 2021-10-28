/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class NSUUID, HMDBackingStore;

@interface HMDBackingStoreOperation : NSOperation {

	/*^block*/id _resultBlock;
	NSUUID* _operationUUID;
	HMDBackingStore* _store;

}

@property (nonatomic,retain) HMDBackingStore * store;               //@synthesize store=_store - In the implementation block
@property (nonatomic,copy) id resultBlock;                          //@synthesize resultBlock=_resultBlock - In the implementation block
@property (nonatomic,readonly) NSUUID * operationUUID;              //@synthesize operationUUID=_operationUUID - In the implementation block
-(id)init;
-(id)description;
-(void)main;
-(HMDBackingStore *)store;
-(void)setStore:(HMDBackingStore *)arg1 ;
-(id)initWithResultBlock:(/*^block*/id)arg1 ;
-(id)resultBlock;
-(void)setResultBlock:(id)arg1 ;
-(NSUUID *)operationUUID;
-(id)mainReturningError;
@end
