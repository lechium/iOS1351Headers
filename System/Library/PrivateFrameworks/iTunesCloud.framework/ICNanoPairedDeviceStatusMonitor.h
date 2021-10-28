/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PSYInitialSyncStateObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, PSYInitialSyncStateObserver, NSString, NSArray, NSUUID;

@interface ICNanoPairedDeviceStatusMonitor : NSObject <PSYInitialSyncStateObserverDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callBackQueue;
	NSMapTable* _observers;
	PSYInitialSyncStateObserver* _initialSyncStateObserver;
	NSString* _pairingIDPropertyName;
	BOOL _isInitialSyncComplete;

}

@property (nonatomic,copy,readonly) NSArray * allPairedDevicePairingIDs; 
@property (nonatomic,copy,readonly) NSUUID * activePairedDevicePairingID; 
@property (nonatomic,copy,readonly) NSUUID * pairedDevicePairingID; 
@property (assign,nonatomic) BOOL isInitialSyncComplete;                                               //@synthesize isInitialSyncComplete=_isInitialSyncComplete - In the implementation block
@property (getter=isMediaSyncingSupported,nonatomic,readonly) BOOL mediaSyncingSupported; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMonitor;
-(void)dealloc;
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isInitialSyncComplete;
-(id)_allObservers;
-(void)initialSyncStateObserver:(id)arg1 initialSyncDidCompleteForPairingIdentifier:(id)arg2 ;
-(void)deviceBecameActive:(id)arg1 ;
-(id)_activePairedDevice;
-(NSUUID *)activePairedDevicePairingID;
-(NSUUID *)pairedDevicePairingID;
-(NSArray *)allPairedDevicePairingIDs;
-(BOOL)isMediaSyncingSupported;
-(void)_handlePairedDeviceChangedNotification;
-(void)setIsInitialSyncComplete:(BOOL)arg1 ;
@end
