/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:09 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString, INShortcut;

@interface INVoiceShortcut : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _identifier;
	NSString* _invocationPhrase;
	INShortcut* _shortcut;

}

@property (nonatomic,readonly) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * invocationPhrase;              //@synthesize invocationPhrase=_invocationPhrase - In the implementation block
@property (nonatomic,copy,readonly) INShortcut * shortcut;                    //@synthesize shortcut=_shortcut - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)intent;
-(id)userActivity;
-(INShortcut *)shortcut;
-(id)initWithIntent:(id)arg1 ;
-(id)initWithUserActivity:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 invocationPhrase:(id)arg2 shortcut:(id)arg3 ;
-(id)_initWithVCVoiceShortcut:(id)arg1 ;
-(NSString *)invocationPhrase;
@end

