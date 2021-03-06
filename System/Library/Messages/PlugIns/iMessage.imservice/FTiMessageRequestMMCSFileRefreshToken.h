/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iMessage/iMessage-Structs.h>
#import <IDSFoundation/IDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSNumber;

@interface FTiMessageRequestMMCSFileRefreshToken : IDSMessage <NSCopying> {

	NSString* _owner;
	NSData* _signature;
	NSNumber* _fileLength;
	NSString* _requestContentHeaders;
	NSNumber* _requestContentVersion;
	NSString* _responseContentHeaders;
	NSData* _responseContentBody;
	NSString* _authURL;
	NSNumber* _responseContentVersion;

}

@property (nonatomic,copy) NSString * owner;                               //@synthesize owner=_owner - In the implementation block
@property (nonatomic,copy) NSData * signature;                             //@synthesize signature=_signature - In the implementation block
@property (nonatomic,copy) NSNumber * fileLength;                          //@synthesize fileLength=_fileLength - In the implementation block
@property (nonatomic,copy) NSString * authURL;                             //@synthesize authURL=_authURL - In the implementation block
@property (nonatomic,copy) NSNumber * requestContentVersion;               //@synthesize requestContentVersion=_requestContentVersion - In the implementation block
@property (nonatomic,copy) NSString * requestContentHeaders;               //@synthesize requestContentHeaders=_requestContentHeaders - In the implementation block
@property (nonatomic,copy) NSNumber * responseContentVersion;              //@synthesize responseContentVersion=_responseContentVersion - In the implementation block
@property (nonatomic,copy) NSString * responseContentHeaders;              //@synthesize responseContentHeaders=_responseContentHeaders - In the implementation block
@property (nonatomic,copy) NSData * responseContentBody;                   //@synthesize responseContentBody=_responseContentBody - In the implementation block
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOwner:(NSString *)arg1 ;
-(NSString *)owner;
-(NSData *)signature;
-(id)messageBody;
-(void)setSignature:(NSData *)arg1 ;
-(long long)command;
-(long long)responseCommand;
-(id)requiredKeys;
-(NSString *)authURL;
-(void)handleResponseDictionary:(id)arg1 ;
-(NSNumber *)fileLength;
-(void)setAuthURL:(NSString *)arg1 ;
-(void)setFileLength:(NSNumber *)arg1 ;
-(void)setRequestContentHeaders:(NSString *)arg1 ;
-(NSNumber *)requestContentVersion;
-(void)setRequestContentVersion:(NSNumber *)arg1 ;
-(NSString *)requestContentHeaders;
-(NSNumber *)responseContentVersion;
-(void)setResponseContentVersion:(NSNumber *)arg1 ;
-(NSString *)responseContentHeaders;
-(void)setResponseContentHeaders:(NSString *)arg1 ;
-(NSData *)responseContentBody;
-(void)setResponseContentBody:(NSData *)arg1 ;
@end

