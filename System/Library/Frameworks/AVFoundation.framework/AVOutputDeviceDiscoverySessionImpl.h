/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class AVOutputDeviceDiscoverySession, AVAudioSession, AVOutputDeviceDiscoverySessionAvailableOutputDevices;


@protocol AVOutputDeviceDiscoverySessionImpl <NSObject>
@property (__weak) AVOutputDeviceDiscoverySession * parentOutputDeviceDiscoverySession; 
@property (nonatomic,retain) AVAudioSession * targetAudioSession; 
@property (nonatomic,readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices * availableOutputDevicesObject; 
@property (nonatomic,readonly) BOOL devicePresenceDetected; 
@required
-(void)setParentOutputDeviceDiscoverySession:(id)arg1;
-(AVAudioSession *)targetAudioSession;
-(void)setTargetAudioSession:(id)arg1;
-(void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)arg1;
-(AVOutputDeviceDiscoverySessionAvailableOutputDevices *)availableOutputDevicesObject;
-(BOOL)devicePresenceDetected;
-(AVOutputDeviceDiscoverySession *)parentOutputDeviceDiscoverySession;

@end

