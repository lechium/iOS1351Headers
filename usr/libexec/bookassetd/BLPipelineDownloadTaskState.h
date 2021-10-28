//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSNumber, NSString, SSOperationProgress;

__attribute__((visibility("hidden")))
@interface BLPipelineDownloadTaskState : NSObject <NSCopying>
{
    _Bool _requiresDownloadHandler;	// 8 = 0x8
    _Bool _isLocalCacheServer;	// 9 = 0x9
    _Bool _isRestore;	// 10 = 0xa
    _Bool _canPause;	// 11 = 0xb
    _Bool _isSample;	// 12 = 0xc
    _Bool _isPurchase;	// 13 = 0xd
    NSString *_downloadIdentifier;	// 16 = 0x10
    long long _assetIdentifier;	// 24 = 0x18
    NSString *_permLink;	// 32 = 0x20
    long long _automaticType;	// 40 = 0x28
    NSString *_bundleIdentifier;	// 48 = 0x30
    NSString *_kind;	// 56 = 0x38
    long long _transferBytesExpected;	// 64 = 0x40
    long long _transferBytesWritten;	// 72 = 0x48
    double _transferProgressFraction;	// 80 = 0x50
    unsigned long long _transferResumptionOffset;	// 88 = 0x58
    long long _downloadPhase;	// 96 = 0x60
    NSString *_artistName;	// 104 = 0x68
    NSString *_title;	// 112 = 0x70
    NSString *_subtitle;	// 120 = 0x78
    NSString *_genre;	// 128 = 0x80
    NSString *_thumbnailImageURL;	// 136 = 0x88
    NSDate *_purchaseDate;	// 144 = 0x90
    long long _persistentIdentifier;	// 152 = 0x98
    NSNumber *_storeAccountIdentifier;	// 160 = 0xa0
    SSOperationProgress *_overallProgress;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0000000100005a4c
@property(retain, nonatomic) SSOperationProgress *overallProgress; // @synthesize overallProgress=_overallProgress;
@property(readonly, nonatomic) NSNumber *storeAccountIdentifier; // @synthesize storeAccountIdentifier=_storeAccountIdentifier;
@property(readonly, nonatomic) long long persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(readonly, nonatomic) NSDate *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property(readonly, nonatomic) _Bool isPurchase; // @synthesize isPurchase=_isPurchase;
@property(readonly, nonatomic) _Bool isSample; // @synthesize isSample=_isSample;
@property(readonly, nonatomic) _Bool canPause; // @synthesize canPause=_canPause;
@property(readonly, nonatomic) _Bool isRestore; // @synthesize isRestore=_isRestore;
@property(copy, nonatomic) NSString *thumbnailImageURL; // @synthesize thumbnailImageURL=_thumbnailImageURL;
@property(copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(nonatomic) long long downloadPhase; // @synthesize downloadPhase=_downloadPhase;
@property(nonatomic) unsigned long long transferResumptionOffset; // @synthesize transferResumptionOffset=_transferResumptionOffset;
@property(nonatomic) double transferProgressFraction; // @synthesize transferProgressFraction=_transferProgressFraction;
@property(nonatomic) long long transferBytesWritten; // @synthesize transferBytesWritten=_transferBytesWritten;
@property(nonatomic) long long transferBytesExpected; // @synthesize transferBytesExpected=_transferBytesExpected;
@property(nonatomic) _Bool isLocalCacheServer; // @synthesize isLocalCacheServer=_isLocalCacheServer;
@property(nonatomic) _Bool requiresDownloadHandler; // @synthesize requiresDownloadHandler=_requiresDownloadHandler;
@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) long long automaticType; // @synthesize automaticType=_automaticType;
@property(copy, nonatomic) NSString *permLink; // @synthesize permLink=_permLink;
@property(nonatomic) long long assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
@property(copy, nonatomic) NSString *downloadIdentifier; // @synthesize downloadIdentifier=_downloadIdentifier;
- (id)_overallProgress;	// IMP=0x0000000100005868
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000054b8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000053f8
- (unsigned long long)hash;	// IMP=0x00000001000053e8
- (void)setTransferProgressWithBytesWritten:(long long)arg1 totalBytesExpected:(long long)arg2;	// IMP=0x00000001000053c0
- (void)setTransferProgress:(double)arg1;	// IMP=0x0000000100005354
- (void)setFinishProgress:(double)arg1;	// IMP=0x00000001000052dc
- (id)initWithPrepareDownloadResponse:(id)arg1;	// IMP=0x0000000100005018

@end
