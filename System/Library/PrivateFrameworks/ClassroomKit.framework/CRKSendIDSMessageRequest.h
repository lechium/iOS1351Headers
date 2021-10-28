/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATTaskRequest.h>

@class NSString, NSDictionary;

@interface CRKSendIDSMessageRequest : CATTaskRequest {

	NSString* _sourceAppleID;
	NSString* _destinationAddress;
	NSDictionary* _message;

}

@property (nonatomic,copy) NSString * sourceAppleID;                   //@synthesize sourceAppleID=_sourceAppleID - In the implementation block
@property (nonatomic,copy) NSString * destinationAddress;              //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (nonatomic,copy) NSDictionary * message;                     //@synthesize message=_message - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)message;
-(void)setMessage:(NSDictionary *)arg1 ;
-(NSString *)destinationAddress;
-(void)setDestinationAddress:(NSString *)arg1 ;
-(void)setSourceAppleID:(NSString *)arg1 ;
-(NSString *)sourceAppleID;
@end
