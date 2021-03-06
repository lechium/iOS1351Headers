//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BLDownloadDataConsumer.h"

#import "SZExtractorDelegate-Protocol.h"

@class NSDictionary, NSString, SZExtractor;

__attribute__((visibility("hidden")))
@interface BLStreamingZipDownloadDataConsumer : BLDownloadDataConsumer <SZExtractorDelegate>
{
    SZExtractor *_extractor;	// 8 = 0x8
    _Bool _hasConsumedData;	// 16 = 0x10
    NSDictionary *_options;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    double _percentComplete;	// 40 = 0x28
    unsigned long long _resumptionOffset;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100004f88
- (unsigned long long)resumptionOffset;	// IMP=0x0000000100004f78
- (double)percentComplete;	// IMP=0x0000000100004f68
- (_Bool)hasConsumedData;	// IMP=0x0000000100004f58
- (id)_stringWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000100004ee4
- (id)_stringWithFileSystemRepresentation:(const char *)arg1;	// IMP=0x0000000100004ea8
- (unsigned long long)_diskUsageForPath:(id)arg1;	// IMP=0x0000000100004754
- (void)extractionCompleteAtArchivePath:(id)arg1;	// IMP=0x000000010000469c
- (void)setExtractionProgress:(double)arg1;	// IMP=0x000000010000468c
- (void)truncate;	// IMP=0x00000001000044f4
- (void)suspend;	// IMP=0x0000000100004440
- (void)reset;	// IMP=0x00000001000042dc
- (_Bool)finish:(id *)arg1;	// IMP=0x000000010000405c
- (unsigned long long)diskUsage;	// IMP=0x000000010000400c
- (_Bool)consumeData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100003d5c
- (id)initWithPath:(id)arg1 options:(id)arg2;	// IMP=0x0000000100003a60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

