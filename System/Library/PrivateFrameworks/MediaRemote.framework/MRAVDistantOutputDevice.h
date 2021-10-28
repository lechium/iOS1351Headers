/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRAVOutputDevice.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _MRAVOutputDeviceDescriptorProtobuf, MRAVOutputDeviceSourceInfo, NSDictionary;

@interface MRAVDistantOutputDevice : MRAVOutputDevice <NSSecureCoding> {

	_MRAVOutputDeviceDescriptorProtobuf* _protobuf;
	MRAVOutputDeviceSourceInfo* _sourceInfo;
	NSDictionary* _modelSpecificInfo;

}
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)uid;
-(unsigned)deviceType;
-(id)groupID;
-(id)descriptor;
-(id)firmwareVersion;
-(float)volume;
-(float)batteryLevel;
-(id)initWithDescriptor:(id)arg1 ;
-(id)sourceInfo;
-(id)MACAddress;
-(id)parentGroupIdentifier;
-(id)bluetoothID;
-(id)modelID;
-(BOOL)requiresAuthorization;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canAccessAppleMusic;
-(BOOL)canAccessiCloudMusicLibrary;
-(BOOL)supportsBufferedAirPlay;
-(BOOL)isGroupLeader;
-(BOOL)groupContainsGroupLeader;
-(id)logicalDeviceID;
-(BOOL)canRelayCommunicationChannel;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)hasBatteryLevel;
-(BOOL)isVolumeControlAvailable;
-(unsigned)volumeCapabilities;
-(BOOL)isProxyGroupPlayer;
-(BOOL)isLocalDevice;
-(unsigned)deviceSubtype;
-(BOOL)isRemoteControllable;
-(BOOL)isGroupable;
-(BOOL)isDeviceGroupable;
-(BOOL)isAirPlayReceiverSessionActive;
-(BOOL)parentGroupContainsDiscoverableLeader;
-(BOOL)isAddedToHomeKit;
-(BOOL)supportsHAP;
-(id)modelSpecificInfo;
-(BOOL)supportsExternalScreen;
-(id)initWithSkeleton:(id)arg1 ;
@end
