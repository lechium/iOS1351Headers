/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:59 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, NSMutableData, NSData;

@interface WPDAdvertisingData : NSObject {

	BOOL _isRanging;
	long long _advertRate;
	NSMutableSet* _types;
	NSMutableData* _internalData;

}

@property (retain) NSMutableData * internalData;                //@synthesize internalData=_internalData - In the implementation block
@property (retain) NSMutableSet * types;                        //@synthesize types=_types - In the implementation block
@property (assign) long long advertRate;                        //@synthesize advertRate=_advertRate - In the implementation block
@property (getter=getData,readonly) NSData * data; 
@property (assign) BOOL isRanging;                              //@synthesize isRanging=_isRanging - In the implementation block
-(id)init;
-(id)description;
-(BOOL)isEqualToData:(id)arg1 ;
-(NSMutableSet *)types;
-(NSMutableData *)internalData;
-(void)setTypes:(NSMutableSet *)arg1 ;
-(void)setInternalData:(NSMutableData *)arg1 ;
-(long long)advertRate;
-(BOOL)isRanging;
-(void)setAdvertRate:(long long)arg1 ;
-(void)addAdvertisingRequest:(id)arg1 ;
-(id)getData;
-(BOOL)isValidWithAdditionalRequest:(id)arg1 ;
-(void)setIsRanging:(BOOL)arg1 ;
@end

