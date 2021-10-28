//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MotionDetector, Recognizer;
@protocol OS_dispatch_queue;

@interface AnalysisEngine : NSObject
{
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *_fid_avg;	// 8 = 0x8
    CDStruct_1b6d18a9 _currentFrameTime;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_processingQueue;	// 40 = 0x28
    Recognizer *_recognizer;	// 48 = 0x30
    MotionDetector *_motion;	// 56 = 0x38
    _Bool _processingFrame;	// 64 = 0x40
    _Bool _usingM7Motion;	// 65 = 0x41
    _Bool _useRecognizer;	// 66 = 0x42
    _Bool _isDetectingMotion;	// 67 = 0x43
    double _crop_fraction;	// 72 = 0x48
    CDUnknownBlockType _recognizingCompletionHandlerBlock;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 88 = 0x58
    CDStruct_1b6d18a9 _recognizerInterval;	// 96 = 0x60
    CDStruct_1b6d18a9 _recognitionExpirationSeconds;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000010001ab8c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType recognizingCompletionHandlerBlock; // @synthesize recognizingCompletionHandlerBlock=_recognizingCompletionHandlerBlock;
@property(readonly, nonatomic) _Bool isDetectingMotion; // @synthesize isDetectingMotion=_isDetectingMotion;
@property(nonatomic) double crop_fraction; // @synthesize crop_fraction=_crop_fraction;
@property(readonly, nonatomic) CDStruct_1b6d18a9 recognitionExpirationSeconds; // @synthesize recognitionExpirationSeconds=_recognitionExpirationSeconds;
@property(readonly, nonatomic) CDStruct_1b6d18a9 recognizerInterval; // @synthesize recognizerInterval=_recognizerInterval;
@property(nonatomic) _Bool useRecognizer; // @synthesize useRecognizer=_useRecognizer;
@property(nonatomic) _Bool usingM7Motion; // @synthesize usingM7Motion=_usingM7Motion;
@property(readonly, nonatomic) float recognizerConfidence;
- (_Bool)hasRecognizedDeviceInRecentPast:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000010001aa34
- (void)processVideoFrame:(struct __CVBuffer *)arg1;	// IMP=0x000000010001a840
- (void)preheat;	// IMP=0x000000010001a7e8
- (void)ingestVideoFrame:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000010001a740
@property(nonatomic) float motionAccelerationThreshold;
@property(nonatomic) float motionRotationThreshold;
- (void)dealloc;	// IMP=0x000000010001a6cc
- (void)reset;	// IMP=0x000000010001a674
- (void)clearHistory;	// IMP=0x000000010001a60c
- (id)init;	// IMP=0x000000010001a474

@end
