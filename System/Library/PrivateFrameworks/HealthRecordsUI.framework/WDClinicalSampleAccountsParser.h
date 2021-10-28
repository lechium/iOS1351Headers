/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface WDClinicalSampleAccountsParser : NSObject {

	NSString* _accountFilename;

}

@property (nonatomic,copy) NSString * accountFilename;              //@synthesize accountFilename=_accountFilename - In the implementation block
+(id)_jsonDictionaryFromJSONObject:(id)arg1 subElement:(id)arg2 error:(id*)arg3 ;
+(id)_stringOnlyDictionaryFromJSONDictionary:(id)arg1 ;
-(id)initWithAccountFilename:(id)arg1 ;
-(id)parsedAccountsWithError:(id*)arg1 ;
-(id)_parseAccountsFromJSONData:(id)arg1 error:(id*)arg2 ;
-(id)_parseProviderFromSampleAccountJSONDict:(id)arg1 error:(id*)arg2 ;
-(id)_parseBatchesFromSampleAccountJSONDict:(id)arg1 error:(id*)arg2 ;
-(id)_parseGatewayFromProviderJSONDict:(id)arg1 error:(id*)arg2 ;
-(NSString *)accountFilename;
-(void)setAccountFilename:(NSString *)arg1 ;
@end
