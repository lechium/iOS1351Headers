/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariSharedUI/WBSSiteMetadataManager.h>

@class _SFFaviconProvider, _SFPasswordTouchIconCache, _SFTouchIconCache, WBSLeadImageCache, _SFLinkPresentationIconCache;

@interface _SFSiteMetadataManager : WBSSiteMetadataManager {

	_SFFaviconProvider* _faviconProvider;
	_SFPasswordTouchIconCache* _passwordTouchIconCache;
	_SFTouchIconCache* _touchIconCache;
	WBSLeadImageCache* _leadImageCache;
	_SFLinkPresentationIconCache* _linkPresentationIconCache;

}

@property (nonatomic,readonly) _SFFaviconProvider * faviconProvider;                                  //@synthesize faviconProvider=_faviconProvider - In the implementation block
@property (nonatomic,readonly) _SFPasswordTouchIconCache * passwordTouchIconCache;                    //@synthesize passwordTouchIconCache=_passwordTouchIconCache - In the implementation block
@property (nonatomic,readonly) _SFTouchIconCache * touchIconCache;                                    //@synthesize touchIconCache=_touchIconCache - In the implementation block
@property (nonatomic,readonly) WBSLeadImageCache * leadImageCache;                                    //@synthesize leadImageCache=_leadImageCache - In the implementation block
@property (nonatomic,readonly) _SFLinkPresentationIconCache * linkPresentationIconCache;              //@synthesize linkPresentationIconCache=_linkPresentationIconCache - In the implementation block
+(id)sharedSiteMetadataManager;
+(void)setSharedSiteMetadataManager:(id)arg1 ;
+(void)setSharedSiteMetadataManagerProvider:(id)arg1 ;
-(_SFTouchIconCache *)touchIconCache;
-(_SFLinkPresentationIconCache *)linkPresentationIconCache;
-(id)initWithInjectedBundleURL:(id)arg1 imageCacheDirectoryURL:(id)arg2 cacheIsReadOnly:(BOOL)arg3 metadataType:(unsigned long long)arg4 ;
-(void)scheduleLowPriorityRequestForBookmarks:(id)arg1 ;
-(_SFFaviconProvider *)faviconProvider;
-(_SFPasswordTouchIconCache *)passwordTouchIconCache;
-(WBSLeadImageCache *)leadImageCache;
@end
