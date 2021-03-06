//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFHostCardAppletInterface-Protocol.h"

@class NSData, NSMutableDictionary, NSString;
@protocol NFNdefTagAgentDelegate;

@interface NFNdefTagAgent : NSObject <NFHostCardAppletInterface>
{
    NSString *_selectedFile;	// 8 = 0x8
    NSMutableDictionary *_files;	// 16 = 0x10
    unsigned short _lastStatus;	// 24 = 0x18
    _Bool _isSelected;	// 26 = 0x1a
    _Bool _tagRead;	// 27 = 0x1b
    _Bool _tagWritten;	// 28 = 0x1c
    _Bool _writeable;	// 29 = 0x1d
    unsigned short _maxTagSize;	// 30 = 0x1e
    unsigned short _ndefPayloadSize;	// 32 = 0x20
    NSObject<NFNdefTagAgentDelegate> *_delegate;	// 40 = 0x28
}

@property NSObject<NFNdefTagAgentDelegate> *delegate; // @synthesize delegate=_delegate;
@property NSData *ndefData;
- (void)_generateCapabilityContainer;	// IMP=0x000000010001f0b8
- (id)_handleUpdateBinaryCommand:(id)arg1;	// IMP=0x000000010001eadc
- (_Bool)_isUpdateBinaryCommand:(id)arg1;	// IMP=0x000000010001ea88
- (id)_handleReadBinaryCommand:(id)arg1;	// IMP=0x000000010001e7d0
- (_Bool)_isReadBinaryCommand:(id)arg1;	// IMP=0x000000010001e77c
- (id)_handleSelectCommand:(id)arg1;	// IMP=0x000000010001e5b0
- (_Bool)isSelected;	// IMP=0x000000010001e5a8
- (_Bool)_isSelectCommand:(id)arg1;	// IMP=0x000000010001e528
- (void)handleDeselect;	// IMP=0x000000010001e520
- (id)handleAPDU:(id)arg1;	// IMP=0x000000010001e2f4
- (id)handleSelect:(id)arg1;	// IMP=0x000000010001e07c
- (void)setMaxTagSize:(unsigned short)arg1;	// IMP=0x000000010001e064
- (void)enableWrite:(_Bool)arg1;	// IMP=0x000000010001e054
- (_Bool)wasTagWritten;	// IMP=0x000000010001e04c
- (_Bool)wasTagRead;	// IMP=0x000000010001e044
- (_Bool)isComplete;	// IMP=0x000000010001e03c
- (_Bool)hasError;	// IMP=0x000000010001e02c
- (void)dealloc;	// IMP=0x000000010001dfdc
- (id)init;	// IMP=0x000000010001df74

@end

