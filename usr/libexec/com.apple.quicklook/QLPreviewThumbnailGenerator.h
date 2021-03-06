//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, QLPlatformImage, QLThumbnailItem, QLThumbnailMetadata;
@protocol OS_dispatch_queue;

@interface QLPreviewThumbnailGenerator : NSObject
{
    QLThumbnailItem *_item;	// 8 = 0x8
    struct CGSize _size;	// 16 = 0x10
    double _minSize;	// 32 = 0x20
    double _scale;	// 40 = 0x28
    QLPlatformImage *_thumbnailImage;	// 48 = 0x30
    int _status;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_generationQueue;	// 64 = 0x40
    unsigned long long _badgeType;	// 72 = 0x48
    _Bool _addDecorations;	// 80 = 0x50
    int _flavor;	// 84 = 0x54
    _Bool _wantsLowQuality;	// 88 = 0x58
    _Bool _resultIsLowQuality;	// 89 = 0x59
    _Bool _resultHasIconModeApplied;	// 90 = 0x5a
    _Bool _wantsJPEGRepresentationInstead;	// 91 = 0x5b
    _Bool _wantsBaseline;	// 92 = 0x5c
    int _interpolationQuality;	// 96 = 0x60
    QLThumbnailMetadata *generatedProperties;	// 104 = 0x68
    NSData *_jpegRepresentation;	// 112 = 0x70
    unsigned long long _sandboxExtension;	// 120 = 0x78
    struct CGRect _contentRect;	// 128 = 0x80
}

+ (id)mutableAttributedStringForThumbnailWithURL:(id)arg1 documentAttributes:(id *)arg2;	// IMP=0x0000000100021320
+ (id)mutableAttributedStringForThumbnailWithData:(id)arg1 uti:(id)arg2 encoding:(unsigned int)arg3 documentAttributes:(id *)arg4;	// IMP=0x0000000100021278
+ (id)readingOptionsFromUTI:(id)arg1 encoding:(unsigned int)arg2;	// IMP=0x0000000100021100
+ (id)_textDocumentTypeFromUTI:(id)arg1;	// IMP=0x0000000100021058
+ (id)generateIconDataFromThumbnailData:(id)arg1 inputFormat:(id)arg2 outputFormat:(id *)arg3 outputContentRect:(struct CGRect *)arg4 desiredSize:(struct CGSize)arg5 desiredScale:(double)arg6 desiredFlavor:(int)arg7 wantsLowQuality:(_Bool)arg8 iconVariant:(long long)arg9;	// IMP=0x000000010001fe10
+ (double)cornerRadiusForSize:(struct CGSize)arg1;	// IMP=0x000000010001fde0
+ (_Bool)canGenerateThumbnailForURL:(id)arg1;	// IMP=0x000000010001fb2c
+ (id)generatorForURL:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x000000010001fa6c
+ (id)generatorForURL:(id)arg1 maxSize:(struct CGSize)arg2 minSize:(double)arg3 scale:(double)arg4 lowQuality:(_Bool)arg5 decorations:(_Bool)arg6 wantsBaseline:(_Bool)arg7;	// IMP=0x000000010001f924
+ (id)generatorForURL:(id)arg1 maxSize:(struct CGSize)arg2 scale:(double)arg3 lowQuality:(_Bool)arg4 decorations:(_Bool)arg5 wantsBaseline:(_Bool)arg6;	// IMP=0x000000010001f7e0
+ (id)generatorForThumbnailItem:(id)arg1 size:(struct CGSize)arg2 minSize:(double)arg3 scale:(double)arg4;	// IMP=0x000000010001f74c
+ (id)generatorForThumbnailItem:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3;	// IMP=0x000000010001f6bc
- (void).cxx_destruct;	// IMP=0x00000001000223cc
@property(retain) QLThumbnailItem *item; // @synthesize item=_item;
@property _Bool wantsBaseline; // @synthesize wantsBaseline=_wantsBaseline;
@property unsigned long long sandboxExtension; // @synthesize sandboxExtension=_sandboxExtension;
@property(readonly) NSData *jpegRepresentation; // @synthesize jpegRepresentation=_jpegRepresentation;
@property _Bool wantsJPEGRepresentationInstead; // @synthesize wantsJPEGRepresentationInstead=_wantsJPEGRepresentationInstead;
@property _Bool resultHasIconModeApplied; // @synthesize resultHasIconModeApplied=_resultHasIconModeApplied;
@property struct CGRect contentRect; // @synthesize contentRect=_contentRect;
@property int interpolationQuality; // @synthesize interpolationQuality=_interpolationQuality;
@property double minSize; // @synthesize minSize=_minSize;
@property int status; // @synthesize status=_status;
@property(retain) QLThumbnailMetadata *generatedProperties; // @synthesize generatedProperties;
@property _Bool addDecorations; // @synthesize addDecorations=_addDecorations;
@property double scale; // @synthesize scale=_scale;
@property _Bool wantsLowQuality; // @synthesize wantsLowQuality=_wantsLowQuality;
@property _Bool resultIsLowQuality; // @synthesize resultIsLowQuality=_resultIsLowQuality;
@property int flavor; // @synthesize flavor=_flavor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *generationQueue; // @synthesize generationQueue=_generationQueue;
@property(retain) QLPlatformImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
- (void)_generateThumbnailFromThirdPartyExtensionAndReplyWith:(CDUnknownBlockType)arg1;	// IMP=0x0000000100021f70
- (id)_thumbnailForIWorkFile;	// IMP=0x0000000100021d9c
- (id)_thumbnailForMovie;	// IMP=0x0000000100021864
- (id)_thumbnailForText;	// IMP=0x0000000100021418
- (double)_minimumDimensionForPDFPage:(id)arg1 requestThumbnailSize:(struct CGSize)arg2;	// IMP=0x0000000100020fe4
- (id)_thumbnailForPDF;	// IMP=0x0000000100020db4
- (id)_thumbnailForImageSource:(struct CGImageSource *)arg1 contentTypeIdentifier:(id)arg2;	// IMP=0x0000000100020ce0
- (id)_thumbnailForImage;	// IMP=0x0000000100020b3c
- (id)_thumbnailForLivePhoto;	// IMP=0x00000001000209a4
- (struct CGContext *)_beginContextWithSize:(struct CGSize)arg1;	// IMP=0x000000010002094c
- (struct CGContext *)_beginContext;	// IMP=0x000000010002093c
- (void)_replyWithImage:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100020524
- (void)cancel;	// IMP=0x0000000100020514
- (void)generateWithWillStartBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000203bc
- (void)generateWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100020310
- (void)_generateThumbnailWithWillStartBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001fbbc
- (struct CGSize)_pixelSize;	// IMP=0x000000010001fba8
- (id)initWithThumbnailItem:(id)arg1 size:(struct CGSize)arg2 minSize:(double)arg3 scale:(double)arg4 decorations:(_Bool)arg5;	// IMP=0x000000010001f69c
- (id)initWithThumbnailItem:(id)arg1 size:(struct CGSize)arg2 minSize:(double)arg3 scale:(double)arg4 lowQuality:(_Bool)arg5 wantsBaseline:(_Bool)arg6 decorations:(_Bool)arg7 badgeType:(unsigned long long)arg8 interpolationQuality:(int)arg9;	// IMP=0x000000010001f5c4

@end

