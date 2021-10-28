//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EFLoggable-Protocol.h"

@class NSArray, NSString;
@protocol OS_os_activity;

@interface MFLibraryCompressor : NSObject <EFLoggable>
{
    NSArray *_mailboxUIDs;	// 8 = 0x8
    NSObject<OS_os_activity> *_libraryCompressionActivity;	// 16 = 0x10
}

+ (_Bool)libraryCompressionComplete;	// IMP=0x0000000100081fd0
+ (id)log;	// IMP=0x0000000100081e00
- (void).cxx_destruct;	// IMP=0x0000000100083034
@property(retain, nonatomic) NSObject<OS_os_activity> *libraryCompressionActivity; // @synthesize libraryCompressionActivity=_libraryCompressionActivity;
@property(readonly, nonatomic) NSArray *mailboxUIDs; // @synthesize mailboxUIDs=_mailboxUIDs;
- (void)_removeCompressedXAttr:(id)arg1;	// IMP=0x0000000100082e2c
- (void)_markMailboxCompressed:(id)arg1;	// IMP=0x0000000100082bfc
- (_Bool)_mailboxNeedsCompression:(id)arg1;	// IMP=0x00000001000829dc
- (id)mailboxesNeedingCompression;	// IMP=0x0000000100082904
- (void)runLibraryCompressionShouldDefer:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100082048
- (id)initWithMailboxUIDs:(id)arg1;	// IMP=0x0000000100081ef0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
