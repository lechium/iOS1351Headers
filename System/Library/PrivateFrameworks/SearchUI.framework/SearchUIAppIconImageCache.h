/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCache;

@interface SearchUIAppIconImageCache : NSObject {

	NSCache* _imageCache;

}

@property (nonatomic,retain) NSCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
+(id)sharedCache;
-(id)init;
-(NSCache *)imageCache;
-(void)setImageCache:(NSCache *)arg1 ;
-(id)cachedImageForBundleIdentifier:(id)arg1 variant:(unsigned long long)arg2 ;
-(void)updateImage:(id)arg1 forBundleIdentifier:(id)arg2 variant:(unsigned long long)arg3 ;
-(void)dateDidChange;
-(void)appIconImageDidChange:(id)arg1 ;
-(id)cacheKeyForVariant:(unsigned long long)arg1 ;
-(void)clearCacheAndPostNotificationForChangedIconForBundleIdentifier:(id)arg1 ;
@end

