/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/ICRequestOperation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSSecureCoding;
@interface ICRemoteRequestOperation : ICRequestOperation <NSSecureCoding> {

	BOOL __shadowOperationForRemoteExecution;
	id<NSSecureCoding> _response;

}

@property (assign,setter=_setShadowOperationForRemoteExecution:,getter=_isShadowOperationForRemoteExecution,nonatomic) BOOL _shadowOperationForRemoteExecution;              //@synthesize _shadowOperationForRemoteExecution=__shadowOperationForRemoteExecution - In the implementation block
@property (nonatomic,retain) id<NSSecureCoding> response;                                                                                                                    //@synthesize response=_response - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_execute;
-(id<NSSecureCoding>)response;
-(void)setResponse:(id<NSSecureCoding>)arg1 ;
-(BOOL)_isShadowOperationForRemoteExecution;
-(void)_setShadowOperationForRemoteExecution:(BOOL)arg1 ;
@end

