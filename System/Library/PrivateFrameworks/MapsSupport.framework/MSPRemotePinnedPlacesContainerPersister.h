/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSupport/MSPContainerPersister.h>
#import <libobjc.A.dylib/MSPMapsPushDaemonProxyObserver.h>

@class NSUUID, NSString;

@interface MSPRemotePinnedPlacesContainerPersister : MSPContainerPersister <MSPMapsPushDaemonProxyObserver> {

	BOOL _hasRemoteProxy;
	NSUUID* _lastOperationIdentifier;

}

@property (assign,nonatomic) BOOL hasRemoteProxy;                           //@synthesize hasRemoteProxy=_hasRemoteProxy - In the implementation block
@property (nonatomic,retain) NSUUID * lastOperationIdentifier;              //@synthesize lastOperationIdentifier=_lastOperationIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)eraseWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchStateSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)favoritesDidChange;
-(void)historyDidChange;
-(void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3 ;
-(void)commitEditWithNewContents:(id)arg1 edits:(id)arg2 appliedToOldContents:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)commitByMergingWithStateSnapshot:(id)arg1 mergeOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasRemoteProxy;
-(void)setHasRemoteProxy:(BOOL)arg1 ;
-(NSUUID *)lastOperationIdentifier;
-(void)setLastOperationIdentifier:(NSUUID *)arg1 ;
@end

