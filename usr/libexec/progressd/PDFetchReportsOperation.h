//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDEndpointRequestOperation.h"

@class NSData, NSPredicate;

@interface PDFetchReportsOperation : PDEndpointRequestOperation
{
    NSData *_nextBatchPointer;	// 24 = 0x18
    _Bool _firstTime;	// 32 = 0x20
    NSPredicate *_predicate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100086ac4
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (_Bool)wantsToExecute;	// IMP=0x0000000100086a54
- (_Bool)processResponseObject:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000861f8
- (void)populateClassIDsBuffer:(id)arg1 handoutIDsBuffer:(id)arg2 studentIDsBUffer:(id)arg3;	// IMP=0x0000000100085a34
- (id)requestData;	// IMP=0x0000000100085048
- (void)execute;	// IMP=0x0000000100084ffc
- (Class)expectedResponseClass;	// IMP=0x0000000100084ff0
- (id)acceptContentType;	// IMP=0x0000000100084fe0
- (id)requestContentType;	// IMP=0x0000000100084fd0
- (id)endpointIdentifier;	// IMP=0x0000000100084fc4
- (void)prepare;	// IMP=0x0000000100084f10
- (id)initWithPredicate:(id)arg1 database:(id)arg2;	// IMP=0x0000000100084e78

@end

