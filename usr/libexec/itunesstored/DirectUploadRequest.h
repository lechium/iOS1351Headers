//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString, NSURL;

@interface DirectUploadRequest : NSObject <NSCopying>
{
    NSNumber *_accountIdentifier;	// 8 = 0x8
    long long _databaseIdentifier;	// 16 = 0x10
    NSURL *_localAssetURL;	// 24 = 0x18
    NSString *_parentRelationshipType;	// 32 = 0x20
    long long _parentUploadIdentifier;	// 40 = 0x28
    NSString *_sourceApplication;	// 48 = 0x30
    NSString *_uti;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001001c6f70
@property(copy, nonatomic) NSString *UTI; // @synthesize UTI=_uti;
@property(copy, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(nonatomic) long long parentUploadIdentifier; // @synthesize parentUploadIdentifier=_parentUploadIdentifier;
@property(copy, nonatomic) NSString *parentRelationshipType; // @synthesize parentRelationshipType=_parentRelationshipType;
@property(copy, nonatomic) NSURL *localAssetURL; // @synthesize localAssetURL=_localAssetURL;
@property(nonatomic) long long databaseIdentifier; // @synthesize databaseIdentifier=_databaseIdentifier;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001c6e1c
- (id)initWithEntity:(id)arg1 accountIdentifier:(id)arg2;	// IMP=0x00000001001c6b38

@end

