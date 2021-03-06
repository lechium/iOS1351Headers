/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Transports/USBHost.transport/USBHost
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <USBHost/USBHost-Structs.h>
@class NSDictionary, NSMutableArray, NSLock;

@interface AccessoryIAPInterface : NSObject {

	BOOL _needOutZLP;
	unsigned char _bulkOutPipeRef;
	unsigned char _bulkInPipeRef;
	unsigned char _interruptInPipeRef;
	BOOL _hasReadInterruptPipe;
	unsigned short _bulkOutPipeMaxPacketSize;
	unsigned short _bulkInPipeMaxPacketSize;
	unsigned short _interruptInPipeMaxPacketSize;
	unsigned _locationID;
	unsigned _maxOutLength;
	unsigned _interruptBulkReadAllocCount;
	unsigned _interruptBulkReadReleaseCount;
	unsigned long long _registryEntryID;
	unsigned long long _parentDeviceRegistryEntryID;
	NSDictionary* _ioregProperties;
	/*^block*/id _dataInHandler;
	IOUSBInterfaceStruct942* _interface;
	char* _interruptInPipeBuffer;
	NSMutableArray* _interfacePropertiesArray;
	NSMutableArray* _inUseDataBufArray;
	NSLock* _dataBufLock;
	NSMutableArray* _interruptBulkReadList;

}

