//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL, NSUUID;

@interface BTCloudNetworkRequest : NSObject
{
    NSURL *_url;	// 8 = 0x8
    NSUUID *_requestID;	// 16 = 0x10
    NSData *_body;	// 24 = 0x18
    NSDictionary *_parameters;	// 32 = 0x20
    NSDictionary *_headers;	// 40 = 0x28
    unsigned long long _httpMethod;	// 48 = 0x30
    NSString *_sourceApplicationBundleIdentifier;	// 56 = 0x38
}

+ (id)requestWithURL:(id)arg1 httpMethod:(unsigned long long)arg2 headers:(id)arg3 parameters:(id)arg4 andBody:(id)arg5;	// IMP=0x000000010002d91c
- (void).cxx_destruct;	// IMP=0x000000010002dc68
@property(copy) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(nonatomic) unsigned long long httpMethod; // @synthesize httpMethod=_httpMethod;
@property(copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSData *body; // @synthesize body=_body;
@property(copy, nonatomic) NSUUID *requestID; // @synthesize requestID=_requestID;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)httpMethodString;	// IMP=0x000000010002dbac
- (id)description;	// IMP=0x000000010002da64

@end

