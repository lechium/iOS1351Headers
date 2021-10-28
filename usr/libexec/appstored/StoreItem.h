//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString, NSURL, StoreAsset, TimeWindow;

@interface StoreItem : NSObject <NSCopying>
{
    _Bool _automatic;	// 8 = 0x8
    _Bool _gameCenterEnabled;	// 9 = 0x9
    _Bool _gameCenterEverEnabled;	// 10 = 0xa
    _Bool _hasMessagesExtension;	// 11 = 0xb
    _Bool _hasWatchApp;	// 12 = 0xc
    _Bool _hasWatchIndependentApp;	// 13 = 0xd
    _Bool _hasWatchOnlyApp;	// 14 = 0xe
    _Bool _launchProhibited;	// 15 = 0xf
    _Bool _purchasedRedownload;	// 16 = 0x10
    _Bool _supports32BitOnly;	// 17 = 0x11
    NSData *_appReceiptData;	// 24 = 0x18
    NSString *_artistName;	// 32 = 0x20
    NSString *_artworkURL;	// 40 = 0x28
    StoreAsset *_assetDeltaPackage;	// 48 = 0x30
    StoreAsset *_assetFullPackage;	// 56 = 0x38
    NSNumber *_betaExternalVersionID;	// 64 = 0x40
    NSString *_bundleID;	// 72 = 0x48
    NSString *_bundleShortVersion;	// 80 = 0x50
    NSString *_bundleVersion;	// 88 = 0x58
    NSString *_cancelDownloadURL;	// 96 = 0x60
    NSDictionary *_capabilities;	// 104 = 0x68
    NSNumber *_evid;	// 112 = 0x70
    NSString *_genre;	// 120 = 0x78
    NSNumber *_genreID;	// 128 = 0x80
    NSNumber *_iAdAttribution;	// 136 = 0x88
    NSString *_iAdConversionString;	// 144 = 0x90
    NSString *_iAdImpressionString;	// 152 = 0x98
    NSNumber *_itemID;	// 160 = 0xa0
    NSString *_itemName;	// 168 = 0xa8
    NSString *_kind;	// 176 = 0xb0
    NSString *_messagesArtworkURL;	// 184 = 0xb8
    NSURL *_preflightPackageURL;	// 192 = 0xc0
    NSString *_purchaseDate;	// 200 = 0xc8
    NSString *_redownloadParams;	// 208 = 0xd0
    NSString *_releaseDate;	// 216 = 0xd8
    NSString *_ratingLabel;	// 224 = 0xe0
    NSNumber *_ratingRank;	// 232 = 0xe8
    NSString *_storefront;	// 240 = 0xf0
    NSString *_storeTransactionID;	// 248 = 0xf8
    NSString *_storeCohort;	// 256 = 0x100
    NSArray *_subGenres;	// 264 = 0x108
    TimeWindow *_optimalDownloadWindow;	// 272 = 0x110
    NSDictionary *_nameTranscriptions;	// 280 = 0x118
}

