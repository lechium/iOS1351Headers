/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SUItemDataSource : NSObject
+(id)sharedDataSource;
+(void)setSharedDataSource:(id)arg1 ;
-(id)newItemWithItemDictionary:(id)arg1 ;
-(id)newExternalDownloadWithItem:(id)arg1 storeOffer:(id)arg2 ;
-(id)newPurchaseWithItem:(id)arg1 storeOffer:(id)arg2 ;
-(long long)itemTypeForTypeString:(id)arg1 ;
-(id)_newDownloadForDocumentItem:(id)arg1 storeOffer:(id)arg2 ;
-(id)_newDownloadForPodcastEpisode:(id)arg1 storeOffer:(id)arg2 ;
-(long long)itemTypeForItem:(id)arg1 ;
-(id)_thumbnailImageForItem:(id)arg1 ;
-(id)_newTonePurchaseWithPurchase:(id)arg1 ;
-(id)_newDownloadMetadataForPodcastEpisode:(id)arg1 storeOffer:(id)arg2 ;
-(long long)estimatedDiskSpaceNeededForItem:(id)arg1 storeOffer:(id)arg2 ;
-(id)newDisplayItemValidationTestsForItem:(id)arg1 ;
-(id)typeStringForItemType:(long long)arg1 ;
@end
