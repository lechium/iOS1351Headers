/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssertionServices/AssertionServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDictionary;

@interface BKSLaunchdJobSpecification : NSObject <NSCopying, BSXPCCoding, NSSecureCoding> {

	NSString* _labelPrefix;
	NSString* _bundleIdentifier;
	NSString* _bundlePath;
	NSString* _executablePath;
	NSArray* _arguments;
	NSArray* _machServices;
	NSDictionary* _environment;
	NSString* _managedPersona;
	NSString* _standardOutput;
	NSString* _standardError;
	unsigned long long _executionOptions;

}

@property (nonatomic,copy) NSString * labelPrefix;                             //@synthesize labelPrefix=_labelPrefix - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;                              //@synthesize bundlePath=_bundlePath - In the implementation block
@property (nonatomic,copy) NSString * executablePath;                          //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,copy) NSArray * arguments;                                //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy) NSArray * machServices;                             //@synthesize machServices=_machServices - In the implementation block
@property (nonatomic,copy) NSDictionary * environment;                         //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSString * managedPersona;                          //@synthesize managedPersona=_managedPersona - In the implementation block
@property (nonatomic,copy) NSString * standardOutput;                          //@synthesize standardOutput=_standardOutput - In the implementation block
@property (nonatomic,copy) NSString * standardError;                           //@synthesize standardError=_standardError - In the implementation block
@property (assign,nonatomic) unsigned long long executionOptions;              //@synthesize executionOptions=_executionOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)specification;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)bundlePath;
-(NSString *)executablePath;
-(NSArray *)arguments;
-(NSDictionary *)environment;
-(void)setArguments:(NSArray *)arg1 ;
-(void)setEnvironment:(NSDictionary *)arg1 ;
-(void)setStandardOutput:(NSString *)arg1 ;
-(void)setStandardError:(NSString *)arg1 ;
-(NSString *)standardOutput;
-(NSString *)standardError;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)executionOptions;
-(NSString *)managedPersona;
-(void)setExecutionOptions:(unsigned long long)arg1 ;
-(void)setManagedPersona:(NSString *)arg1 ;
-(void)setExecutablePath:(NSString *)arg1 ;
-(void)setMachServices:(NSArray *)arg1 ;
-(NSArray *)machServices;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)setBundlePath:(NSString *)arg1 ;
-(NSString *)labelPrefix;
-(void)setLabelPrefix:(NSString *)arg1 ;
@end

