/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WBSSiteMetadataProvider.h>

@protocol WBSSiteMetadataProviderDelegate;
@class WBSSiteMetadataImageCache, NSString;

@interface _SFLinkPresentationIconCache : NSObject <WBSSiteMetadataProvider> {

	WBSSiteMetadataImageCache* _imageCache;
	id<WBSSiteMetadataProviderDelegate> _providerDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;              //@synthesize providerDelegate=_providerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL providesFavicons; 
-(void)dealloc;
-(BOOL)canHandleRequest:(id)arg1 ;
-(void)savePendingChangesBeforeTermination;
-(id)imageForHost:(id)arg1 ;
-(void)saveImage:(id)arg1 forHost:(id)arg2 ;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(id)responseForRequest:(id)arg1 willProvideUpdates:(BOOL*)arg2 ;
-(void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2 ;
-(id<WBSSiteMetadataProviderDelegate>)providerDelegate;
-(void)setProviderDelegate:(id<WBSSiteMetadataProviderDelegate>)arg1 ;
-(void)emptyCaches;
-(void)purgeUnneededCacheEntries;
-(id)initWithImageDirectoryURL:(id)arg1 ;
@end
