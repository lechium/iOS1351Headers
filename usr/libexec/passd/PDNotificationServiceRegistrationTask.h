//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDNotificationServiceConnectionTask.h"

@class NSDictionary, NSString, PDNetworkConnectionTask;

@interface PDNotificationServiceRegistrationTask : PDNotificationServiceConnectionTask
{
    unsigned long long _requestedStatus;	// 24 = 0x18
    NSString *_registrationData;	// 32 = 0x20
    NSString *_signature;	// 40 = 0x28
    NSDictionary *_certificates;	// 48 = 0x30
    PDNetworkConnectionTask *_completionTask;	// 56 = 0x38
    unsigned long long _certificateVersion;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100130728
+ (id)deregisterTaskWithNotificationService:(id)arg1;	// IMP=0x0000000100130560
+ (id)registerTaskWithNotificationService:(id)arg1 registrationData:(id)arg2 signature:(id)arg3 certificates:(id)arg4 certificateVersion:(unsigned long long)arg5 completionTask:(id)arg6;	// IMP=0x0000000100130474
- (void).cxx_destruct;	// IMP=0x0000000100131774
@property(nonatomic) unsigned long long certificateVersion; // @synthesize certificateVersion=_certificateVersion;
@property(retain, nonatomic) PDNetworkConnectionTask *completionTask; // @synthesize completionTask=_completionTask;
@property(retain, nonatomic) NSDictionary *certificates; // @synthesize certificates=_certificates;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *registrationData; // @synthesize registrationData=_registrationData;
@property(nonatomic) unsigned long long requestedStatus; // @synthesize requestedStatus=_requestedStatus;
- (id)_authenticationTokenFromResponseData:(id)arg1;	// IMP=0x000000010013157c
- (_Bool)matchesTask:(id)arg1;	// IMP=0x00000001001314c4
- (long long)actionForInactiveTask:(id)arg1;	// IMP=0x0000000100131398
- (_Bool)coalescesWithTaskSubclass:(Class)arg1;	// IMP=0x0000000100131360
- (_Bool)backoffComplete;	// IMP=0x0000000100131304
- (id)description;	// IMP=0x0000000100131154
- (void)handleError:(id)arg1;	// IMP=0x0000000100131068
- (void)handleResponse:(id)arg1 data:(id)arg2;	// IMP=0x0000000100130e54
- (id)bodyDictionary;	// IMP=0x0000000100130ba8
- (id)endpointComponents;	// IMP=0x0000000100130acc
- (id)method;	// IMP=0x0000000100130a98
- (long long)taskType;	// IMP=0x0000000100130a90
- (_Bool)isValid;	// IMP=0x0000000100130a2c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001308f8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100130730
- (id)initWithNotificationService:(id)arg1 registrationData:(id)arg2 signature:(id)arg3 certificates:(id)arg4 certificateVersion:(unsigned long long)arg5 requestedStatus:(unsigned long long)arg6 completionTask:(id)arg7;	// IMP=0x00000001001305d0

@end
