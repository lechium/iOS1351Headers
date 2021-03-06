//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HIDBluetoothDevice.h"

#import "SiriAudioRelaySource-Protocol.h"

@class NSData, NSDate, NSDictionary, NSMutableArray, NSMutableData, NSMutableSet, NSObject, NSString, SiriAudioRelay;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

@interface HIDAppleSiriRemoteDevice : HIDBluetoothDevice <SiriAudioRelaySource>
{
    struct IONotificationPort *_notificationPort;	// 8 = 0x8
    struct __IOHIDUserDevice *_deviceManagement;	// 16 = 0x10
    struct __IOHIDUserDevice *_touch;	// 24 = 0x18
    struct __IOHIDUserDevice *_buttons;	// 32 = 0x20
    struct __IOHIDUserDevice *_inertial;	// 40 = 0x28
    struct __IOHIDUserDevice *_infrared;	// 48 = 0x30
    struct __IOHIDUserDevice *_audio;	// 56 = 0x38
    struct __IOHIDUserDevice *_radio;	// 64 = 0x40
    struct __IOHIDUserDevice *_proximity;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_queue;	// 88 = 0x58
    NSObject<OS_dispatch_group> *_groupInit;	// 96 = 0x60
    NSObject<OS_dispatch_group> *_groupStart;	// 104 = 0x68
    NSObject<OS_dispatch_group> *_groupDeviceManagement;	// 112 = 0x70
    NSObject<OS_dispatch_group> *_groupTouch;	// 120 = 0x78
    NSObject<OS_dispatch_group> *_groupButtons;	// 128 = 0x80
    NSObject<OS_dispatch_group> *_groupInertial;	// 136 = 0x88
    NSObject<OS_dispatch_group> *_groupProximity;	// 144 = 0x90
    NSObject<OS_dispatch_semaphore> *_sentHostReadyReport;	// 152 = 0x98
    NSObject<OS_dispatch_semaphore> *_gotDeviceExtendedInfoReport;	// 160 = 0xa0
    unsigned int _touchNotification;	// 168 = 0xa8
    unsigned int _deviceMgtNotification;	// 172 = 0xac
    SiriAudioRelay *_siriAudioRelay;	// 176 = 0xb0
    unsigned char _buttonData;	// 184 = 0xb8
    unsigned char _proximityData;	// 185 = 0xb9
    _Bool _skipInfoReportIfCached;	// 186 = 0xba
    _Bool _firstButton;	// 187 = 0xbb
    _Bool _disconnected;	// 188 = 0xbc
    unsigned short _hwVersion;	// 190 = 0xbe
    int _latency;	// 192 = 0xc0
    unsigned int _instanceID;	// 196 = 0xc4
    NSMutableSet *_pathIDs;	// 200 = 0xc8
    NSMutableData *_touchData;	// 208 = 0xd0
    NSMutableData *_inertialData;	// 216 = 0xd8
    NSData *_hwRevisionData;	// 224 = 0xe0
    NSData *_fwRevisionData;	// 232 = 0xe8
    NSDictionary *_fwVersions;	// 240 = 0xf0
    NSString *_serialNumber;	// 248 = 0xf8
    NSDictionary *_properties;	// 256 = 0x100
    unsigned long long _inputReportTimestamp;	// 264 = 0x108
    NSDate *_lastAudioDate;	// 272 = 0x110
    NSObject<OS_dispatch_semaphore> *_siriAudioStart;	// 280 = 0x118
    NSObject<OS_dispatch_semaphore> *_siriAudioStop;	// 288 = 0x120
    NSMutableArray *_audioBuffer;	// 296 = 0x128
}

