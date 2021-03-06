//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSString, NSURL;

@interface SUBDocumentation : NSObject <NSSecureCoding>
{
    NSURL *_documentationBundleURL;	// 8 = 0x8
    NSData *_releaseNotesSummary;	// 16 = 0x10
    NSData *_releaseNotes;	// 24 = 0x18
    NSData *_licenseAgreement;	// 32 = 0x20
    NSString *_humanReadableUpdateName;	// 40 = 0x28
    NSString *_phoneLanguage;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100013244
- (void).cxx_destruct;	// IMP=0x00000001000139a0
@property(retain, nonatomic) NSString *phoneLanguage; // @synthesize phoneLanguage=_phoneLanguage;
@property(retain, nonatomic) NSString *humanReadableUpdateName; // @synthesize humanReadableUpdateName=_humanReadableUpdateName;
@property(retain, nonatomic) NSData *licenseAgreement; // @synthesize licenseAgreement=_licenseAgreement;
@property(retain, nonatomic) NSData *releaseNotes; // @synthesize releaseNotes=_releaseNotes;
@property(retain, nonatomic) NSData *releaseNotesSummary; // @synthesize releaseNotesSummary=_releaseNotesSummary;
@property(retain, nonatomic) NSURL *documentationBundleURL; // @synthesize documentationBundleURL=_documentationBundleURL;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100013878
- (void)_loadBundleResources;	// IMP=0x000000010001361c
- (id)_resourceFromBundle:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001000134a0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100013190
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100012ffc
- (id)initWithDocumentationBundleURL:(id)arg1;	// IMP=0x0000000100012f84
@property(readonly, retain, nonatomic) NSArray *preferredPhoneLanguages;
@property(readonly, retain, nonatomic) NSString *currentPhoneLanguage;

@end

