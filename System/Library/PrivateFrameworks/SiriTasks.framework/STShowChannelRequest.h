/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AFSiriRequest.h>

@class STMediaChannel;

@interface STShowChannelRequest : AFSiriRequest {

	STMediaChannel* _channel;

}

@property (nonatomic,readonly) STMediaChannel * channel;              //@synthesize channel=_channel - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(STMediaChannel *)channel;
-(id)_initWithChannel:(id)arg1 ;
@end

