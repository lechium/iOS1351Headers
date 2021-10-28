/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, MontrealNNModelNetwork, NSDictionary;

@interface MontrealModelJSONParser : NSObject {

	NSString* _jsonDir;
	MontrealNNModelNetwork* _network;
	NSDictionary* _infoDictionary;

}

@property (readonly) NSString * jsonDir;                            //@synthesize jsonDir=_jsonDir - In the implementation block
@property (readonly) MontrealNNModelNetwork * network;              //@synthesize network=_network - In the implementation block
@property (readonly) NSDictionary * infoDictionary;                 //@synthesize infoDictionary=_infoDictionary - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(NSDictionary *)infoDictionary;
-(id)createJSONFromFile:(id)arg1 ;
-(NSString *)jsonDir;
-(MontrealNNModelNetwork *)network;
@end
