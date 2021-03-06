//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class PBDataReader;

@protocol PDParserStreamedResponseProvider
- (_Bool)readStreamablePayload:(id)arg1 reader:(PBDataReader *)arg2 error:(id *)arg3;
- (long long)streamablePayloadClassTagValue;
- (Class)streamablePayloadClass;
- (Class)expectedResponseClass;
- (_Bool)canParseStreams;
@end

