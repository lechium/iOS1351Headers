//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSURI, NSString;

@interface IDSKeyTransparencyIndex : NSObject
{
    NSString *_serviceIdentifier;	// 8 = 0x8
    NSString *_accountIdentifier;	// 16 = 0x10
    IDSURI *_URI;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100624c04
@property(readonly, nonatomic) IDSURI *URI; // @synthesize URI=_URI;
@property(readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (id)description;	// IMP=0x0000000100624aa0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100624a80
- (unsigned long long)hash;	// IMP=0x0000000100624970
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001006248b4
- (_Bool)isEqualToKeyTransparencyIndex:(id)arg1;	// IMP=0x0000000100624390
- (id)initWithServiceIdentifier:(id)arg1 accountIdentifier:(id)arg2 URI:(id)arg3;	// IMP=0x00000001006241ec

@end

