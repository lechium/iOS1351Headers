/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthRecordsPlugin/HDFHIRResourceTask.h>

@class NSDictionary, HDFHIRResourceSchema;

@interface HDFHIRResourceQueryTask : HDFHIRResourceTask {

	NSDictionary* _bindings;
	/*^block*/id _queryCompletion;
	long long _queryMode;
	HDFHIRResourceSchema* _resourceSchema;

}

@property (nonatomic,copy,readonly) NSDictionary * bindings;                            //@synthesize bindings=_bindings - In the implementation block
@property (nonatomic,copy,readonly) id queryCompletion;                                 //@synthesize queryCompletion=_queryCompletion - In the implementation block
@property (nonatomic,readonly) long long queryMode;                                     //@synthesize queryMode=_queryMode - In the implementation block
@property (nonatomic,copy,readonly) HDFHIRResourceSchema * resourceSchema;              //@synthesize resourceSchema=_resourceSchema - In the implementation block
-(NSDictionary *)bindings;
-(void)handleError:(id)arg1 endState:(id)arg2 ;
-(void)handleResponse:(id)arg1 JSONData:(id)arg2 endState:(id)arg3 ;
-(id)createURLRequestWithCredentialResult:(id)arg1 error:(id*)arg2 ;
-(id)initWithCredentialedSession:(id)arg1 resourceSchema:(id)arg2 queryMode:(long long)arg3 bindings:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)queryCompletion;
-(HDFHIRResourceSchema *)resourceSchema;
-(long long)queryMode;
@end

