//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SecXPCHelper : NSObject
{
}

+ (id)encodedDataFromError:(id)arg1;	// IMP=0x000000010001e37c
+ (id)errorFromEncodedData:(id)arg1;	// IMP=0x000000010001e2dc
+ (id)cleanseErrorForXPC:(id)arg1;	// IMP=0x000000010001e1d4
+ (id)cleanObjectForXPC:(id)arg1;	// IMP=0x000000010001daf0
+ (id)cleanDictionaryForXPC:(id)arg1;	// IMP=0x000000010001d948
+ (id)safeErrorClasses;	// IMP=0x000000010001d908
+ (id)safeErrorCollectionClasses;	// IMP=0x000000010001d8c8
+ (id)safeErrorPrimitiveClasses;	// IMP=0x000000010001d888

@end
