/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:29 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, HMAccessorySelectionSetting;

@interface HMAccessorySelectionSettingItem : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _identifier;
	NSString* _title;
	HMAccessorySelectionSetting* _setting;

}

@property (__weak) HMAccessorySelectionSetting * setting;              //@synthesize setting=_setting - In the implementation block
@property (copy,readonly) NSString * keyPath; 
@property (copy,readonly) NSUUID * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (copy,readonly) NSString * localizedTitle; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)keyPath;
-(NSString *)title;
-(NSString *)localizedTitle;
-(id)initWithTitle:(id)arg1 ;
-(HMAccessorySelectionSetting *)setting;
-(void)setSetting:(HMAccessorySelectionSetting *)arg1 ;
@end