@property (assign,nonatomic) IOUSBInterfaceStruct942* interface;                            //@synthesize interface=_interface - In the implementation block
@property (assign,nonatomic) unsigned char bulkOutPipeRef;                                  //@synthesize bulkOutPipeRef=_bulkOutPipeRef - In the implementation block
@property (assign,nonatomic) unsigned short bulkOutPipeMaxPacketSize;                       //@synthesize bulkOutPipeMaxPacketSize=_bulkOutPipeMaxPacketSize - In the implementation block
@property (assign,nonatomic) unsigned char bulkInPipeRef;                                   //@synthesize bulkInPipeRef=_bulkInPipeRef - In the implementation block
@property (assign,nonatomic) unsigned short bulkInPipeMaxPacketSize;                        //@synthesize bulkInPipeMaxPacketSize=_bulkInPipeMaxPacketSize - In the implementation block
@property (assign,nonatomic) unsigned char interruptInPipeRef;                              //@synthesize interruptInPipeRef=_interruptInPipeRef - In the implementation block
@property (assign,nonatomic) unsigned short interruptInPipeMaxPacketSize;                   //@synthesize interruptInPipeMaxPacketSize=_interruptInPipeMaxPacketSize - In the implementation block
@property (assign,nonatomic) char* interruptInPipeBuffer;                                   //@synthesize interruptInPipeBuffer=_interruptInPipeBuffer - In the implementation block
@property (nonatomic,retain) NSMutableArray * interfacePropertiesArray;                     //@synthesize interfacePropertiesArray=_interfacePropertiesArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * inUseDataBufArray;                            //@synthesize inUseDataBufArray=_inUseDataBufArray - In the implementation block
@property (nonatomic,retain) NSLock * dataBufLock;                                          //@synthesize dataBufLock=_dataBufLock - In the implementation block
@property (assign,nonatomic) BOOL hasReadInterruptPipe;                                     //@synthesize hasReadInterruptPipe=_hasReadInterruptPipe - In the implementation block
@property (nonatomic,retain) NSMutableArray * interruptBulkReadList;                        //@synthesize interruptBulkReadList=_interruptBulkReadList - In the implementation block
@property (assign,nonatomic) unsigned interruptBulkReadAllocCount;                          //@synthesize interruptBulkReadAllocCount=_interruptBulkReadAllocCount - In the implementation block
@property (assign,nonatomic) unsigned interruptBulkReadReleaseCount;                        //@synthesize interruptBulkReadReleaseCount=_interruptBulkReadReleaseCount - In the implementation block
@property (nonatomic,readonly) unsigned long long registryEntryID;                          //@synthesize registryEntryID=_registryEntryID - In the implementation block
@property (nonatomic,readonly) unsigned locationID;                                         //@synthesize locationID=_locationID - In the implementation block
@property (nonatomic,readonly) unsigned long long parentDeviceRegistryEntryID;              //@synthesize parentDeviceRegistryEntryID=_parentDeviceRegistryEntryID - In the implementation block
@property (nonatomic,readonly) NSDictionary * ioregProperties;                              //@synthesize ioregProperties=_ioregProperties - In the implementation block
@property (nonatomic,copy) id dataInHandler;                                                //@synthesize dataInHandler=_dataInHandler - In the implementation block
@property (assign,nonatomic) BOOL needOutZLP;                                               //@synthesize needOutZLP=_needOutZLP - In the implementation block
@property (assign,nonatomic) unsigned maxOutLength;                                         //@synthesize maxOutLength=_maxOutLength - In the implementation block
+(unsigned long long)getRegistryEntryIDFromService:(unsigned)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)writeData:(id)arg1 ;
-(IOUSBInterfaceStruct942*)interface;
-(void)setInterface:(IOUSBInterfaceStruct942*)arg1 ;
-(BOOL)configureInterface:(unsigned)arg1 ;
-(unsigned)locationID;
-(id)initWithInterface:(unsigned)arg1 andDataInHandler:(/*^block*/id)arg2 ;
-(unsigned long long)registryEntryID;
-(unsigned long long)parentDeviceRegistryEntryID;
-(BOOL)unlockOtherInterfaces;
-(BOOL)lockOtherInterfaces;
-(BOOL)setUSBHostHIDInterface:(unsigned char)arg1 withHIDFunction:(unsigned)arg2 ;
-(BOOL)clearUSBHostHIDInterfaces;
-(BOOL)configureNCMInterface:(unsigned char)arg1 asCarPlay:(BOOL)arg2 ;
-(void)setNeedOutZLP:(BOOL)arg1 ;
-(void)setMaxOutLength:(unsigned)arg1 ;
-(NSLock *)dataBufLock;
-(NSMutableArray *)inUseDataBufArray;
-(NSMutableArray *)interruptBulkReadList;
-(unsigned char)bulkOutPipeRef;
-(BOOL)needOutZLP;
-(unsigned)maxOutLength;
-(unsigned short)bulkOutPipeMaxPacketSize;
-(NSMutableArray *)interfacePropertiesArray;
-(void)setInterfacePropertiesArray:(NSMutableArray *)arg1 ;
-(BOOL)setProperty:(id)arg1 forInterfaceNum:(unsigned char)arg2 ;
-(BOOL)setInterfaceProperties:(id)arg1 ;
-(NSDictionary *)ioregProperties;
-(id)dataInHandler;
-(void)setDataInHandler:(id)arg1 ;
-(void)setBulkOutPipeRef:(unsigned char)arg1 ;
-(void)setBulkOutPipeMaxPacketSize:(unsigned short)arg1 ;
-(unsigned char)bulkInPipeRef;
-(void)setBulkInPipeRef:(unsigned char)arg1 ;
-(unsigned short)bulkInPipeMaxPacketSize;
-(void)setBulkInPipeMaxPacketSize:(unsigned short)arg1 ;
-(unsigned char)interruptInPipeRef;
-(void)setInterruptInPipeRef:(unsigned char)arg1 ;
-(unsigned short)interruptInPipeMaxPacketSize;
-(void)setInterruptInPipeMaxPacketSize:(unsigned short)arg1 ;
-(char*)interruptInPipeBuffer;
-(void)setInterruptInPipeBuffer:(char*)arg1 ;
-(void)setInUseDataBufArray:(NSMutableArray *)arg1 ;
-(void)setDataBufLock:(NSLock *)arg1 ;
-(BOOL)hasReadInterruptPipe;
-(void)setHasReadInterruptPipe:(BOOL)arg1 ;
-(void)setInterruptBulkReadList:(NSMutableArray *)arg1 ;
-(unsigned)interruptBulkReadAllocCount;
-(void)setInterruptBulkReadAllocCount:(unsigned)arg1 ;
-(unsigned)interruptBulkReadReleaseCount;
-(void)setInterruptBulkReadReleaseCount:(unsigned)arg1 ;
@end