+ (id)itemWithDictionary:(id)arg1;	// IMP=0x000000010023ca64
- (void).cxx_destruct;	// IMP=0x000000010023de0c
@property(readonly) NSDictionary *nameTranscriptions; // @synthesize nameTranscriptions=_nameTranscriptions;
@property(readonly) TimeWindow *optimalDownloadWindow; // @synthesize optimalDownloadWindow=_optimalDownloadWindow;
@property(readonly) _Bool supports32BitOnly; // @synthesize supports32BitOnly=_supports32BitOnly;
@property(readonly) NSArray *subGenres; // @synthesize subGenres=_subGenres;
@property(readonly) NSString *storeCohort; // @synthesize storeCohort=_storeCohort;
@property(readonly) NSString *storeTransactionID; // @synthesize storeTransactionID=_storeTransactionID;
@property(readonly) NSString *storefront; // @synthesize storefront=_storefront;
@property(readonly) NSNumber *ratingRank; // @synthesize ratingRank=_ratingRank;
@property(readonly) NSString *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property(readonly) NSString *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(readonly) NSString *redownloadParams; // @synthesize redownloadParams=_redownloadParams;
@property(readonly, getter=isPurchasedRedownload) _Bool purchasedRedownload; // @synthesize purchasedRedownload=_purchasedRedownload;
@property(readonly) NSString *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property(readonly) NSURL *preflightPackageURL; // @synthesize preflightPackageURL=_preflightPackageURL;
@property(readonly) NSString *messagesArtworkURL; // @synthesize messagesArtworkURL=_messagesArtworkURL;
@property(readonly) _Bool launchProhibited; // @synthesize launchProhibited=_launchProhibited;
@property(readonly) NSString *kind; // @synthesize kind=_kind;
@property(readonly) NSString *itemName; // @synthesize itemName=_itemName;
@property(readonly) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(readonly) NSString *iAdImpressionString; // @synthesize iAdImpressionString=_iAdImpressionString;
@property(readonly) NSString *iAdConversionString; // @synthesize iAdConversionString=_iAdConversionString;
@property(readonly) NSNumber *iAdAttribution; // @synthesize iAdAttribution=_iAdAttribution;
@property(readonly) _Bool hasWatchOnlyApp; // @synthesize hasWatchOnlyApp=_hasWatchOnlyApp;
@property(readonly) _Bool hasWatchIndependentApp; // @synthesize hasWatchIndependentApp=_hasWatchIndependentApp;
@property(readonly) _Bool hasWatchApp; // @synthesize hasWatchApp=_hasWatchApp;
@property(readonly) _Bool hasMessagesExtension; // @synthesize hasMessagesExtension=_hasMessagesExtension;
@property(readonly) NSNumber *genreID; // @synthesize genreID=_genreID;
@property(readonly) NSString *genre; // @synthesize genre=_genre;
@property(readonly) _Bool gameCenterEverEnabled; // @synthesize gameCenterEverEnabled=_gameCenterEverEnabled;
@property(readonly) _Bool gameCenterEnabled; // @synthesize gameCenterEnabled=_gameCenterEnabled;
@property(readonly) NSNumber *evid; // @synthesize evid=_evid;
@property(readonly) NSDictionary *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly) NSString *cancelDownloadURL; // @synthesize cancelDownloadURL=_cancelDownloadURL;
@property(readonly) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(readonly) NSString *bundleShortVersion; // @synthesize bundleShortVersion=_bundleShortVersion;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly) NSNumber *betaExternalVersionID; // @synthesize betaExternalVersionID=_betaExternalVersionID;
@property(readonly, getter=isAutomatic) _Bool automatic; // @synthesize automatic=_automatic;
@property(readonly) StoreAsset *assetFullPackage; // @synthesize assetFullPackage=_assetFullPackage;
@property(readonly) StoreAsset *assetDeltaPackage; // @synthesize assetDeltaPackage=_assetDeltaPackage;
@property(readonly) NSString *artworkURL; // @synthesize artworkURL=_artworkURL;
@property(readonly) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly) NSData *appReceiptData; // @synthesize appReceiptData=_appReceiptData;
- (void)_parseMetadataFromDictionary:(id)arg1;	// IMP=0x000000010023d3c0
- (void)_parseAssetsFromDictionary:(id)arg1 applyingAssetStrategy:(long long)arg2 withInstalledItem:(id)arg3;	// IMP=0x000000010023d16c
- (id)description;	// IMP=0x000000010023d0c8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010023cc8c
- (id)copyWritableMetadataForAccount:(id)arg1 includeVariant:(_Bool)arg2;	// IMP=0x000000010023cbc0
- (id)copyWritableMetadataForAccount:(id)arg1;	// IMP=0x000000010023cbb0
- (id)initWithDictionary:(id)arg1 applyingAssetStrategy:(long long)arg2 installedItem:(id)arg3;	// IMP=0x000000010023cabc
- (id)_newDateFormatter;	// IMP=0x000000010023e0b0
@property(readonly) NSDate *iAdImpressionDate;
@property(readonly) NSDate *iAdConversionDate;

@end
