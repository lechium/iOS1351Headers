/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString;

@interface WLKPlayActivityDecorateLiveOperation : WLKUTSNetworkRequestOperation {

	NSString* _channelID;
	NSString* _serviceID;

}

@property (nonatomic,copy,readonly) NSString * channelID;              //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceID;              //@synthesize serviceID=_serviceID - In the implementation block
-(NSString *)serviceID;
-(NSString *)channelID;
-(id)initWithChannelID:(id)arg1 serviceID:(id)arg2 ;
@end
