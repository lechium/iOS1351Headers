/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Security.framework/Security
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Security/Security-Structs.h>
@class NSData;

@interface CTKClientSEP_SEParameters : NSObject {

	aks_params_sRef _params;
	NSData* _encoded;

}

@property (copy,readonly) NSData * data; 
@property (readonly) const void* bytes; 
@property (readonly) unsigned long long length; 
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(NSData *)data;
-(void)setData:(id)arg1 forKey:(unsigned)arg2 ;
-(id)initWithParameters:(id)arg1 ;
-(void)setNumber:(long long)arg1 forKey:(unsigned)arg2 ;
@end
