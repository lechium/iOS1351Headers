/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:28 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractTicket.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse;

@interface GEOAbstractRequestResponseTicket : GEOAbstractTicket {

	GEOPDPlaceRequest* _request;
	GEOPDPlaceResponse* _response;

}
-(void)cancel;
-(id)initWithTraits:(id)arg1 ;
-(SCD_Struct_GE2)dataRequestKind;
-(void)performSubmitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(double)arg3 networkActivity:(/*^block*/id)arg4 ;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 ;
-(void)performSubmitWithHandler:(/*^block*/id)arg1 timeout:(double)arg2 networkActivity:(/*^block*/id)arg3 ;
@end