+ (id)hwRevisionFromRevisionString:(id)arg1 fwVersions:(id)arg2;	// IMP=0x000000010002be04
+ (id)properties:(id)arg1 locationIdOffset:(unsigned int)arg2 hidDescriptor:(id)arg3 extendedData:(id)arg4;	// IMP=0x000000010002bd1c
+ (id)dataFromRevisionString:(id)arg1;	// IMP=0x000000010002bb40
+ (id)fwVersionsFromRevisionData:(id)arg1;	// IMP=0x000000010002b9c0
+ (unsigned short)hwVersionFromRevisionData:(id)arg1;	// IMP=0x000000010002b958
+ (id)getProximityHIDReportDescriptor;	// IMP=0x000000010002b8e0
+ (id)getDeviceManagementHIDReportDescriptor;	// IMP=0x000000010002b864
+ (id)getRadioHIDReportDescriptor;	// IMP=0x000000010002b7ec
+ (id)getAudioHIDReportDescriptor;	// IMP=0x000000010002b774
+ (id)getInfraredHIDReportDescriptor;	// IMP=0x000000010002b6fc
+ (id)getInertialHIDReportDescriptor;	// IMP=0x000000010002b684
+ (id)getButtonsHIDReportDescriptor;	// IMP=0x000000010002b604
+ (id)getTouchHIDReportDescriptor;	// IMP=0x000000010002b58c
+ (void)preallocateButtonDriver;	// IMP=0x000000010002b36c
+ (void)initialize;	// IMP=0x000000010002b310
@property(retain) NSMutableArray *audioBuffer; // @synthesize audioBuffer=_audioBuffer;
@property(retain) NSObject<OS_dispatch_semaphore> *siriAudioStop; // @synthesize siriAudioStop=_siriAudioStop;
@property(retain) NSObject<OS_dispatch_semaphore> *siriAudioStart; // @synthesize siriAudioStart=_siriAudioStart;
@property(retain) NSDate *lastAudioDate; // @synthesize lastAudioDate=_lastAudioDate;
@property(nonatomic) _Bool disconnected; // @synthesize disconnected=_disconnected;
@property(nonatomic) _Bool firstButton; // @synthesize firstButton=_firstButton;
@property(readonly, nonatomic) unsigned int instanceID; // @synthesize instanceID=_instanceID;
@property(retain, nonatomic) SiriAudioRelay *siriAudioRelay; // @synthesize siriAudioRelay=_siriAudioRelay;
@property(nonatomic) unsigned long long inputReportTimestamp; // @synthesize inputReportTimestamp=_inputReportTimestamp;
@property(readonly, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(nonatomic) _Bool skipInfoReportIfCached; // @synthesize skipInfoReportIfCached=_skipInfoReportIfCached;
@property(readonly, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, nonatomic) unsigned short hwVersion; // @synthesize hwVersion=_hwVersion;
@property(readonly, nonatomic) NSDictionary *fwVersions; // @synthesize fwVersions=_fwVersions;
@property(readonly, nonatomic) NSData *fwRevisionData; // @synthesize fwRevisionData=_fwRevisionData;
@property(readonly, nonatomic) NSData *hwRevisionData; // @synthesize hwRevisionData=_hwRevisionData;
@property(readonly, nonatomic) NSMutableData *inertialData; // @synthesize inertialData=_inertialData;
@property(readonly, nonatomic) NSMutableData *touchData; // @synthesize touchData=_touchData;
@property(readonly, nonatomic) NSMutableSet *pathIDs; // @synthesize pathIDs=_pathIDs;
@property(nonatomic) unsigned char proximityData; // @synthesize proximityData=_proximityData;
@property(nonatomic) unsigned char buttonData; // @synthesize buttonData=_buttonData;
@property(nonatomic) int latency; // @synthesize latency=_latency;
- (void)siriAudioDidStop:(CDUnknownBlockType)arg1;	// IMP=0x000000010003220c
- (void)waitForSiriAudioToStop:(CDUnknownBlockType)arg1;	// IMP=0x0000000100031ce8
- (void)siriAudioWillStart:(CDUnknownBlockType)arg1;	// IMP=0x00000001000316b0
- (void)logHwFwVersions;	// IMP=0x00000001000313d4
- (void)parseMultiSubsystemV3Report:(char *)arg1 reportLength:(long long)arg2 reportID:(unsigned char)arg3;	// IMP=0x0000000100030f68
- (void)extractButtonDataFromReport:(char *)arg1 buttonIndex:(unsigned char)arg2;	// IMP=0x0000000100030f2c
- (void)clearMultiSubsystemReport;	// IMP=0x0000000100030ec4
- (int)getReport:(char *)arg1 reportLength:(long long *)arg2 reportID:(unsigned int)arg3 reportType:(int)arg4 keyholeID:(unsigned char)arg5;	// IMP=0x0000000100030ae4
- (void)cacheData:(id)arg1 ForReportID:(unsigned int)arg2;	// IMP=0x000000010003095c
- (void)getCachedReport:(char *)arg1 reportLength:(long long *)arg2 reportID:(unsigned int)arg3 reportType:(int)arg4 keyholeID:(unsigned char)arg5;	// IMP=0x00000001000305dc
- (_Bool)isCachedReportID:(unsigned int)arg1 reportType:(int)arg2 keyholeID:(unsigned char)arg3;	// IMP=0x000000010003034c
- (_Bool)canCacheReportID:(unsigned int)arg1 reportType:(int)arg2 keyholeID:(unsigned char)arg3;	// IMP=0x0000000100030260
- (int)setReport:(char *)arg1 reportLength:(long long)arg2 reportID:(unsigned int)arg3 reportType:(int)arg4 keyholeID:(unsigned char)arg5 error:(id *)arg6;	// IMP=0x000000010002ff68
- (int)setReport:(char *)arg1 reportLength:(long long)arg2 reportID:(unsigned int)arg3 reportType:(int)arg4 keyholeID:(unsigned char)arg5;	// IMP=0x000000010002ff58
- (void)handleInputReportData:(id)arg1 reportID:(unsigned char)arg2;	// IMP=0x000000010002fdb8
- (void)handleInputReportData:(id)arg1 reportID:(unsigned char)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x000000010002fd68
- (void)generateMTStatusReport;	// IMP=0x000000010002fc80
- (void)handleDeviceManagementData:(char *)arg1 dataLength:(long long)arg2;	// IMP=0x000000010002fbfc
- (void)handleAudioData:(char *)arg1 dataLength:(long long)arg2;	// IMP=0x000000010002f8e8
- (void)handleInertialData;	// IMP=0x000000010002f724
- (void)logTouchData;	// IMP=0x000000010002ee48
- (void)handleTouchData;	// IMP=0x000000010002ecc8
- (void)handleProximityData;	// IMP=0x000000010002eb34
- (void)handleButtonData;	// IMP=0x000000010002e8b4
- (void)setZeroSlaveLatency;	// IMP=0x000000010002e87c
- (void)setNormalSlaveLatency;	// IMP=0x000000010002e7d4
- (id)desiredConnectionParameters;	// IMP=0x000000010002e644
- (void)touchDriverArrived:(unsigned int)arg1;	// IMP=0x000000010002e3a8
- (void)deviceMgtDriverArrived:(unsigned int)arg1;	// IMP=0x000000010002e0c4
- (void)clearDeviceManagementNotification;	// IMP=0x000000010002e090
- (void)clearTouchNotification;	// IMP=0x000000010002e05c
- (void)start;	// IMP=0x000000010002ca7c
- (void)stop;	// IMP=0x000000010002c6c8
- (void)dealloc;	// IMP=0x000000010002c458
- (id)initWithProperties:(id)arg1 reports:(id)arg2;	// IMP=0x000000010002be54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

