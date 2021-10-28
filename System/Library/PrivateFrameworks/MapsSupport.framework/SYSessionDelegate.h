/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SYSessionDelegate <NSObject>
@optional
-(void)resetDataStoreForSyncSession:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)syncSession:(id)arg1 rollbackChangesWithError:(id*)arg2;
-(BOOL)syncSession:(id)arg1 restartChanges:(id*)arg2;
-(void)syncSession:(id)arg1 successfullySynced:(id)arg2;

@required
-(long long)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3;
-(void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(/*^block*/id)arg3;
-(void)syncSession:(id)arg1 didEndWithError:(id)arg2;
-(BOOL)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2;

@end
