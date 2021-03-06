//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DKDAAPParserDelegate-Protocol.h"

@class NSData, NSNumber, NSString;

@interface PurchaseHistoryItemsDAAPResponseMetadataParser : NSObject <DKDAAPParserDelegate>
{
    NSData *_data;	// 8 = 0x8
    _Bool _hasParsedData;	// 16 = 0x10
    NSNumber *_isUpdate;	// 24 = 0x18
    NSNumber *_revision;	// 32 = 0x20
    NSNumber *_status;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010007f35c
@property(readonly) NSNumber *status; // @synthesize status=_status;
@property(readonly) NSNumber *revision; // @synthesize revision=_revision;
@property(readonly) NSNumber *isUpdate; // @synthesize isUpdate=_isUpdate;
- (void)parser:(id)arg1 didEndContainerCode:(unsigned int)arg2;	// IMP=0x000000010007f334
- (void)parser:(id)arg1 didParseDataCode:(unsigned int)arg2 bytes:(char *)arg3 contentLength:(unsigned int)arg4;	// IMP=0x000000010007f1ec
- (void)parser:(id)arg1 didStartContainerCode:(unsigned int)arg2 contentLength:(unsigned int)arg3;	// IMP=0x000000010007f1e8
- (_Bool)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned int)arg2;	// IMP=0x000000010007f1d4
- (_Bool)parser:(id)arg1 shouldParseCode:(unsigned int)arg2;	// IMP=0x000000010007f178
- (void)parser:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000010007f048
- (void)parserDidCancel:(id)arg1;	// IMP=0x000000010007ef40
- (void)parser:(id)arg1 didFinishWithState:(long long)arg2;	// IMP=0x000000010007ef34
- (void)parserDidStart:(id)arg1;	// IMP=0x000000010007eef0
- (void)parseMetadata;	// IMP=0x000000010007ee7c
- (id)initWithData:(id)arg1;	// IMP=0x000000010007ee04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

