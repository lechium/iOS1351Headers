/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <libobjc.A.dylib/WBSSiteMetadataImageCacheDelegate.h>
#import <libobjc.A.dylib/WBSSiteMetadataProvider.h>

@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;
@class NSObject, WBSSiteMetadataImageCache, NSMutableDictionary, NSMutableSet, NSCache, NSURL, NSString;

@interface WBSTemplateIconCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSSiteMetadataProvider> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	BOOL _areSettingsLoaded;
	WBSSiteMetadataImageCache* _imageCache;
	NSMutableDictionary* _hostsToRequestSets;
	NSMutableDictionary* _templateIconsDataForHosts;
	NSMutableSet* _pendingTemplateIconRequestHosts;
	NSMutableSet* _pendingTemplateIconFallbackRequestHosts;
	NSMutableSet* _pendingSVGImageRenderingRequests;
	NSMutableDictionary* _requestsToDelayedResponses;
	NSCache* _requestsToResponses;
	BOOL _historyDidFinishLoading;
	BOOL _hasPurgedUnneededItems;
	id<WBSSiteMetadataProviderDelegate> _providerDelegate;
	CGSize _defaultIconSize;

}

@property (nonatomic,readonly) NSURL * imageDirectoryURL; 
@property (assign,nonatomic) CGSize defaultIconSize;                                                   //@synthesize defaultIconSize=_defaultIconSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;              //@synthesize providerDelegate=_providerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL providesFavicons; 
-(id)init;
-(void)dealloc;
-(BOOL)canHandleRequest:(id)arg1 ;
-(void)stopWatchingUpdatesForRequest:(id)arg1 ;
-(void)savePendingChangesBeforeTermination;
-(id)responseForRequest:(id)arg1 willProvideUpdates:(BOOL*)arg2 ;
-(void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2 ;
-(id<WBSSiteMetadataProviderDelegate>)providerDelegate;
-(void)setProviderDelegate:(id<WBSSiteMetadataProviderDelegate>)arg1 ;
-(void)emptyCaches;
-(void)purgeUnneededCacheEntries;
-(id)initWithImageDirectoryURL:(id)arg1 ;
-(void)_registerRequest:(id)arg1 ;
-(NSURL *)imageDirectoryURL;
-(void)siteMetadataImageCacheDidFinishLoadingSettings:(id)arg1 ;
-(void)siteMetadataImageCache:(id)arg1 didFinishLoadingImage:(id)arg2 forKeyString:(id)arg3 ;
-(void)siteMetadataImageCache:(id)arg1 didRemoveImageFromCacheForKeyString:(id)arg2 ;
-(void)siteMetadataImageCacheDidEmptyCache:(id)arg1 ;
-(void)_notifyImageWasLoaded:(id)arg1 forHost:(id)arg2 ;
-(void)_setUpAndReturnDelayedResponseForRequest:(id)arg1 ;
-(BOOL)hasDeterminedIconAvailabilityForURL:(id)arg1 ;
-(void)_didAddHistoryItems:(id)arg1 ;
-(void)_didRemoveHistoryItems:(id)arg1 ;
-(void)_didLoadHistory:(id)arg1 ;
-(id)_monogramForRequest:(id)arg1 themeColor:(id)arg2 ;
-(void)_requestTemplateIconForRequest:(id)arg1 ;
-(void)_setUpAndReturnPreparedResponseForRequest:(id)arg1 ;
-(void)_generateResponseForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_templateIconForURL:(id)arg1 getThemeColor:(id*)arg2 ;
-(id)_imageForRequest:(id)arg1 getThemeColor:(id*)arg2 ;
-(void)_saveTemplateIcon:(id)arg1 withThemeColor:(id)arg2 forHost:(id)arg3 toDisk:(BOOL)arg4 ;
-(void)_updateTemplateIconsDataForHost:(id)arg1 image:(id)arg2 themeColor:(id)arg3 isSavedToDisk:(BOOL)arg4 ;
-(BOOL)_shouldRequestTemplateIconForURL:(id)arg1 allowRefresh:(BOOL)arg2 ;
-(BOOL)_templateIconRetainerIsReadyForCleanUp;
-(void)retainTemplateIconsForHosts:(id)arg1 ;
-(void)releaseTemplateIconsForHosts:(id)arg1 ;
-(void)_purgeUnneededTemplateIconsIfReady;
-(void)_removeTemplateIconsDataForHost:(id)arg1 ;
-(void)_notifyDidLoadIconForHost:(id)arg1 ;
-(void)_upgradeCacheVersionIfNeeded;
-(BOOL)_isLocalIconRequest:(id)arg1 ;
-(id)templateIconForURL:(id)arg1 getThemeColor:(id*)arg2 ;
-(void)addTemplateIconAtURL:(id)arg1 withThemeColor:(id)arg2 forHost:(id)arg3 toDisk:(BOOL)arg4 ;
-(void)retainTemplateIconForURLString:(id)arg1 ;
-(void)retainTemplateIconForHost:(id)arg1 ;
-(void)releaseTemplateIconForURLString:(id)arg1 ;
-(void)releaseTemplateIconForHost:(id)arg1 ;
-(BOOL)shouldRequestTemplateIconForURL:(id)arg1 allowRefresh:(BOOL)arg2 ;
-(CGSize)defaultIconSize;
-(void)setDefaultIconSize:(CGSize)arg1 ;
@end

