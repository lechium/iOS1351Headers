/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:27 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEOXPCRequest.h>
#import <libobjc.A.dylib/GEOXPCRequest.h>

@class GEODataRequestThrottlerToken, NSString;

@interface GEOThrottlerIsSafeRequest : GEOXPCRequest <GEOXPCRequest> {

	int _requestKindType;
	int _requestKindSubtype;
	BOOL _nextSafeRequestTime;
	BOOL _availableRequestCount;
	BOOL _includeToken;
	GEODataRequestThrottlerToken* _throttlerToken;

}

@property (assign,nonatomic) int requestKindType;                                        //@synthesize requestKindType=_requestKindType - In the implementation block
@property (assign,nonatomic) int requestKindSubtype;                                     //@synthesize requestKindSubtype=_requestKindSubtype - In the implementation block
@property (assign,nonatomic) BOOL nextSafeRequestTime;                                   //@synthesize nextSafeRequestTime=_nextSafeRequestTime - In the implementation block
@property (assign,nonatomic) BOOL availableRequestCount;                                 //@synthesize availableRequestCount=_availableRequestCount - In the implementation block
@property (assign,nonatomic) BOOL includeToken;                                          //@synthesize includeToken=_includeToken - In the implementation block
@property (nonatomic,retain) GEODataRequestThrottlerToken * throttlerToken;              //@synthesize throttlerToken=_throttlerToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(Class)replyClass;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)expectsReply;
-(int)requestKindType;
-(void)setRequestKindType:(int)arg1 ;
-(int)requestKindSubtype;
-(void)setRequestKindSubtype:(int)arg1 ;
-(BOOL)nextSafeRequestTime;
-(void)setNextSafeRequestTime:(BOOL)arg1 ;
-(BOOL)availableRequestCount;
-(void)setAvailableRequestCount:(BOOL)arg1 ;
-(BOOL)includeToken;
-(void)setIncludeToken:(BOOL)arg1 ;
-(GEODataRequestThrottlerToken *)throttlerToken;
-(void)setThrottlerToken:(GEODataRequestThrottlerToken *)arg1 ;
@end

