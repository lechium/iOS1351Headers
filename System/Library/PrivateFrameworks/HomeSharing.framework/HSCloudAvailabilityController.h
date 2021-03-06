/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeSharing/HomeSharing-Structs.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>
#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>
#import <libobjc.A.dylib/HSCloudAvailability.h>

@protocol OS_dispatch_queue;
@class NSObject, RadiosPreferences, NSString;

@interface HSCloudAvailabilityController : NSObject <RadiosPreferencesDelegate, ICEnvironmentMonitorObserver, HSCloudAvailability> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _hasProperNetworkConditionsToShowCloudMedia;
	BOOL _isAirplaneModeActive;
	BOOL _isAutoDownloadOnCellularAllowed;
	BOOL _isCellularDataActive;
	BOOL _isCellularDataRestrictedForMusic;
	BOOL _isShowingAllMusic;
	BOOL _isShowingAllVideo;
	BOOL _isUpdateInProgress;
	BOOL _isWiFiEnabled;
	BOOL _isWiFiAssociated;
	BOOL _isNetworkReachable;
	BOOL _canShowCloudMusic;
	BOOL _canShowCloudVideo;
	BOOL _canShowCloudDownloadButtons;
	int _preferencesChangedNotifyToken;
	BOOL _preferencesChangedNotifyTokenIsValid;
	long long _networkType;
	RadiosPreferences* _radiosPreferences;
	unsigned long long _networkReachabilityObservationCount;
	CTServerConnectionRef _ctServerConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(id)init;
-(void)dealloc;
-(BOOL)isNetworkReachable;
-(void)airplaneModeChanged;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(void)environmentMonitorDidChangeNetworkType:(id)arg1 ;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(BOOL)hasProperNetworkConditionsToShowCloudMedia;
-(BOOL)isCellularDataRestrictedForMusic;
-(BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
-(BOOL)isCellularDataRestrictedForVideos;
-(BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
-(BOOL)isCellularDataRestrictedForStoreApps;
-(BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
-(BOOL)isCellularDataRestricted;
-(BOOL)shouldProhibitActionsForCurrentNetworkConditions;
-(BOOL)canShowCloudDownloadButtons;
-(BOOL)canShowCloudMusic;
-(BOOL)canShowCloudVideo;
-(BOOL)_hasWiFiCapability;
-(BOOL)_uncachedIsAutoDownloadOnCellularAllowed;
-(BOOL)_uncachedIsShowingAllMusic;
-(BOOL)_uncachedIsShowingAllVideo;
-(void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(BOOL)arg1 ;
-(void)_onQueue_updateCanShowCloudTracksWithNotification:(BOOL)arg1 ;
-(void)_onQueue_updateIsCellularDataRestrictedForMusic;
-(void)_wifiStateDidChangeNotification:(id)arg1 ;
-(BOOL)_isAutoDownloadOnCellularAllowed;
-(void)_onQueue_beginObservingReachabilityChanges;
-(void)_onQueue_endObservingReachabilityChanges;
-(BOOL)_hasCellularCapability;
-(void)beginObservingNetworkReachability;
-(void)endObservingNetworkReachability;
-(void)_setNewIsNetworkReachable:(BOOL)arg1 networkType:(long long)arg2 ;
@end

