//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FMFClientSession, NSArray, NSUUID;

@interface FMFSaveFavoritesOperations : NSObject
{
    NSUUID *_identifier;	// 8 = 0x8
    NSArray *_favorites;	// 16 = 0x10
    FMFClientSession *_clientSession;	// 24 = 0x18
    CDUnknownBlockType _completionBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010003f840
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) FMFClientSession *clientSession; // @synthesize clientSession=_clientSession;
@property(retain, nonatomic) NSArray *favorites; // @synthesize favorites=_favorites;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)executeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010003f500
- (id)initWithFavorites:(id)arg1 clientSession:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003f328

@end

