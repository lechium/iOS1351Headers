/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGIdentityKey : NSObject <NSCopying> {

	NSString* _content;
	unsigned long long _type;

}

@property (nonatomic,readonly) NSString * externalId; 
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)isSupportedEntityType:(long long)arg1 ;
+(unsigned long long)identityTypeForKeyPart:(id)arg1 ;
+(id)keyForEmail:(id)arg1 ;
+(id)keyForNormalizedEmail:(id)arg1 ;
+(id)keyForNormalizedPhone:(id)arg1 ;
+(id)keyForInstantMessageAddress:(id)arg1 ;
+(id)keyForSocialProfile:(id)arg1 ;
+(id)keyForPersonHandle:(id)arg1 ;
+(id)keyForContactExternalId:(int)arg1 ;
+(id)keyForContactUniqueId:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(id)uniqueIdentifier;
-(id)serialize;
-(id)emailAddress;
-(id)phone;
-(BOOL)hasPhone;
-(id)socialProfile;
-(NSString *)externalId;
-(id)initWithSerialized:(id)arg1 ;
-(id)identityKey;
-(id)instantMessageAddress;
-(id)initWithType:(unsigned long long)arg1 content:(id)arg2 ;
-(BOOL)isEqualToIdentityKey:(id)arg1 ;
-(BOOL)hasEmailAddress;
-(BOOL)hasInstantMessageAddress;
-(BOOL)hasSocialProfile;
@end

