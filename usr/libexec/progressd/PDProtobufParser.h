//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDParser.h"

@protocol PDParserStreamedResponseProvider;

@interface PDProtobufParser : PDParser
{
    id <PDParserStreamedResponseProvider> _provider;	// 8 = 0x8
    CDUnknownBlockType _payloadProcessBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100084e3c
@property(copy, nonatomic) CDUnknownBlockType payloadProcessBlock; // @synthesize payloadProcessBlock=_payloadProcessBlock;
@property(nonatomic) __weak id <PDParserStreamedResponseProvider> provider; // @synthesize provider=_provider;
- (_Bool)parseStreamedData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100084adc
- (id)parseData:(id)arg1 expectedClass:(Class)arg2 error:(id *)arg3;	// IMP=0x00000001000848e8
- (_Bool)configureForStreamedParsingWithProvider:(id)arg1 payloadProcessingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010008484c
- (_Bool)supportsStreamedParsing;	// IMP=0x0000000100084788
- (id)init;	// IMP=0x000000010008472c

@end

