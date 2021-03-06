//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TCCDProcess : NSObject
{
    _Bool _haveIsPlatformBinary;	// 8 = 0x8
    _Bool _isPlatformBinary;	// 9 = 0x9
    int _pid;	// 12 = 0xc
    unsigned int _auid;	// 16 = 0x10
    unsigned int _euid;	// 20 = 0x14
    unsigned int _codesignStatus;	// 24 = 0x18
    NSString *_responsiblePath;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    NSDictionary *_entitlements;	// 48 = 0x30
    NSString *_binaryPath;	// 56 = 0x38
    CDStruct_4c969caf _auditToken;	// 64 = 0x40
}

+ (id)identifierForInvalidCode;	// IMP=0x000000010003714c
- (void).cxx_destruct;	// IMP=0x0000000100038238
@property(retain) NSString *binaryPath; // @synthesize binaryPath=_binaryPath;
@property unsigned int codesignStatus; // @synthesize codesignStatus=_codesignStatus;
@property(retain) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property unsigned int euid; // @synthesize euid=_euid;
@property unsigned int auid; // @synthesize auid=_auid;
@property int pid; // @synthesize pid=_pid;
@property CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (_Bool)hasEntitlement:(id)arg1 containsServiceAllOrService:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00000001000380d0
- (_Bool)hasEntitlement:(id)arg1 containsService:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000100037e28
- (id)description;	// IMP=0x0000000100037d04
- (id)arrayValueForEntitlement:(id)arg1;	// IMP=0x0000000100037bd0
- (_Bool)boolValueForEntitlement:(id)arg1;	// IMP=0x0000000100037aa0
@property(readonly) NSString *responsiblePath; // @synthesize responsiblePath=_responsiblePath;
- (void)dealloc;	// IMP=0x0000000100037a34
- (id)initWithPID:(int)arg1 responsiblePath:(id)arg2;	// IMP=0x0000000100037724
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1 responsiblePath:(id)arg2;	// IMP=0x00000001000371dc
- (id)logHandle;	// IMP=0x0000000100037158

@end

