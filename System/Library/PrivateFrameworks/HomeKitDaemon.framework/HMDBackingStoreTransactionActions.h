/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreTransactionOptions.h>

@class HMDBackingStore;

@interface HMDBackingStoreTransactionActions : HMDBackingStoreTransactionOptions {

	BOOL _local;
	BOOL _changed;
	BOOL _saveToAssistant;
	BOOL _saveToSharedUserAccount;
	HMDBackingStore* _backingStore;

}

@property (nonatomic,readonly) BOOL local;                                         //@synthesize local=_local - In the implementation block
@property (nonatomic,readonly) BOOL changed;                                       //@synthesize changed=_changed - In the implementation block
@property (nonatomic,readonly) BOOL saveToAssistant;                               //@synthesize saveToAssistant=_saveToAssistant - In the implementation block
@property (nonatomic,readonly) BOOL saveToSharedUserAccount;                       //@synthesize saveToSharedUserAccount=_saveToSharedUserAccount - In the implementation block
@property (nonatomic,__weak,readonly) HMDBackingStore * backingStore;              //@synthesize backingStore=_backingStore - In the implementation block
+(id)logCategory;
-(id)description;
-(HMDBackingStore *)backingStore;
-(BOOL)local;
-(id)logIdentifier;
-(BOOL)changed;
-(void)markChanged;
-(void)markLocalChanged;
-(void)markSaveToAssistant;
-(void)markSaveToSharedUserAccount;
-(id)initWithBackingStore:(id)arg1 options:(id)arg2 ;
-(BOOL)saveToAssistant;
-(BOOL)saveToSharedUserAccount;
@end
