//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SDRDiagnosticReporter;
@protocol OS_dispatch_queue;

@interface CSDiagnosticReporter : NSObject
{
    SDRDiagnosticReporter *_reporter;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001000d3118
- (void).cxx_destruct;	// IMP=0x00000001000d386c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) SDRDiagnosticReporter *reporter; // @synthesize reporter=_reporter;
- (void)submitDiagnosticReportWithType:(id)arg1 withSubType:(id)arg2 withDuration:(double)arg3 withContext:(id)arg4;	// IMP=0x00000001000d328c
- (void)submitAudioIssueReport:(id)arg1;	// IMP=0x00000001000d326c
- (void)submitVoiceIdIssueReport:(id)arg1;	// IMP=0x00000001000d324c
- (id)init;	// IMP=0x00000001000d3184

@end

