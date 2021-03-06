/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:35 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSPointerArray, NSMutableDictionary, NSMutableSet;

@interface _SFDownloadIconCache : NSObject {

	NSPointerArray* _observers;
	NSMutableDictionary* _thumbnailCache;
	NSMutableDictionary* _utiCache;
	NSMutableSet* _activeRequestIdentifiers;

}
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_startThumbnailRequestForSource:(id)arg1 reportGenericIcons:(BOOL)arg2 ;
-(id)_genericIconForUTI:(id)arg1 ;
-(id)_lookupGenericIconForType:(id)arg1 ;
-(void)_didGenerateThumbnail:(id)arg1 forSource:(id)arg2 ;
-(void)_generateThumbnailForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)iconForSource:(id)arg1 ;
-(void)regenerateIconForSource:(id)arg1 ;
@end

