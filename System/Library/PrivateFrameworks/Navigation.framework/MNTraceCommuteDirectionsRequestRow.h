/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEODirectionsRequest, GEODirectionsResponse, NSError;

@interface MNTraceCommuteDirectionsRequestRow : NSObject {

	unsigned long long _destinationID;
	double _requestTimestamp;
	double _responseTimestamp;
	GEODirectionsRequest* _request;
	GEODirectionsResponse* _response;
	NSError* _responseError;

}

@property (assign,nonatomic) unsigned long long destinationID;              //@synthesize destinationID=_destinationID - In the implementation block
@property (assign,nonatomic) double requestTimestamp;                       //@synthesize requestTimestamp=_requestTimestamp - In the implementation block
@property (assign,nonatomic) double responseTimestamp;                      //@synthesize responseTimestamp=_responseTimestamp - In the implementation block
@property (nonatomic,retain) GEODirectionsRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) GEODirectionsResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * responseError;                       //@synthesize responseError=_responseError - In the implementation block
-(void)setRequest:(GEODirectionsRequest *)arg1 ;
-(GEODirectionsRequest *)request;
-(GEODirectionsResponse *)response;
-(void)setResponse:(GEODirectionsResponse *)arg1 ;
-(void)setResponseError:(NSError *)arg1 ;
-(NSError *)responseError;
-(unsigned long long)destinationID;
-(void)setDestinationID:(unsigned long long)arg1 ;
-(double)responseTimestamp;
-(double)requestTimestamp;
-(void)setRequestTimestamp:(double)arg1 ;
-(void)setResponseTimestamp:(double)arg1 ;
@end
