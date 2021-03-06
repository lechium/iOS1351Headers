/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:01 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ICCloudKitSyncerDelegate;
@interface ICCloudKitSyncer : NSObject {

	id<ICCloudKitSyncerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ICCloudKitSyncerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ICCloudKitSyncerDelegate>)delegate;
-(void)setDelegate:(id<ICCloudKitSyncerDelegate>)arg1 ;
-(void)saveUnsyncedObjectsWithRetryCount:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)saveUnsyncedObjects;
@end

