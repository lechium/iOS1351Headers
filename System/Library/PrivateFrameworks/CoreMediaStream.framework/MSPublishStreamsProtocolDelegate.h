/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:21 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MSPublishStreamsProtocolDelegate <MSStreamsProtocolDelegate>
@required
-(void)publishStreamsProtocol:(id)arg1 didFinishUploadingMetadataResponse:(id)arg2 error:(id)arg3;
-(void)publishStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
-(void)publishStreamsProtocol:(id)arg1 didFinishSendingUploadCompleteError:(id)arg2;

@end

