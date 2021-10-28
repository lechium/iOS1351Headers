/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NearField/NFFieldNotification.h>

@class NSArray, NSData;

@interface NFFieldNotificationECP2_0 : NFFieldNotification {

	BOOL _odaRequired;
	unsigned char _terminalSubType;
	unsigned long long _terminalType;
	NSArray* _tciArray;
	NSData* _openLoopSchemeBitfield;

}

@property (readonly) BOOL odaRequired;                                    //@synthesize odaRequired=_odaRequired - In the implementation block
@property (readonly) unsigned long long terminalType;                     //@synthesize terminalType=_terminalType - In the implementation block
@property (readonly) unsigned char terminalSubType;                       //@synthesize terminalSubType=_terminalSubType - In the implementation block
@property (retain,readonly) NSArray * tciArray;                           //@synthesize tciArray=_tciArray - In the implementation block
@property (retain,readonly) NSData * openLoopSchemeBitfield;              //@synthesize openLoopSchemeBitfield=_openLoopSchemeBitfield - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)terminalType;
-(BOOL)odaRequired;
-(unsigned char)terminalSubType;
-(NSArray *)tciArray;
-(NSData *)openLoopSchemeBitfield;
@end
