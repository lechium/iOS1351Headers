/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSSet;

@interface AVOutputSettings : NSObject <NSCopying> {

	NSDictionary* _outputSettingsDictionary;

}

@property (nonatomic,readonly) NSSet * compatibleMediaTypes; 
@property (nonatomic,readonly) BOOL willYieldCompressedSamples; 
@property (nonatomic,readonly) NSDictionary * outputSettingsDictionary;              //@synthesize outputSettingsDictionary=_outputSettingsDictionary - In the implementation block
+(id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 exceptionReason:(id*)arg3 ;
+(id)registeredOutputSettingsClasses;
+(id)eligibleOutputSettingsDictionaryKeys;
+(unsigned long long)_validateOutputSettingsDictionary:(id)arg1 compatibilityDescription:(id*)arg2 ;
+(BOOL)supportsEmptyOutputSettingsDictionary;
+(unsigned long long)validateOutputSettingsDictionary:(id)arg1 ;
+(id)outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 ;
+(id)defaultOutputSettingsForMediaType:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)compatibleMediaTypes;
-(BOOL)willYieldCompressedSamples;
-(NSDictionary *)outputSettingsDictionary;
-(BOOL)canFullySpecifyOutputFormatReturningReason:(id*)arg1 ;
-(BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id*)arg1 ;
-(id)initWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
-(BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2 ;
@end

