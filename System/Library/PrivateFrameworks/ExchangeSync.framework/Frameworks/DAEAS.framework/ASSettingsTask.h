/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DAEAS/ASTask.h>

@class NSArray, NSDictionary, DASettingsRequestParams;

@interface ASSettingsTask : ASTask {

	int _key;
	NSArray* _getters;
	NSDictionary* _setters;
	DASettingsRequestParams* _requestParams;
	long long _status;
	id _result;

}

@property (assign,nonatomic) int key;                                              //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) long long status;                                     //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) id result;                                            //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSArray * getters;                                    //@synthesize getters=_getters - In the implementation block
@property (nonatomic,retain) NSDictionary * setters;                               //@synthesize setters=_setters - In the implementation block
@property (nonatomic,retain) DASettingsRequestParams * requestParams;              //@synthesize requestParams=_requestParams - In the implementation block
-(id)init;
-(int)key;
-(id)result;
-(long long)status;
-(void)setKey:(int)arg1 ;
-(void)setResult:(id)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(id)requestBody;
-(void)setRequestParams:(DASettingsRequestParams *)arg1 ;
-(DASettingsRequestParams *)requestParams;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(void)setGetters:(NSArray *)arg1 ;
-(void)setSetters:(NSDictionary *)arg1 ;
-(NSArray *)getters;
-(NSDictionary *)setters;
@end

