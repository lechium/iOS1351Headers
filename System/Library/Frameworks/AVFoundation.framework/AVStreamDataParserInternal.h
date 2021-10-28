/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVStreamDataParserOutputHandling, OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSObject, NSError, AVAsset, NSMutableArray, AVWeakReference, AVContentKeySession, AVContentKeyRequest, NSMutableDictionary;

@interface AVStreamDataParserInternal : NSObject {

	id<AVStreamDataParserOutputHandling> _delegate;
	NSObject*<OS_dispatch_queue> _threadSafetyQ;
	long long _status;
	NSError* _error;
	AVAsset* _asset;
	NSMutableArray* _trackIDsNotProvidingMedia;
	OpaqueFigManifoldRef _figManifold;
	unsigned long long _typeIdOfInitialFigManifold;
	OpaqueCMBlockBufferRef _accumulatedInitializationData;
	BOOL _encounteredStreamDiscontinuity;
	AVWeakReference* _legacyStreamSession;
	AVContentKeySession* _defaultContentKeySession;
	AVWeakReference* _contentKeySession;
	AVContentKeyRequest* _sessionKeyRequest;
	BOOL _startedUsingInternalContentKeySession;
	int _currentTrackID;
	NSMutableDictionary* _tracksBecomingReadyByTrackID;
	NSMutableArray* _samplesBeforeReady;
	unsigned long long _samplesBeforeReadyTotalSize;
	SCD_Struct_AV7 _samplesBeforeReadyTotalDuration;
	NSMutableDictionary* _trackDecryptorsByTrackID;
	NSMutableDictionary* _trackFormatDescriptionsByTrackID;

}
@end
