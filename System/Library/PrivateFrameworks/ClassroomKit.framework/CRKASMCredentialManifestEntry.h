/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRKDictionaryFormatable.h>

@class NSString, NSDateInterval;

@interface CRKASMCredentialManifestEntry : NSObject <CRKDictionaryFormatable> {

	NSString* _userIdentifier;
	NSDateInterval* _validityInterval;
	NSString* _fingerprint;

}

@property (nonatomic,copy,readonly) NSString * userIdentifier;                           //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,readonly) NSDateInterval * validityInterval;                        //@synthesize validityInterval=_validityInterval - In the implementation block
@property (nonatomic,copy,readonly) NSString * fingerprint;                              //@synthesize fingerprint=_fingerprint - In the implementation block
@property (getter=isFullyPopulated,nonatomic,readonly) BOOL fullyPopulated; 
@property (nonatomic,copy,readonly) NSString * stringValue; 
+(id)validityIntervalWithDictionary:(id)arg1 ;
-(id)init;
-(NSString *)userIdentifier;
-(NSString *)stringValue;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryValue;
-(NSString *)fingerprint;
-(id)initWithUserIdentifier:(id)arg1 validityInterval:(id)arg2 fingerprint:(id)arg3 ;
-(BOOL)isFullyPopulated;
-(NSDateInterval *)validityInterval;
@end

