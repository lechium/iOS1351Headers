/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>

@class NSMapTable, SKUIResourceLoader, NSHashTable, NSString;

@interface SKUIBadgeTextAttachmentLoader : NSObject <SKUIArtworkRequestDelegate> {

	NSMapTable* _imageRequests;
	SKUIResourceLoader* _resourceLoader;
	NSHashTable* _stringViews;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithResourceLoader:(id)arg1 ;
-(void)connectStringView:(id)arg1 ;
-(void)disconnectStringView:(id)arg1 ;
-(BOOL)loadImageForBadge:(id)arg1 layout:(id)arg2 reason:(long long)arg3 ;
@end

