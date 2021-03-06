/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSString, ACCMediaLibraryProvider, NSMutableDictionary, NSObject;

@interface ACCMediaLibraryAccessory : NSObject {

	unsigned _windowPerLibrary;
	NSString* _accessoryUID;
	ACCMediaLibraryProvider* _provider;
	NSMutableDictionary* _libraries;
	NSMutableDictionary* _pendingUpdates;
	NSMutableDictionary* _waitingConfirm;
	NSMutableDictionary* _pendingPlaylistContentUpdates;
	NSMutableDictionary* _confirmedRevisionList;
	NSObject*<OS_dispatch_queue> _listQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * libraries;                                //@synthesize libraries=_libraries - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingUpdates;                             //@synthesize pendingUpdates=_pendingUpdates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * waitingConfirm;                             //@synthesize waitingConfirm=_waitingConfirm - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingPlaylistContentUpdates;              //@synthesize pendingPlaylistContentUpdates=_pendingPlaylistContentUpdates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * confirmedRevisionList;                      //@synthesize confirmedRevisionList=_confirmedRevisionList - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> listQueue;                         //@synthesize listQueue=_listQueue - In the implementation block
@property (nonatomic,readonly) NSString * accessoryUID;                                        //@synthesize accessoryUID=_accessoryUID - In the implementation block
@property (nonatomic,__weak,readonly) ACCMediaLibraryProvider * provider;                      //@synthesize provider=_provider - In the implementation block
@property (assign,nonatomic) unsigned windowPerLibrary;                                        //@synthesize windowPerLibrary=_windowPerLibrary - In the implementation block
-(void)dealloc;
-(id)description;
-(ACCMediaLibraryProvider *)provider;
-(void)setPendingUpdates:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)pendingUpdates;
-(NSString *)accessoryUID;
-(NSObject*<OS_dispatch_queue>)listQueue;
-(id)_pendingUpdatesForLibrary:(id)arg1 createIfNotExist:(BOOL)arg2 ;
-(unsigned long long)_pendingAndWaitingConfirmUpdatesCountForLibrary:(id)arg1 ;
-(id)_pendingPlaylistContentUpdatesForLibrary:(id)arg1 createIfNotExist:(BOOL)arg2 ;
-(unsigned long long)_pendingPlaylistContentUpdatesCountForLibrary:(id)arg1 ;
-(BOOL)_pendingUpdatesAndWaitingConfirmFullForLibrary:(id)arg1 ;
-(id)_waitingUpdatesForLibrary:(id)arg1 createIfNotExist:(BOOL)arg2 ;
-(id)_confirmedRevisionListForLibrary:(id)arg1 createIfNotExist:(BOOL)arg2 ;
-(void)_addToWaitlistForLibrary:(id)arg1 list:(id)arg2 ;
-(void)_pendingUpdatesRemoveLibraryIfEmpty:(id)arg1 ;
-(void)_pendingPlaylistContentUpdatesRemoveLibraryIfEmpty:(id)arg1 ;
-(void)_confirmedRevisionListRemoveLibraryIfEmpty:(id)arg1 ;
-(BOOL)pendingUpdatesAndWaitingConfirmFullForLibrary:(id)arg1 ;
-(unsigned long long)pendingAndWaitingConfirmUpdatesCountForLibrary:(id)arg1 ;
-(void)_waitingUpdatesRemoveLibraryIfEmpty:(id)arg1 ;
-(void)_addConfirmedRevisionForLibrary:(id)arg1 revisionsToAdd:(id)arg2 ;
-(unsigned long long)pendingPlaylistContentUpdatesCountForLibrary:(id)arg1 ;
-(id)initWithUID:(id)arg1 windowPerLibrary:(unsigned)arg2 provider:(id)arg3 ;
-(void)addLibraryInfo:(id)arg1 ;
-(void)_addToWaitlistForLibrary:(id)arg1 item:(id)arg2 ;
-(void)_addConfirmedRevisionForLibrary:(id)arg1 revision:(id)arg2 ;
-(id)copyPendingNonContentUpdatesToSendForLibrary:(id)arg1 ;
-(id)copyPendingPlaylistContentUpdatesToSendForLibrary:(id)arg1 ;
-(BOOL)addUpdate:(id)arg1 library:(id)arg2 ;
-(BOOL)addPlaylistContentUpdate:(id)arg1 library:(id)arg2 ;
-(id)confirmUpdates:(id)arg1 revision:(id)arg2 count:(unsigned)arg3 ;
-(void)confirmPlaylistContentUpdates:(id)arg1 revision:(id)arg2 ;
-(void)clearAllUpdates;
-(unsigned)windowPerLibrary;
-(void)setWindowPerLibrary:(unsigned)arg1 ;
-(NSMutableDictionary *)libraries;
-(NSMutableDictionary *)waitingConfirm;
-(void)setWaitingConfirm:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)pendingPlaylistContentUpdates;
-(void)setPendingPlaylistContentUpdates:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)confirmedRevisionList;
-(void)setConfirmedRevisionList:(NSMutableDictionary *)arg1 ;
@end

