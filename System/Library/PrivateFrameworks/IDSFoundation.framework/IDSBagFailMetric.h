/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUTSOSMetric.h>

@class NSString;

@interface IDSBagFailMetric : NSObject <CUTSOSMetric> {

	unsigned long long _sosDomain;
	unsigned long long _sosType;
	unsigned long long _sosError;
	NSString* _operationID;

}

@property (assign,nonatomic) unsigned long long sosDomain;              //@synthesize sosDomain=_sosDomain - In the implementation block
@property (assign,nonatomic) unsigned long long sosType;                //@synthesize sosType=_sosType - In the implementation block
@property (assign,nonatomic) unsigned long long sosError;               //@synthesize sosError=_sosError - In the implementation block
@property (nonatomic,retain) NSString * operationID;                    //@synthesize operationID=_operationID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * name; 
+(id)metricWithDomain:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(unsigned long long)arg3 bagURL:(id)arg4 ;
-(NSString *)name;
-(NSString *)operationID;
-(void)setOperationID:(NSString *)arg1 ;
-(id)initWithDomain:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(unsigned long long)arg3 bagURL:(id)arg4 ;
-(unsigned long long)sosDomain;
-(unsigned long long)sosType;
-(unsigned long long)sosError;
-(void)setSosDomain:(unsigned long long)arg1 ;
-(void)setSosType:(unsigned long long)arg1 ;
-(void)setSosError:(unsigned long long)arg1 ;
@end

