/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, WLKStoreOffer;

@interface WLKOfferListing : NSObject {

	NSArray* _storeOffers;

}

@property (nonatomic,copy,readonly) NSArray * storeOffers;                                 //@synthesize storeOffers=_storeOffers - In the implementation block
@property (nonatomic,copy,readonly) WLKStoreOffer * bestStoreRentalOffer; 
@property (nonatomic,copy,readonly) WLKStoreOffer * bestStoreBuyOffer; 
@property (nonatomic,copy,readonly) WLKStoreOffer * bestStoreGetOffer; 
@property (nonatomic,copy,readonly) WLKStoreOffer * bestStoreRedownloadOffer; 
-(NSArray *)storeOffers;
-(WLKStoreOffer *)bestStoreRentalOffer;
-(WLKStoreOffer *)bestStoreBuyOffer;
-(id)initWithMAPIDictionaries:(id)arg1 ;
-(WLKStoreOffer *)bestStoreGetOffer;
-(WLKStoreOffer *)bestStoreRedownloadOffer;
-(id)_storeOffersFromMAPIDictionaries:(id)arg1 ;
-(id)_bestStoreOfferForOfferType:(unsigned long long)arg1 ;
-(BOOL)_supportsHD;
-(BOOL)_prefersSD;
-(id)_highDefinitionPredicate;
-(id)_standardDefinitionPredicate;
-(id)_filteredStoreContentSource:(id)arg1 ;
@end

