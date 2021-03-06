//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKKSCurrentKeyPointer, CKKSKey, NSArray, NSError, NSString;

__attribute__((visibility("hidden")))
@interface CKKSCurrentKeySet : NSObject
{
    _Bool _proposed;	// 8 = 0x8
    NSString *_viewName;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    CKKSKey *_tlk;	// 32 = 0x20
    CKKSKey *_classA;	// 40 = 0x28
    CKKSKey *_classC;	// 48 = 0x30
    CKKSCurrentKeyPointer *_currentTLKPointer;	// 56 = 0x38
    CKKSCurrentKeyPointer *_currentClassAPointer;	// 64 = 0x40
    CKKSCurrentKeyPointer *_currentClassCPointer;	// 72 = 0x48
    NSArray *_tlkShares;	// 80 = 0x50
    NSArray *_pendingTLKShares;	// 88 = 0x58
}

+ (id)loadForZone:(id)arg1;	// IMP=0x0000000100085720
- (void).cxx_destruct;	// IMP=0x0000000100085690
@property(retain) NSArray *pendingTLKShares; // @synthesize pendingTLKShares=_pendingTLKShares;
@property(retain) NSArray *tlkShares; // @synthesize tlkShares=_tlkShares;
@property _Bool proposed; // @synthesize proposed=_proposed;
@property(retain) CKKSCurrentKeyPointer *currentClassCPointer; // @synthesize currentClassCPointer=_currentClassCPointer;
@property(retain) CKKSCurrentKeyPointer *currentClassAPointer; // @synthesize currentClassAPointer=_currentClassAPointer;
@property(retain) CKKSCurrentKeyPointer *currentTLKPointer; // @synthesize currentTLKPointer=_currentTLKPointer;
@property(retain) CKKSKey *classC; // @synthesize classC=_classC;
@property(retain) CKKSKey *classA; // @synthesize classA=_classA;
@property(retain) CKKSKey *tlk; // @synthesize tlk=_tlk;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSString *viewName; // @synthesize viewName=_viewName;
- (id)asKeychainBackedSet:(id *)arg1;	// IMP=0x0000000100085334
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100085084
- (id)description;	// IMP=0x0000000100084df8
- (id)initForZoneName:(id)arg1;	// IMP=0x0000000100084d80

@end

