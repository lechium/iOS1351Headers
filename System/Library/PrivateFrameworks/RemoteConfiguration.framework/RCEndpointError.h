/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:27 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface RCEndpointError : NSObject {

	NSString* _errorCode;
	NSString* _message;
	NSString* _stacktrace;

}

@property (nonatomic,copy,readonly) NSString * errorCode;               //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                 //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSString * stacktrace;              //@synthesize stacktrace=_stacktrace - In the implementation block
+(id)endpointErrorWithDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)message;
-(NSString *)errorCode;
-(id)initWithErrorCode:(id)arg1 message:(id)arg2 stacktrace:(id)arg3 ;
-(NSString *)stacktrace;
@end

