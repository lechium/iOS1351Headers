//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSUtteranceMetadataManager : NSObject
{
}

+ (id)recordedTimeStampOfFile:(id)arg1;	// IMP=0x000000010008f8b0
+ (id)getUtteranceEnrollmentType:(id)arg1;	// IMP=0x000000010008f5d0
+ (_Bool)isUtteranceImplicitlyTrained:(id)arg1;	// IMP=0x000000010008f3c0
+ (void)_upgradeUtteranceMeta:(id)arg1;	// IMP=0x000000010008eee4
+ (_Bool)_audioDirectoryNeedsUpgrade:(id)arg1;	// IMP=0x000000010008ec18
+ (void)_upgradeLocaleDirectoryIfNecessary:(id)arg1;	// IMP=0x000000010008e638
+ (void)_saveMetaVersionFileAtPath:(id)arg1;	// IMP=0x000000010008e474
+ (void)upgradeMetaFilesIfNecessaaryAtSATRoot:(id)arg1;	// IMP=0x000000010008e0ec
+ (void)saveMetaVersionFileAtSATAudioDirectory:(id)arg1;	// IMP=0x000000010008e094
+ (void)_writeMetaDict:(id)arg1 forUtterancePath:(id)arg2;	// IMP=0x000000010008df18
+ (id)_getBaseMetaDictionaryForUtterancePath:(id)arg1;	// IMP=0x000000010008dd88
+ (void)saveUtteranceMetadataForUtterance:(id)arg1 enrollmentType:(id)arg2 isHandheldEnrollment:(_Bool)arg3 triggerSource:(id)arg4 audioInput:(id)arg5 otherBiometricResult:(unsigned long long)arg6 containsPayload:(_Bool)arg7;	// IMP=0x000000010008daf8

@end

