/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSError, NSDate, NSDictionary;

@interface BRCTransferFailureReport : NSObject {

	NSMutableDictionary* _privateDBErrorCountByPCSState;
	NSMutableDictionary* _shareDBErrorCountByPCSState;
	NSError* _error;
	NSDate* _lastFailureDate;

}

@property (nonatomic,readonly) NSError * error;                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSDate * lastFailureDate;                                  //@synthesize lastFailureDate=_lastFailureDate - In the implementation block
@property (nonatomic,readonly) NSDictionary * privateDBErrorCountByPCSState;              //@synthesize privateDBErrorCountByPCSState=_privateDBErrorCountByPCSState - In the implementation block
@property (nonatomic,readonly) NSDictionary * shareDBErrorCountByPCSState;                //@synthesize shareDBErrorCountByPCSState=_shareDBErrorCountByPCSState - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSError *)error;
-(id)initWithError:(id)arg1 ;
-(NSDate *)lastFailureDate;
-(BOOL)isEqualToTransferFailureReport:(id)arg1 ;
-(void)encounteredErrorWithPCSState:(unsigned)arg1 privateDB:(BOOL)arg2 atDate:(id)arg3 ;
-(NSDictionary *)privateDBErrorCountByPCSState;
-(NSDictionary *)shareDBErrorCountByPCSState;
@end
