/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>

@class SKUIResourceLoader, NSMapTable, SKUIImageDataConsumer, NSMutableIndexSet, UIImage, SKUISwooshViewController, NSString;

@interface SKUISwooshArtworkLoader : NSObject <SKUIArtworkRequestDelegate> {

	SKUIResourceLoader* _artworkLoader;
	NSMapTable* _artworkRequestIDs;
	SKUIImageDataConsumer* _imageDataConsumer;
	NSMutableIndexSet* _outstandingRequestIDs;
	UIImage* _placeholderImage;
	SKUISwooshViewController* _swooshViewController;

}

@property (nonatomic,readonly) SKUIResourceLoader * artworkLoader;                           //@synthesize artworkLoader=_artworkLoader - In the implementation block
@property (nonatomic,readonly) SKUISwooshViewController * swooshViewController;              //@synthesize swooshViewController=_swooshViewController - In the implementation block
@property (nonatomic,retain) SKUIImageDataConsumer * imageDataConsumer;                      //@synthesize imageDataConsumer=_imageDataConsumer - In the implementation block
@property (nonatomic,readonly) UIImage * placeholderImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImage *)placeholderImage;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(SKUIResourceLoader *)artworkLoader;
-(SKUIImageDataConsumer *)imageDataConsumer;
-(void)setImageDataConsumer:(SKUIImageDataConsumer *)arg1 ;
-(id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2 ;
-(id)cachedImageForObject:(id)arg1 ;
-(BOOL)loadImageForObject:(id)arg1 URL:(id)arg2 reason:(long long)arg3 ;
-(SKUISwooshViewController *)swooshViewController;
-(unsigned long long)artworkRequestIdentifierForObject:(id)arg1 ;
-(void)setImage:(id)arg1 forRequest:(id)arg2 ;
-(void)loadImagesForNextPageWithReason:(long long)arg1 ;
-(void)deprioritizePendingImageLoads;
-(void)setPlaceholderColorWithColorScheme:(id)arg1 ;
-(BOOL)loadImageForObject:(id)arg1 artworkRequest:(id)arg2 reason:(long long)arg3 ;
-(void)cancelImageLoading;
@end
