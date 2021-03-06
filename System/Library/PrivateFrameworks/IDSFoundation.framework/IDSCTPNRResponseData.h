/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSCTPNRResponseData.h>
@class NSString, NSData;


@protocol IDSCTPNRResponseData <NSObject>
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (nonatomic,readonly) NSString * phoneBookNumber; 
@property (nonatomic,readonly) NSData * signature; 
@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,readonly) NSString * status; 
@required
-(NSString *)status;
-(NSString *)phoneNumber;
-(BOOL)success;
-(NSData *)signature;
-(NSString *)phoneBookNumber;

@end


@class NSString, NSData;

@interface IDSCTPNRResponseData : NSObject <IDSCTPNRResponseData> {

	BOOL _success;
	NSString* _phoneNumber;
	NSString* _phoneBookNumber;
	NSData* _signature;
	NSString* _status;

}

@property (nonatomic,retain) NSString * phoneNumber;                  //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * phoneBookNumber;              //@synthesize phoneBookNumber=_phoneBookNumber - In the implementation block
@property (nonatomic,retain) NSData * signature;                      //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) BOOL success;                            //@synthesize success=_success - In the implementation block
@property (nonatomic,retain) NSString * status;                       //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)status;
-(NSString *)phoneNumber;
-(BOOL)success;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setStatus:(NSString *)arg1 ;
-(NSData *)signature;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(NSString *)phoneBookNumber;
-(id)initWithCTResponse:(id)arg1 phoneBookNumber:(id)arg2 ;
-(void)setPhoneBookNumber:(NSString *)arg1 ;
@end

