/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface SKUIMetricsDOMChange : NSObject <NSCopying> {

	BOOL _fromDeferredMessage;
	double _buildStartTime;
	double _buildEndTime;
	double _renderStartTime;
	double _renderEndTime;

}

@property (assign,nonatomic) double buildStartTime;                                              //@synthesize buildStartTime=_buildStartTime - In the implementation block
@property (assign,nonatomic) double buildEndTime;                                                //@synthesize buildEndTime=_buildEndTime - In the implementation block
@property (assign,nonatomic) double renderStartTime;                                             //@synthesize renderStartTime=_renderStartTime - In the implementation block
@property (assign,nonatomic) double renderEndTime;                                               //@synthesize renderEndTime=_renderEndTime - In the implementation block
@property (assign,getter=isFromDeferredMessage,nonatomic) BOOL fromDeferredMessage;              //@synthesize fromDeferredMessage=_fromDeferredMessage - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(double)buildStartTime;
-(double)buildEndTime;
-(double)renderStartTime;
-(double)renderEndTime;
-(void)setBuildStartTime:(double)arg1 ;
-(void)setBuildEndTime:(double)arg1 ;
-(void)setFromDeferredMessage:(BOOL)arg1 ;
-(void)setRenderStartTime:(double)arg1 ;
-(void)setRenderEndTime:(double)arg1 ;
-(BOOL)isFromDeferredMessage;
-(id)initWithReportDomBuildTimesMessagePayload:(id)arg1 ;
@end

