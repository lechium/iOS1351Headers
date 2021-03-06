/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _TVRUINetworkObserverDelegate;
@class WFWiFiStateMonitor, BluetoothManager;

@interface _TVRUINetworkObserver : NSObject {

	WFWiFiStateMonitor* _wifiStateMonitor;
	BluetoothManager* _bluetoothManager;
	BOOL _networkReachable;
	id<_TVRUINetworkObserverDelegate> _delegate;

}

@property (getter=isNetworkReachable,nonatomic,readonly) BOOL networkReachable; 
@property (assign,nonatomic,__weak) id<_TVRUINetworkObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<_TVRUINetworkObserverDelegate>)delegate;
-(void)setDelegate:(id<_TVRUINetworkObserverDelegate>)arg1 ;
-(BOOL)isNetworkReachable;
-(void)_wifiStateUpdatedWithOldState:(long long)arg1 andNewState:(long long)arg2 ;
-(void)_beginObservingBluetoothStateChanges;
-(void)_stopObservingBluetoothStateChanges;
-(BOOL)_isBluetoothAvailable;
-(void)_bluetoothStateDidChange:(id)arg1 ;
-(void)_bluetoothConnectionStatusDidChange:(id)arg1 ;
@end

