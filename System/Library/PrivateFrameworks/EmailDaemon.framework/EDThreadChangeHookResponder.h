/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol EDThreadChangeHookResponder <NSObject>
@optional
-(void)persistenceIsAddingThreadWithObjectID:(id)arg1 journaled:(BOOL)arg2 generationWindow:(id)arg3;
-(void)persistenceIsMarkingThreadAsJournaledWithObjectID:(id)arg1 generationWindow:(id)arg2;
-(void)persistenceIsReconcilingJournaledThreadsWithObjectIDs:(id)arg1 generationWindow:(id)arg2;
-(void)persistenceIsChangingThreadWithObjectID:(id)arg1 changedKeyPaths:(id)arg2 generationWindow:(id)arg3;
-(void)persistenceIsDeletingThreadWithObjectID:(id)arg1 generationWindow:(id)arg2;
-(void)persistenceDidFinishThreadUpdates;
-(void)persistenceWillResetThreadScope:(id)arg1 denyBlock:(/*^block*/id)arg2;

@end

