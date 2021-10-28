/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSSecureCoding;
@class NSError;

@interface ICRemoteRequestOperationExecutionResponse : NSObject <NSSecureCoding> {

	id<NSSecureCoding> _remoteRequestOperationResponse;
	NSError* _remoteRequestOperationError;

}

@property (nonatomic,retain) id<NSSecureCoding> remoteRequestOperationResponse;              //@synthesize remoteRequestOperationResponse=_remoteRequestOperationResponse - In the implementation block
@property (nonatomic,retain) NSError * remoteRequestOperationError;                          //@synthesize remoteRequestOperationError=_remoteRequestOperationError - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRemoteRequestOperationResponse:(id)arg1 remoteRequestOperationError:(id)arg2 ;
-(id<NSSecureCoding>)remoteRequestOperationResponse;
-(void)setRemoteRequestOperationResponse:(id<NSSecureCoding>)arg1 ;
-(NSError *)remoteRequestOperationError;
-(void)setRemoteRequestOperationError:(NSError *)arg1 ;
@end
