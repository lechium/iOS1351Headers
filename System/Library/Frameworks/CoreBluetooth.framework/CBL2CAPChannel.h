/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CBPeer, NSInputStream, NSOutputStream;

@interface CBL2CAPChannel : NSObject {

	unsigned short _PSM;
	int _socketFD;
	CBPeer* _peer;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;

}

@property (nonatomic,readonly) int socketFD;                               //@synthesize socketFD=_socketFD - In the implementation block
@property (nonatomic,readonly) CBPeer * peer;                              //@synthesize peer=_peer - In the implementation block
@property (nonatomic,readonly) NSInputStream * inputStream;                //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;              //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,readonly) unsigned short PSM;                         //@synthesize PSM=_PSM - In the implementation block
-(void)dealloc;
-(id)description;
-(NSOutputStream *)outputStream;
-(CBPeer *)peer;
-(NSInputStream *)inputStream;
-(unsigned short)PSM;
-(int)socketFD;
-(id)initWithPeer:(id)arg1 info:(id)arg2 ;
@end

