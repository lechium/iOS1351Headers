//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSStreamDelegate-Protocol.h"

@class NSInputStream, NSMutableArray, NSMutableData, NSOutputStream, NSString;
@protocol MSDF200CommunicatorDelegate, OS_dispatch_queue;

@interface MSDF200Communicator : NSObject <NSStreamDelegate>
{
    id <MSDF200CommunicatorDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_communicationQueue;	// 16 = 0x10
    NSInputStream *_inputStream;	// 24 = 0x18
    NSOutputStream *_outputStream;	// 32 = 0x20
    unsigned long long _connectionStatus;	// 40 = 0x28
    unsigned long long _parsingState;	// 48 = 0x30
    NSMutableArray *_outgoingMessages;	// 56 = 0x38
    NSMutableData *_inputDataBuf;	// 64 = 0x40
    NSMutableData *_parsedDataBuf;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010004da0c
@property(retain, nonatomic) NSMutableData *parsedDataBuf; // @synthesize parsedDataBuf=_parsedDataBuf;
@property(retain, nonatomic) NSMutableData *inputDataBuf; // @synthesize inputDataBuf=_inputDataBuf;
@property(retain, nonatomic) NSMutableArray *outgoingMessages; // @synthesize outgoingMessages=_outgoingMessages;
@property unsigned long long parsingState; // @synthesize parsingState=_parsingState;
@property(nonatomic) unsigned long long connectionStatus; // @synthesize connectionStatus=_connectionStatus;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *communicationQueue; // @synthesize communicationQueue=_communicationQueue;
@property(nonatomic) __weak id <MSDF200CommunicatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFinishReadRequestWithMessages:(id)arg1;	// IMP=0x000000010004d8b0
- (void)didFinishWriteRequestForMessage:(id)arg1 withResult:(_Bool)arg2 error:(id)arg3;	// IMP=0x000000010004d7dc
- (void)didConnectionStatusChange:(unsigned long long)arg1;	// IMP=0x000000010004d734
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x000000010004d2f8
- (void)performWriteMessage;	// IMP=0x000000010004cde4
- (void)performReadMessage;	// IMP=0x000000010004cb20
- (void)parseAndFormatPacketFromReceivedData;	// IMP=0x000000010004c4f4
- (void)handleTimedOutMessage:(id)arg1;	// IMP=0x000000010004c38c
- (void)setupAndActivateTimeoutWatchdogOnMessage:(id)arg1;	// IMP=0x000000010004c200
- (void)requestToWriteMessage:(id)arg1;	// IMP=0x000000010004bf34
- (void)endCommunication;	// IMP=0x000000010004bbf4
- (void)createCommunication;	// IMP=0x000000010004b984
- (_Bool)isBracketDetectedInIORegistry;	// IMP=0x000000010004b7ec
- (id)init;	// IMP=0x000000010004b67c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

