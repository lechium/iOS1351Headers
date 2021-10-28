/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:59 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError;

@interface SiriCoreErrorInfo : NSObject {

	BOOL _isPeerConnectionError;
	BOOL _isPeerNotNearbyError;
	NSError* _error;

}

@property (nonatomic,retain) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL isPeerConnectionError;              //@synthesize isPeerConnectionError=_isPeerConnectionError - In the implementation block
@property (assign,nonatomic) BOOL isPeerNotNearbyError;               //@synthesize isPeerNotNearbyError=_isPeerNotNearbyError - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isPeerConnectionError;
-(void)setIsPeerConnectionError:(BOOL)arg1 ;
-(BOOL)isPeerNotNearbyError;
-(void)setIsPeerNotNearbyError:(BOOL)arg1 ;
@end
