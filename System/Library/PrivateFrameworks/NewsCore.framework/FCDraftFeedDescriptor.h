/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCFeedDescriptor.h>

@protocol FCChannelProviding;
@class NSString;

@interface FCDraftFeedDescriptor : FCFeedDescriptor {

	id<FCChannelProviding> _channel;
	NSString* _articleListID;
	NSString* _issueListID;

}

@property (nonatomic,readonly) id<FCChannelProviding> channel;              //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) NSString * articleListID;                    //@synthesize articleListID=_articleListID - In the implementation block
@property (nonatomic,readonly) NSString * issueListID;                      //@synthesize issueListID=_issueListID - In the implementation block
-(id)name;
-(id<FCChannelProviding>)channel;
-(id)initWithChannel:(id)arg1 articleListID:(id)arg2 issueListID:(id)arg3 ;
-(id)feedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2 ;
-(id)backingChannel;
-(id)allEmitterClasses;
-(long long)feedType;
-(NSString *)issueListID;
-(NSString *)articleListID;
@end

