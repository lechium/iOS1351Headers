/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:37 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCPurchaseMetadataFetcher.h>

@protocol FCPurchaseMetadataFetcher
@required
-(id)fetchPurchaseMetadataForPurchaseID:(id)arg1 restorePurcase:(BOOL)arg2;

@end


@class NSNumber, FCPurchaseLookupResult;

@interface FCPurchaseMetadataFetcher : NSObject <FCPurchaseMetadataFetcher> {

	NSNumber* _bundleID;
	NSNumber* _externalVersionID;
	FCPurchaseLookupResult* _lookupResult;

}

@property (nonatomic,copy) NSNumber * bundleID;                                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSNumber * externalVersionID;                         //@synthesize externalVersionID=_externalVersionID - In the implementation block
@property (nonatomic,retain) FCPurchaseLookupResult * lookupResult;              //@synthesize lookupResult=_lookupResult - In the implementation block
-(NSNumber *)bundleID;
-(void)setBundleID:(NSNumber *)arg1 ;
-(void)setExternalVersionID:(NSNumber *)arg1 ;
-(NSNumber *)externalVersionID;
-(id)fetchPurchaseMetadataForPurchaseID:(id)arg1 restorePurcase:(BOOL)arg2 ;
-(id)promisePurchaseLookupWithAppAdamID:(id)arg1 ;
-(void)setLookupResult:(FCPurchaseLookupResult *)arg1 ;
-(FCPurchaseLookupResult *)lookupResult;
-(id)promiseStoreExternalVersionWithLookupResult:(id)arg1 ;
-(id)promiseProductLookupWithLookupResult:(id)arg1 externalVersionID:(id)arg2 restorePurcase:(BOOL)arg3 ;
-(id)createAMSLookupWithProfile:(id)arg1 ;
-(id)checkIfOfferUsedAlreadyWithAppAdamID:(id)arg1 ;
-(id)promiseStoreExternalVersionWithAppAdamID:(id)arg1 ;
-(id)promiseBundleIDWithAppAdamID:(id)arg1 ;
@end

