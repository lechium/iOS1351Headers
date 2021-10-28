//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UISDActivityItemData : NSObject <NSSecureCoding>
{
    NSArray *_securityContexts;	// 8 = 0x8
    NSDictionary *_openURLAnnotationsByURL;	// 16 = 0x10
    NSMutableDictionary *_attachmentNamesByItem;	// 24 = 0x18
    NSMutableDictionary *_subjectsByItem;	// 32 = 0x20
    NSMutableDictionary *_previewImagesByItem;	// 40 = 0x28
    NSMutableDictionary *_previewImageDataByItem;	// 48 = 0x30
    NSMutableDictionary *_dataTypesByItem;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010010bd8c
- (void).cxx_destruct;	// IMP=0x000000010010c5a4
@property(readonly, nonatomic) NSMutableDictionary *dataTypesByItem; // @synthesize dataTypesByItem=_dataTypesByItem;
@property(readonly, nonatomic) NSMutableDictionary *previewImageDataByItem; // @synthesize previewImageDataByItem=_previewImageDataByItem;
@property(readonly, nonatomic) NSMutableDictionary *previewImagesByItem; // @synthesize previewImagesByItem=_previewImagesByItem;
@property(readonly, nonatomic) NSMutableDictionary *subjectsByItem; // @synthesize subjectsByItem=_subjectsByItem;
@property(readonly, nonatomic) NSMutableDictionary *attachmentNamesByItem; // @synthesize attachmentNamesByItem=_attachmentNamesByItem;
@property(retain, nonatomic) NSDictionary *openURLAnnotationsByURL; // @synthesize openURLAnnotationsByURL=_openURLAnnotationsByURL;
@property(retain, nonatomic) NSArray *securityContexts; // @synthesize securityContexts=_securityContexts;
- (id)dataTypeForItem:(id)arg1;	// IMP=0x000000010010c544
- (void)addDataType:(id)arg1 forItem:(id)arg2;	// IMP=0x000000010010c4f4
- (id)previewImageDataForItem:(id)arg1;	// IMP=0x000000010010c4e4
- (void)addPreviewImageData:(id)arg1 forItem:(id)arg2;	// IMP=0x000000010010c494
- (id)previewImageForItem:(id)arg1;	// IMP=0x000000010010c484
- (void)addPreviewImage:(id)arg1 forItem:(id)arg2;	// IMP=0x000000010010c434
- (id)subjectForItem:(id)arg1;	// IMP=0x000000010010c424
- (void)addSubject:(id)arg1 forItem:(id)arg2;	// IMP=0x000000010010c3d4
- (id)attachmentNameForItem:(id)arg1;	// IMP=0x000000010010c3c4
- (void)addAttachmentName:(id)arg1 forItem:(id)arg2;	// IMP=0x000000010010c374
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010010c1a4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010010bee4
- (id)init;	// IMP=0x000000010010bd94

@end
