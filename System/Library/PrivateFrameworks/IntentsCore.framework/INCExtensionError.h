/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError;

@interface INCExtensionError : NSObject {

	long long _errorCode;
	NSError* _underlyingError;

}

@property (assign,nonatomic) long long errorCode;                  //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,copy) NSError * underlyingError;              //@synthesize underlyingError=_underlyingError - In the implementation block
-(void)setUnderlyingError:(NSError *)arg1 ;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(NSError *)underlyingError;
-(id)initWithErrorCode:(long long)arg1 underlyingError:(id)arg2 ;
@end

