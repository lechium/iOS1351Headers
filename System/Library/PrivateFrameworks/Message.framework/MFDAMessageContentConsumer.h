/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:35 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFDAStreamingContentConsumer.h>

@protocol MFCollectingDataConsumer, MFMessageDataConsumerFactory;
@class NSMutableData, DAMailMessage, NSString;

@interface MFDAMessageContentConsumer : NSObject <MFDAStreamingContentConsumer> {

	int _requestedFormat;
	id<MFCollectingDataConsumer> _dataConsumer;
	id<MFCollectingDataConsumer> _alternatePartConsumer;
	id<MFMessageDataConsumerFactory> _consumerFactory;
	BOOL _triedCreatingAlternatePartConsumer;
	BOOL _didBeginStreaming;
	BOOL _succeeded;
	NSMutableData* _bodyData;
	double _timeOfLastActivity;
	DAMailMessage* _message;

}

@property (assign,nonatomic) int requestedFormat;                                             //@synthesize requestedFormat=_requestedFormat - In the implementation block
@property (nonatomic,retain) id<MFCollectingDataConsumer> dataConsumer;                       //@synthesize dataConsumer=_dataConsumer - In the implementation block
@property (nonatomic,retain) id<MFCollectingDataConsumer> alternatePartConsumer;              //@synthesize alternatePartConsumer=_alternatePartConsumer - In the implementation block
@property (nonatomic,retain) id<MFMessageDataConsumerFactory> consumerFactory;                //@synthesize consumerFactory=_consumerFactory - In the implementation block
@property (nonatomic,readonly) DAMailMessage * message;                                       //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSMutableData * bodyData;                                      //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,readonly) double timeOfLastActivity;                                     //@synthesize timeOfLastActivity=_timeOfLastActivity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)data;
-(id<MFCollectingDataConsumer>)dataConsumer;
-(DAMailMessage *)message;
-(NSMutableData *)bodyData;
-(BOOL)succeeded;
-(void)setDataConsumer:(id<MFCollectingDataConsumer>)arg1 ;
-(BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2 ;
-(void)consumeData:(char*)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4 ;
-(void)didEndStreamingForMailMessage:(id)arg1 ;
-(id<MFMessageDataConsumerFactory>)consumerFactory;
-(id)dataConsumerForPart:(id)arg1 ;
-(void)setAlternatePartConsumer:(id<MFCollectingDataConsumer>)arg1 ;
-(id<MFCollectingDataConsumer>)alternatePartConsumer;
-(BOOL)didBeginStreaming;
-(double)timeOfLastActivity;
-(void)setConsumerFactory:(id<MFMessageDataConsumerFactory>)arg1 ;
-(int)requestedFormat;
-(void)setRequestedFormat:(int)arg1 ;
@end

