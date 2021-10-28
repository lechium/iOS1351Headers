/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDCameraRecordingLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDCameraRecordingClipNotificationEvent : HMDCameraRecordingLogEvent <HMDAWDLogEvent> {

	unsigned long long _recordingEventTriggers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long recordingEventTriggers;              //@synthesize recordingEventTriggers=_recordingEventTriggers - In the implementation block
+(id)uuid;
-(id)attributeDescriptions;
-(unsigned long long)recordingEventTriggers;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initWithSessionID:(id)arg1 cameraID:(id)arg2 sequenceNumber:(unsigned long long)arg3 recordingEventTriggers:(unsigned long long)arg4 ;
@end
