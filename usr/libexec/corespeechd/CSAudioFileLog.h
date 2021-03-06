//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface CSAudioFileLog : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct OpaqueExtAudioFile *_audioFile;	// 16 = 0x10
    struct AudioStreamBasicDescription _asbd;	// 24 = 0x18
    NSURL *_url;	// 64 = 0x40
    unsigned int _audioLength;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x000000010000e480
- (void).cxx_destruct;	// IMP=0x000000010000ec20
- (void)stopRecording;	// IMP=0x000000010000ead8
- (void)appendAudioData:(id)arg1;	// IMP=0x000000010000e934
- (void)startRecording;	// IMP=0x000000010000e6a0
- (void)_closeAudioFile;	// IMP=0x000000010000e638
- (void)dealloc;	// IMP=0x000000010000e5ec
- (id)init;	// IMP=0x000000010000e4ec

@end

