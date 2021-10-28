/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Features/MediaLibrary-iOS.feature/MediaLibrary-iOS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, ACCMediaLibraryShimDelegate;
@class NSDictionary, MPMediaLibrary, MPRadioLibrary, ACCMediaLibraryAccessory, NSObject, NSMutableDictionary, ACCMediaLibraryShimInfo, ACCMemUsageStat, ACCSettingsState;

@interface ACCMediaLibraryShim : NSObject {

	NSDictionary* _libraries;
	MPMediaLibrary* _deviceMediaLibrary;
	MPRadioLibrary* _mpRadioLibrary;
	BOOL _enableLibraryInfoUpdate;
	BOOL _isShuttingDown;
	BOOL _radioIsEnabled;
	BOOL _subscribedToAppleMusic;
	BOOL _isSubscribedToAppleMusic;
	unsigned _windowPerLibrary;
	ACCMediaLibraryAccessory* _accessory;
	NSObject*<OS_dispatch_queue> _libraryInfoUpdateQ;
	NSMutableDictionary* _libraryList;
	ACCMediaLibraryShimInfo* _deviceLibrary;
	ACCMediaLibraryShimInfo* _radioLibrary;
	id<ACCMediaLibraryShimDelegate> _delegate;
	ACCMemUsageStat* _memUse;
	ACCSettingsState* _measureMemoryUsage;

}

@property (assign,nonatomic) BOOL isSubscribedToAppleMusic;                                  //@synthesize isSubscribedToAppleMusic=_isSubscribedToAppleMusic - In the implementation block
@property (nonatomic,retain) ACCSettingsState * measureMemoryUsage;                          //@synthesize measureMemoryUsage=_measureMemoryUsage - In the implementation block
@property (nonatomic,readonly) ACCMediaLibraryAccessory * accessory;                         //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) BOOL isShuttingDown;                                          //@synthesize isShuttingDown=_isShuttingDown - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> libraryInfoUpdateQ;              //@synthesize libraryInfoUpdateQ=_libraryInfoUpdateQ - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * libraryList;                            //@synthesize libraryList=_libraryList - In the implementation block
@property (nonatomic,readonly) ACCMediaLibraryShimInfo * deviceLibrary;                      //@synthesize deviceLibrary=_deviceLibrary - In the implementation block
@property (nonatomic,readonly) ACCMediaLibraryShimInfo * radioLibrary;                       //@synthesize radioLibrary=_radioLibrary - In the implementation block
@property (nonatomic,readonly) BOOL radioIsEnabled;                                          //@synthesize radioIsEnabled=_radioIsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL subscribedToAppleMusic;                                  //@synthesize subscribedToAppleMusic=_subscribedToAppleMusic - In the implementation block
@property (assign,nonatomic) unsigned windowPerLibrary;                                      //@synthesize windowPerLibrary=_windowPerLibrary - In the implementation block
@property (nonatomic,__weak,readonly) id<ACCMediaLibraryShimDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ACCMemUsageStat * memUse;                                     //@synthesize memUse=_memUse - In the implementation block
+(BOOL)allowCachedTracksForAppleMusic;
+(BOOL)isMusicAppVisible;
-(void)dealloc;
-(id)description;
-(id<ACCMediaLibraryShimDelegate>)delegate;
-(ACCMediaLibraryAccessory *)accessory;
-(BOOL)isShuttingDown;
-(unsigned)windowPerLibrary;
-(void)setWindowPerLibrary:(unsigned)arg1 ;
-(BOOL)subscribedToAppleMusic;
-(BOOL)isGeniusMixesSupported;
-(ACCSettingsState *)measureMemoryUsage;
-(ACCMemUsageStat *)memUse;
-(BOOL)radioIsEnabled;
-(void)shuttingDown;
-(void)_updateSubscribedToAppleMusicStatus:(BOOL)arg1 ;
-(void)_updateMediaLibraryInfomationUpdates:(BOOL)arg1 ;
-(void)_mediaLibrariesAvailableChanged:(id)arg1 ;
-(void)_handlMediaLibraryNeedFilterChange:(id)arg1 ;
-(void)_setupNewLibraries:(id)arg1 ;
-(BOOL)_checkForDifferentRadioLibrary;
-(BOOL)_checkForDifferentMediaLibraries;
-(void)_sendLibraryInfoList;
-(void)_handleSubscribedToAppleMusicChanged:(id)arg1 ;
-(id)initWithAccessory:(id)arg1 windowPerLibrary:(unsigned)arg2 delegate:(id)arg3 ;
-(void)startShim;
-(void)startSendingMediaLibraryInfomationUpdates;
-(void)stopSendingMediaLibraryInfomationUpdates;
-(void)startMediaLibraryUpdate:(id)arg1 lastRevision:(id)arg2 requestedInfo:(id)arg3 ;
-(void)stopMediaLibraryUpdate:(id)arg1 ;
-(void)stopAllMediaLibraryUpdate;
-(void)playMediaLibraryCurrentSelection:(id)arg1 ;
-(void)playMediaLibraryItems:(id)arg1 itemList:(id)arg2 firstItemIndex:(unsigned long long)arg3 ;
-(void)playMediaLibraryCollection:(id)arg1 collection:(unsigned long long)arg2 type:(int)arg3 firstItemIndex:(unsigned long long)arg4 ;
-(void)playMediaLibraryCollection:(id)arg1 collection:(unsigned long long)arg2 type:(int)arg3 firstItemPersistentID:(unsigned long long)arg4 ;
-(void)playAllSongs:(id)arg1 ;
-(void)playAllSongs:(id)arg1 firstItemPersistentID:(unsigned long long)arg2 ;
-(void)confirmMediaLibraryUpdate:(id)arg1 lastRevision:(id)arg2 updateCount:(unsigned)arg3 ;
-(void)confirmMediaLibraryPlaylistContentUpdate:(id)arg1 lastRevision:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)libraryInfoUpdateQ;
-(NSMutableDictionary *)libraryList;
-(ACCMediaLibraryShimInfo *)deviceLibrary;
-(ACCMediaLibraryShimInfo *)radioLibrary;
-(BOOL)isSubscribedToAppleMusic;
-(void)setIsSubscribedToAppleMusic:(BOOL)arg1 ;
-(void)setMeasureMemoryUsage:(ACCSettingsState *)arg1 ;
@end
