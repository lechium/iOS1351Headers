//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary, NSError, NSString, NSURL, PAMediaConversionServiceResourceURLCollection;
@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MediaConversionRequestTracker : NSObject
{
    PAMediaConversionServiceResourceURLCollection *_sourceURLCollection;	// 8 = 0x8
    PAMediaConversionServiceResourceURLCollection *_destinationURLCollection;	// 16 = 0x10
    NSData *_outputData;	// 24 = 0x18
    NSString *_outputTypeIdentifier;	// 32 = 0x20
    NSURL *_outputURL;	// 40 = 0x28
    NSDictionary *_outputInformation;	// 48 = 0x30
    NSDictionary *_serviceInformation;	// 56 = 0x38
    NSError *_error;	// 64 = 0x40
    NSDate *_startTime;	// 72 = 0x48
    NSDate *_endTime;	// 80 = 0x50
    NSDictionary *_requestOptions;	// 88 = 0x58
    NSURL *_debugDumpDirectoryURL;	// 96 = 0x60
    NSObject<OS_os_transaction> *_transaction;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000100010b6c
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain) NSURL *debugDumpDirectoryURL; // @synthesize debugDumpDirectoryURL=_debugDumpDirectoryURL;
@property(retain) NSDictionary *requestOptions; // @synthesize requestOptions=_requestOptions;
@property(retain) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSDictionary *serviceInformation; // @synthesize serviceInformation=_serviceInformation;
@property(retain) NSDictionary *outputInformation; // @synthesize outputInformation=_outputInformation;
@property(retain) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(retain) NSString *outputTypeIdentifier; // @synthesize outputTypeIdentifier=_outputTypeIdentifier;
@property(retain) NSData *outputData; // @synthesize outputData=_outputData;
@property(retain) PAMediaConversionServiceResourceURLCollection *destinationURLCollection; // @synthesize destinationURLCollection=_destinationURLCollection;
@property(retain) PAMediaConversionServiceResourceURLCollection *sourceURLCollection; // @synthesize sourceURLCollection=_sourceURLCollection;
- (void)storeDebugDumpOutputInformationToURL:(id)arg1 debugInformation:(id)arg2;	// IMP=0x00000001000104b4
- (void)dumpResourceURLCollection:(id)arg1 toParentDirectory:(id)arg2 directoryName:(id)arg3 debugInformation:(id)arg4;	// IMP=0x0000000100010270
- (void)storeDebugDumpInputInformationToURL:(id)arg1 debugInformation:(id)arg2;	// IMP=0x000000010000feec
- (void)storeDebugDump;	// IMP=0x000000010000f9b0
- (void)didCompleteRequest;	// IMP=0x000000010000f6e4
- (_Bool)shouldDump;	// IMP=0x000000010000f688
@property(readonly) NSString *requestIdentifier;
- (id)initWithRequestOptions:(id)arg1;	// IMP=0x000000010000f48c

@end
