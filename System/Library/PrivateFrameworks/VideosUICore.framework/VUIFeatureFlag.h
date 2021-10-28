/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface VUIFeatureFlag : NSObject {

	BOOL _enabled;
	BOOL _isAvailableForOS;
	BOOL _isEnabledByDefault;
	NSString* _featureName;
	NSString* _featureDescription;
	NSString* _defaultsKey;
	NSString* _defaultsDomain;
	NSString* _isEnabledByDefaultKey;

}

@property (nonatomic,readonly) NSString * defaultsDomain;                   //@synthesize defaultsDomain=_defaultsDomain - In the implementation block
@property (nonatomic,retain) NSString * isEnabledByDefaultKey;              //@synthesize isEnabledByDefaultKey=_isEnabledByDefaultKey - In the implementation block
@property (nonatomic,readonly) NSString * featureName;                      //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,readonly) NSString * featureDescription;               //@synthesize featureDescription=_featureDescription - In the implementation block
@property (nonatomic,readonly) NSString * defaultsKey;                      //@synthesize defaultsKey=_defaultsKey - In the implementation block
@property (nonatomic,readonly) BOOL isAvailableForOS;                       //@synthesize isAvailableForOS=_isAvailableForOS - In the implementation block
@property (nonatomic,readonly) BOOL isEnabledByDefault;                     //@synthesize isEnabledByDefault=_isEnabledByDefault - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                  //@synthesize enabled=_enabled - In the implementation block
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabledByDefault;
-(NSString *)featureName;
-(NSString *)defaultsKey;
-(NSString *)defaultsDomain;
-(NSString *)featureDescription;
-(id)initWithFeatureDict:(id)arg1 ;
-(BOOL)isAvailableForOS;
-(NSString *)isEnabledByDefaultKey;
-(BOOL)_enabledFromDefaults;
-(void)setIsEnabledByDefaultKey:(NSString *)arg1 ;
@end
