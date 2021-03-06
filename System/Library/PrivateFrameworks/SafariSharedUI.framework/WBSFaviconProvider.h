/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <libobjc.A.dylib/WBSSiteMetadataProvider.h>

@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;
@class NSMutableDictionary, NSCache, NSObject, WBSFaviconProviderPersistenceController, NSCalendar, NSURL, NSArray, NSString;

@interface WBSFaviconProvider : NSObject <WBSSiteMetadataProvider> {

	NSMutableDictionary* _hostsToRequestsMap;
	NSCache* _responseCache;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _internalSavingQueue;
	NSMutableDictionary* _urlsToFaviconRecordsSavedDuringMigration;
	WBSFaviconProviderPersistenceController* _persistenceController;
	NSCalendar* _calendar;
	double _expirationInterval;
	long long _providerState;
	unsigned long long _privateDataRetentionCount;
	CGSize _scaledPreferredIconSize;
	/*^block*/id _shouldCheckIntegrityWhenOpeningDatabaseBlock;
	BOOL _isReadOnly;
	id<WBSSiteMetadataProviderDelegate> _providerDelegate;
	NSURL* _baseURL;
	double _preferredIconScale;
	NSArray* _allIconScales;
	CGSize _preferredIconSize;

}

@property (nonatomic,readonly) NSURL * baseURL;                                                        //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) CGSize preferredIconSize;                                               //@synthesize preferredIconSize=_preferredIconSize - In the implementation block
@property (nonatomic,readonly) double preferredIconScale;                                              //@synthesize preferredIconScale=_preferredIconScale - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allIconScales;                                           //@synthesize allIconScales=_allIconScales - In the implementation block
@property (nonatomic,readonly) BOOL isReadOnly;                                                        //@synthesize isReadOnly=_isReadOnly - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;              //@synthesize providerDelegate=_providerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL providesFavicons; 
+(CGSize)defaultFaviconSize;
-(id)init;
-(void)dealloc;
-(NSURL *)baseURL;
-(BOOL)canHandleRequest:(id)arg1 ;
-(BOOL)isReadOnly;
-(void)stopWatchingUpdatesForRequest:(id)arg1 ;
-(id)initWithPersistenceBaseURL:(id)arg1 persistenceName:(id)arg2 preferredIconSize:(CGSize)arg3 atScale:(double)arg4 allScales:(id)arg5 isReadOnly:(BOOL)arg6 shouldCheckIntegrityWhenOpeningDatabaseBlock:(/*^block*/id)arg7 ;
-(id)fallbackIconForRequest:(id)arg1 ;
-(void)savePendingChangesBeforeTermination;
-(CGSize)preferredIconSize;
-(id)responseForRequest:(id)arg1 willProvideUpdates:(BOOL*)arg2 ;
-(void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2 ;
-(id<WBSSiteMetadataProviderDelegate>)providerDelegate;
-(void)setProviderDelegate:(id<WBSSiteMetadataProviderDelegate>)arg1 ;
-(void)emptyCaches;
-(BOOL)providesFavicons;
-(void)setUpWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)persistenceController;
-(id)_cachedResponseForRequest:(id)arg1 ;
-(void)_updateOutstandingRequestsAfterSuccessfulSetup;
-(void)_atomicallySaveImageData:(id)arg1 iconURL:(id)arg2 pageURL:(id)arg3 originalPageURL:(id)arg4 size:(CGSize)arg5 isPrivate:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)cleanUpAfterPersistenceSetUpDidSucceed:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setUpPersistenceAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_isIconDateExpired:(id)arg1 ;
-(void)_atomicallyLinkPageURLs:(id)arg1 toIconWithInfo:(id)arg2 isPrivate:(BOOL)arg3 ;
-(void)_updateOutstandingRequestsForPageURL:(id)arg1 forceDidReceiveNewData:(BOOL)arg2 ;
-(void)_saveImageData:(id)arg1 iconURL:(id)arg2 pageURL:(id)arg3 originalPageURL:(id)arg4 size:(CGSize)arg5 isPrivate:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)_confirmImageDataShouldBeSaved:(id)arg1 size:(CGSize)arg2 pageURL:(id)arg3 iconURL:(id)arg4 includingPrivateData:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)flushPrivateDataFromMemoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_registerRequest:(id)arg1 ;
-(void)_prepareAndSendResponseForRequests:(id)arg1 forceDidReceiveNewData:(BOOL)arg2 ;
-(id)_hostFromRequest:(id)arg1 ;
-(id)_responseCacheKeyForRequest:(id)arg1 ;
-(id)_responseDictionaryKeyForRequest:(id)arg1 ;
-(id)_hostFromURL:(id)arg1 ;
-(void)_removeCachedResponsesForURL:(id)arg1 ;
-(id)_requestsForHost:(id)arg1 ;
-(void)_addCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)_getIconForRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)builtInIconForRequest:(id)arg1 ;
-(void)imageForRequestDuringPersistenceSetUp:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_linkPageURL:(id)arg1 toIconWithInfo:(id)arg2 isPrivate:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithPersistenceBaseURL:(id)arg1 persistenceName:(id)arg2 preferredIconSize:(CGSize)arg3 atScale:(double)arg4 allScales:(id)arg5 shouldCheckIntegrityWhenOpeningDatabaseBlock:(/*^block*/id)arg6 ;
-(long long)providerState;
-(void)shouldIconDataBeSavedForIconWithPageURL:(id)arg1 originalPageURL:(id)arg2 iconURL:(id)arg3 size:(CGSize)arg4 isPrivate:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)linkIconFromPageURL:(id)arg1 toCurrentPageURL:(id)arg2 isPrivate:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)saveFaviconImageData:(id)arg1 iconURL:(id)arg2 pageURL:(id)arg3 originalPageURL:(id)arg4 size:(CGSize)arg5 isPrivate:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)removeAllIconsForURLStringsNotIn:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeIconForURLString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)retainPrivateData;
-(void)releasePrivateData;
-(void)_removeCachedResponsesForRequest:(id)arg1 ;
-(double)preferredIconScale;
-(NSArray *)allIconScales;
@end

