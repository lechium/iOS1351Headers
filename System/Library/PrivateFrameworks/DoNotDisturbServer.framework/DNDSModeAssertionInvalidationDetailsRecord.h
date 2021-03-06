/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/DNDSModeAssertionStoreRecordDictionaryEncoding.h>

@class NSString;

@interface DNDSModeAssertionInvalidationDetailsRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding> {

	NSString* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
+(id)recordForDictionary:(id)arg1 keys:(const SCD_Struct_DN9*)arg2 ;
+(id)recordForInvalidationDetails:(id)arg1 ;
-(id)object;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryWithKeys:(const SCD_Struct_DN9*)arg1 options:(unsigned long long)arg2 ;
@end

