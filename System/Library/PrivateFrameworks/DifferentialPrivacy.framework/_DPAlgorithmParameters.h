/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface _DPAlgorithmParameters : NSObject {

	NSString* _serverAlgorithmString;
	NSDictionary* _parameterDictionary;

}

@property (nonatomic,copy,readonly) NSString * serverAlgorithmString;              //@synthesize serverAlgorithmString=_serverAlgorithmString - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameterDictionary;                 //@synthesize parameterDictionary=_parameterDictionary - In the implementation block
+(id)parametersFromFile:(id)arg1 ;
+(id)algorithmParametersFromDictionary:(id)arg1 ;
+(id)algorithmParametersForKey:(id)arg1 ;
+(id)allAlgorithmNames;
-(id)init;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)parameterDictionary;
-(NSString *)serverAlgorithmString;
@end
