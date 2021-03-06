//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDWebServiceConnectionTask.h"

@class NSString;

@interface PDRegistrationTask : PDWebServiceConnectionTask
{
    NSString *_serialNumber;	// 16 = 0x10
    NSString *_authenticationToken;	// 24 = 0x18
    unsigned long long _requestedStatus;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010011d61c
+ (id)_taskWithWebService:(id)arg1 serialNumber:(id)arg2 authToken:(id)arg3 requestedStatus:(unsigned long long)arg4;	// IMP=0x000000010011d478
+ (id)unregisterTaskWithWebService:(id)arg1 serialNumber:(id)arg2 authToken:(id)arg3;	// IMP=0x000000010011d3f4
+ (id)registerTaskWithWebService:(id)arg1 serialNumber:(id)arg2 authToken:(id)arg3;	// IMP=0x000000010011d370
- (void).cxx_destruct;	// IMP=0x000000010011e5c8
@property(nonatomic) unsigned long long requestedStatus; // @synthesize requestedStatus=_requestedStatus;
@property(retain, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
- (_Bool)_matchesRegistrationTask:(id)arg1;	// IMP=0x000000010011e390
- (_Bool)_matchesPersonalizePassTask:(id)arg1;	// IMP=0x000000010011e1c0
- (long long)actionForActiveTask:(id)arg1;	// IMP=0x000000010011e0d4
- (long long)actionForInactiveTask:(id)arg1;	// IMP=0x000000010011e020
- (_Bool)coalescesWithTaskSubclass:(Class)arg1;	// IMP=0x000000010011dfb4
- (id)description;	// IMP=0x000000010011de48
- (void)handleError:(id)arg1;	// IMP=0x000000010011de14
- (void)handleResponse:(id)arg1 data:(id)arg2;	// IMP=0x000000010011dca4
- (id)bodyDictionary;	// IMP=0x000000010011dbec
- (id)headerFields;	// IMP=0x000000010011db44
- (id)endpointComponents;	// IMP=0x000000010011d9f4
- (id)method;	// IMP=0x000000010011d9c0
- (_Bool)pertainsToPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;	// IMP=0x000000010011d8e0
- (_Bool)isValid;	// IMP=0x000000010011d810
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010011d740
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010011d624
- (id)initWithWebService:(id)arg1 serialNumber:(id)arg2 authToken:(id)arg3 requestedStatus:(unsigned long long)arg4;	// IMP=0x000000010011d518

@end

