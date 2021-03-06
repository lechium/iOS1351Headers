/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSUUID;

@interface NWRemoteConnectionWriteRequest : NSObject {

	NSData* _data;
	NSUUID* _clientID;

}

@property (retain) NSData * data;                  //@synthesize data=_data - In the implementation block
@property (retain) NSUUID * clientID;              //@synthesize clientID=_clientID - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setClientID:(NSUUID *)arg1 ;
-(NSUUID *)clientID;
-(id)initWithData:(id)arg1 clientID:(id)arg2 ;
@end

